
// Generated from MiShell.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "MiShellListener.h"


/**
 * This class provides an empty implementation of MiShellListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MiShellBaseListener : public MiShellListener {
public:

  virtual void enterProgram(MiShellParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(MiShellParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(MiShellParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(MiShellParser::StatementContext * /*ctx*/) override { }

  virtual void enterCommand(MiShellParser::CommandContext * /*ctx*/) override { }
  virtual void exitCommand(MiShellParser::CommandContext * /*ctx*/) override { }

  virtual void enterIf_statement(MiShellParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(MiShellParser::If_statementContext * /*ctx*/) override { }

  virtual void enterWhile_statement(MiShellParser::While_statementContext * /*ctx*/) override { }
  virtual void exitWhile_statement(MiShellParser::While_statementContext * /*ctx*/) override { }

  virtual void enterVariable_declaration(MiShellParser::Variable_declarationContext * /*ctx*/) override { }
  virtual void exitVariable_declaration(MiShellParser::Variable_declarationContext * /*ctx*/) override { }

  virtual void enterAccess_command(MiShellParser::Access_commandContext * /*ctx*/) override { }
  virtual void exitAccess_command(MiShellParser::Access_commandContext * /*ctx*/) override { }

  virtual void enterList_operation(MiShellParser::List_operationContext * /*ctx*/) override { }
  virtual void exitList_operation(MiShellParser::List_operationContext * /*ctx*/) override { }

  virtual void enterSet_environment(MiShellParser::Set_environmentContext * /*ctx*/) override { }
  virtual void exitSet_environment(MiShellParser::Set_environmentContext * /*ctx*/) override { }

  virtual void enterShow_environment(MiShellParser::Show_environmentContext * /*ctx*/) override { }
  virtual void exitShow_environment(MiShellParser::Show_environmentContext * /*ctx*/) override { }

  virtual void enterSystem_command(MiShellParser::System_commandContext * /*ctx*/) override { }
  virtual void exitSystem_command(MiShellParser::System_commandContext * /*ctx*/) override { }

  virtual void enterExpression(MiShellParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(MiShellParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterAtom(MiShellParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(MiShellParser::AtomContext * /*ctx*/) override { }

  virtual void enterParameters(MiShellParser::ParametersContext * /*ctx*/) override { }
  virtual void exitParameters(MiShellParser::ParametersContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

