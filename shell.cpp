#include <iostream>
#include <unordered_map>
#include "MiShellLexer.h"
#include "MiShellParser.h"
#include "antlr4-runtime/antlr4-runtime.h"

using namespace antlr4;

class MiShellVisitor : public MiShellParserBaseVisitor {
private:
    std::unordered_map<std::string, std::string> variables;
    std::unordered_map<std::string, std::string> environment;

public:
    antlrcpp::Any visitProgram(MiShellParser::ProgramContext *context) override {
        return visitChildren(context);
    }

    antlrcpp::Any visitStatement(MiShellParser::StatementContext *context) override {
        return visitChildren(context);
    }

    antlrcpp::Any visitCommand(MiShellParser::CommandContext *context) override {
        std::string commandName = context->COMMAND_NAME()->getText();
        std::vector<std::string> parameters = visitParameters(context->parameters());

        if (commandName == "echo") {
            for (const auto &param : parameters) {
                std::cout << param << " ";
            }
            std::cout << std::endl;
        }
    
        return nullptr;
    }

    antlrcpp::Any visitIf_statement(MiShellParser::If_statementContext *context) override {
        bool condition = visitExpression(context->expression());
        if (condition) {
            visitProgram(context->program(0));
        } else if (context->program().size() > 1) {
            visitProgram(context->program(1));
        }
        return nullptr;
    }

    antlrcpp::Any visitVariable_declaration(MiShellParser::Variable_declarationContext *context) override {
        std::string variableName = context->VARIABLE_NAME()->getText();
        std::string value = std::to_string(visitExpression(context->expression()));
        variables[variableName] = value;
        return nullptr;
    }

    antlrcpp::Any visitExpression(MiShellParser::ExpressionContext *context) override {
        if (context->atom()) {
            return visitAtom(context->atom());
        } else if (context->expression().size() == 1) {
            return visitExpression(context->expression(0));
        } else {
            int left = visitExpression(context->expression(0));
            int right = visitExpression(context->expression(1));

            if (context->PLUS()) {
                return left + right;
            } else if (context->MINUS()) {
                return left - right;
            } else if (context->TIMES()) {
                return left * right;
            } else if (context->DIV()) {
                if (right != 0) {
                    return left / right;
                } else {
                    std::cerr << "Error: División por cero." << std::endl;
                    return 0;
                }
            }
        }
        return 0;
    }

    antlrcpp::Any visitAtom(MiShellParser::AtomContext *context) override {
        if (context->INT()) {
            return std::stoi(context->INT()->getText());
        } else if (context->VARIABLE_NAME()) {
            std::string variableName = context->VARIABLE_NAME()->getText();
            if (variables.find(variableName) != variables.end()) {
                return std::stoi(variables[variableName]);
            }
        }
        return 0;
    }

    std::vector<std::string> visitParameters(MiShellParser::ParametersContext *context) {
        std::vector<std::string> parameters;
        for (auto paramContext : context->expression()) {
            parameters.push_back(std::to_string(visitExpression(paramContext)));
        }
        for (auto paramContext : context->STRING()) {
            parameters.push_back(paramContext->getText());
        }
        return parameters;
    }
};

int main() {
    ANTLRInputStream input(std::cin);
    MiShellLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    MiShellParser parser(&tokens);

    MiShellParser::ProgramContext *programContext = parser.program();

    MiShellVisitor visitor;
    visitor.visitProgram(programContext);

    return 0;
}
