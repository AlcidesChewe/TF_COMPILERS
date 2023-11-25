
// Generated from MiShell.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "MiShellParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MiShellParser.
 */
class  MiShellListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(MiShellParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(MiShellParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(MiShellParser::StatementContext *ctx) = 0;
  virtual void exitStatement(MiShellParser::StatementContext *ctx) = 0;

  virtual void enterCommand(MiShellParser::CommandContext *ctx) = 0;
  virtual void exitCommand(MiShellParser::CommandContext *ctx) = 0;

  virtual void enterIf_statement(MiShellParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(MiShellParser::If_statementContext *ctx) = 0;

  virtual void enterWhile_statement(MiShellParser::While_statementContext *ctx) = 0;
  virtual void exitWhile_statement(MiShellParser::While_statementContext *ctx) = 0;

  virtual void enterVariable_declaration(MiShellParser::Variable_declarationContext *ctx) = 0;
  virtual void exitVariable_declaration(MiShellParser::Variable_declarationContext *ctx) = 0;

  virtual void enterAccess_command(MiShellParser::Access_commandContext *ctx) = 0;
  virtual void exitAccess_command(MiShellParser::Access_commandContext *ctx) = 0;

  virtual void enterList_operation(MiShellParser::List_operationContext *ctx) = 0;
  virtual void exitList_operation(MiShellParser::List_operationContext *ctx) = 0;

  virtual void enterSet_environment(MiShellParser::Set_environmentContext *ctx) = 0;
  virtual void exitSet_environment(MiShellParser::Set_environmentContext *ctx) = 0;

  virtual void enterShow_environment(MiShellParser::Show_environmentContext *ctx) = 0;
  virtual void exitShow_environment(MiShellParser::Show_environmentContext *ctx) = 0;

  virtual void enterSystem_command(MiShellParser::System_commandContext *ctx) = 0;
  virtual void exitSystem_command(MiShellParser::System_commandContext *ctx) = 0;

  virtual void enterExpression(MiShellParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(MiShellParser::ExpressionContext *ctx) = 0;

  virtual void enterAtom(MiShellParser::AtomContext *ctx) = 0;
  virtual void exitAtom(MiShellParser::AtomContext *ctx) = 0;

  virtual void enterParameters(MiShellParser::ParametersContext *ctx) = 0;
  virtual void exitParameters(MiShellParser::ParametersContext *ctx) = 0;


};

