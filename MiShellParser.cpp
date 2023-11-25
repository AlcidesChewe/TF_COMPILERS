
// Generated from MiShell.g4 by ANTLR 4.13.1


#include "MiShellListener.h"

#include "MiShellParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MiShellParserStaticData final {
  MiShellParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MiShellParserStaticData(const MiShellParserStaticData&) = delete;
  MiShellParserStaticData(MiShellParserStaticData&&) = delete;
  MiShellParserStaticData& operator=(const MiShellParserStaticData&) = delete;
  MiShellParserStaticData& operator=(MiShellParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mishellParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MiShellParserStaticData *mishellParserStaticData = nullptr;

void mishellParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mishellParserStaticData != nullptr) {
    return;
  }
#else
  assert(mishellParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MiShellParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "command", "if_statement", "while_statement", 
      "variable_declaration", "access_command", "list_operation", "set_environment", 
      "show_environment", "system_command", "expression", "atom", "parameters"
    },
    std::vector<std::string>{
      "", "'if'", "'then'", "'else'", "'endif'", "'while'", "'do'", "'endwhile'", 
      "'var'", "'='", "'$'", "'list'", "'setenv'", "'showenv'", "'system'", 
      "'+'", "'-'", "'*'", "'/'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "COMMAND_NAME", "VARIABLE_NAME", "INT", "STRING", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,25,115,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,1,0,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,40,8,1,1,2,1,2,1,2,1,3,1,3,1,
  	3,1,3,1,3,1,3,3,3,51,8,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,
  	1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,10,1,10,
  	1,10,1,11,1,11,1,11,1,11,1,11,1,11,3,11,88,8,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,5,11,102,8,11,10,11,12,11,105,9,
  	11,1,12,1,12,1,13,1,13,4,13,111,8,13,11,13,12,13,112,1,13,0,1,22,14,0,
  	2,4,6,8,10,12,14,16,18,20,22,24,26,0,1,1,0,22,23,116,0,28,1,0,0,0,2,39,
  	1,0,0,0,4,41,1,0,0,0,6,44,1,0,0,0,8,54,1,0,0,0,10,60,1,0,0,0,12,65,1,
  	0,0,0,14,68,1,0,0,0,16,71,1,0,0,0,18,76,1,0,0,0,20,78,1,0,0,0,22,87,1,
  	0,0,0,24,106,1,0,0,0,26,110,1,0,0,0,28,29,3,2,1,0,29,1,1,0,0,0,30,40,
  	3,4,2,0,31,40,3,6,3,0,32,40,3,8,4,0,33,40,3,10,5,0,34,40,3,12,6,0,35,
  	40,3,14,7,0,36,40,3,16,8,0,37,40,3,18,9,0,38,40,3,20,10,0,39,30,1,0,0,
  	0,39,31,1,0,0,0,39,32,1,0,0,0,39,33,1,0,0,0,39,34,1,0,0,0,39,35,1,0,0,
  	0,39,36,1,0,0,0,39,37,1,0,0,0,39,38,1,0,0,0,40,3,1,0,0,0,41,42,5,21,0,
  	0,42,43,3,26,13,0,43,5,1,0,0,0,44,45,5,1,0,0,45,46,3,22,11,0,46,47,5,
  	2,0,0,47,50,3,0,0,0,48,49,5,3,0,0,49,51,3,0,0,0,50,48,1,0,0,0,50,51,1,
  	0,0,0,51,52,1,0,0,0,52,53,5,4,0,0,53,7,1,0,0,0,54,55,5,5,0,0,55,56,3,
  	22,11,0,56,57,5,6,0,0,57,58,3,0,0,0,58,59,5,7,0,0,59,9,1,0,0,0,60,61,
  	5,8,0,0,61,62,5,22,0,0,62,63,5,9,0,0,63,64,3,22,11,0,64,11,1,0,0,0,65,
  	66,5,10,0,0,66,67,5,21,0,0,67,13,1,0,0,0,68,69,5,11,0,0,69,70,3,22,11,
  	0,70,15,1,0,0,0,71,72,5,12,0,0,72,73,5,22,0,0,73,74,5,9,0,0,74,75,3,22,
  	11,0,75,17,1,0,0,0,76,77,5,13,0,0,77,19,1,0,0,0,78,79,5,14,0,0,79,80,
  	5,24,0,0,80,21,1,0,0,0,81,82,6,11,-1,0,82,88,3,24,12,0,83,84,5,19,0,0,
  	84,85,3,22,11,0,85,86,5,20,0,0,86,88,1,0,0,0,87,81,1,0,0,0,87,83,1,0,
  	0,0,88,103,1,0,0,0,89,90,10,5,0,0,90,91,5,15,0,0,91,102,3,22,11,6,92,
  	93,10,4,0,0,93,94,5,16,0,0,94,102,3,22,11,5,95,96,10,3,0,0,96,97,5,17,
  	0,0,97,102,3,22,11,4,98,99,10,2,0,0,99,100,5,18,0,0,100,102,3,22,11,3,
  	101,89,1,0,0,0,101,92,1,0,0,0,101,95,1,0,0,0,101,98,1,0,0,0,102,105,1,
  	0,0,0,103,101,1,0,0,0,103,104,1,0,0,0,104,23,1,0,0,0,105,103,1,0,0,0,
  	106,107,7,0,0,0,107,25,1,0,0,0,108,111,3,22,11,0,109,111,5,24,0,0,110,
  	108,1,0,0,0,110,109,1,0,0,0,111,112,1,0,0,0,112,110,1,0,0,0,112,113,1,
  	0,0,0,113,27,1,0,0,0,7,39,50,87,101,103,110,112
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mishellParserStaticData = staticData.release();
}

}

MiShellParser::MiShellParser(TokenStream *input) : MiShellParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MiShellParser::MiShellParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MiShellParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mishellParserStaticData->atn, mishellParserStaticData->decisionToDFA, mishellParserStaticData->sharedContextCache, options);
}

MiShellParser::~MiShellParser() {
  delete _interpreter;
}

const atn::ATN& MiShellParser::getATN() const {
  return *mishellParserStaticData->atn;
}

std::string MiShellParser::getGrammarFileName() const {
  return "MiShell.g4";
}

const std::vector<std::string>& MiShellParser::getRuleNames() const {
  return mishellParserStaticData->ruleNames;
}

const dfa::Vocabulary& MiShellParser::getVocabulary() const {
  return mishellParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MiShellParser::getSerializedATN() const {
  return mishellParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

MiShellParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiShellParser::StatementContext* MiShellParser::ProgramContext::statement() {
  return getRuleContext<MiShellParser::StatementContext>(0);
}


size_t MiShellParser::ProgramContext::getRuleIndex() const {
  return MiShellParser::RuleProgram;
}

void MiShellParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void MiShellParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

MiShellParser::ProgramContext* MiShellParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, MiShellParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

MiShellParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiShellParser::CommandContext* MiShellParser::StatementContext::command() {
  return getRuleContext<MiShellParser::CommandContext>(0);
}

MiShellParser::If_statementContext* MiShellParser::StatementContext::if_statement() {
  return getRuleContext<MiShellParser::If_statementContext>(0);
}

MiShellParser::While_statementContext* MiShellParser::StatementContext::while_statement() {
  return getRuleContext<MiShellParser::While_statementContext>(0);
}

MiShellParser::Variable_declarationContext* MiShellParser::StatementContext::variable_declaration() {
  return getRuleContext<MiShellParser::Variable_declarationContext>(0);
}

MiShellParser::Access_commandContext* MiShellParser::StatementContext::access_command() {
  return getRuleContext<MiShellParser::Access_commandContext>(0);
}

MiShellParser::List_operationContext* MiShellParser::StatementContext::list_operation() {
  return getRuleContext<MiShellParser::List_operationContext>(0);
}

MiShellParser::Set_environmentContext* MiShellParser::StatementContext::set_environment() {
  return getRuleContext<MiShellParser::Set_environmentContext>(0);
}

MiShellParser::Show_environmentContext* MiShellParser::StatementContext::show_environment() {
  return getRuleContext<MiShellParser::Show_environmentContext>(0);
}

MiShellParser::System_commandContext* MiShellParser::StatementContext::system_command() {
  return getRuleContext<MiShellParser::System_commandContext>(0);
}


size_t MiShellParser::StatementContext::getRuleIndex() const {
  return MiShellParser::RuleStatement;
}

void MiShellParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void MiShellParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

MiShellParser::StatementContext* MiShellParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, MiShellParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(39);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MiShellParser::COMMAND_NAME: {
        enterOuterAlt(_localctx, 1);
        setState(30);
        command();
        break;
      }

      case MiShellParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(31);
        if_statement();
        break;
      }

      case MiShellParser::T__4: {
        enterOuterAlt(_localctx, 3);
        setState(32);
        while_statement();
        break;
      }

      case MiShellParser::T__7: {
        enterOuterAlt(_localctx, 4);
        setState(33);
        variable_declaration();
        break;
      }

      case MiShellParser::T__9: {
        enterOuterAlt(_localctx, 5);
        setState(34);
        access_command();
        break;
      }

      case MiShellParser::T__10: {
        enterOuterAlt(_localctx, 6);
        setState(35);
        list_operation();
        break;
      }

      case MiShellParser::T__11: {
        enterOuterAlt(_localctx, 7);
        setState(36);
        set_environment();
        break;
      }

      case MiShellParser::T__12: {
        enterOuterAlt(_localctx, 8);
        setState(37);
        show_environment();
        break;
      }

      case MiShellParser::T__13: {
        enterOuterAlt(_localctx, 9);
        setState(38);
        system_command();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommandContext ------------------------------------------------------------------

MiShellParser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiShellParser::CommandContext::COMMAND_NAME() {
  return getToken(MiShellParser::COMMAND_NAME, 0);
}

MiShellParser::ParametersContext* MiShellParser::CommandContext::parameters() {
  return getRuleContext<MiShellParser::ParametersContext>(0);
}


size_t MiShellParser::CommandContext::getRuleIndex() const {
  return MiShellParser::RuleCommand;
}

void MiShellParser::CommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand(this);
}

void MiShellParser::CommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand(this);
}

MiShellParser::CommandContext* MiShellParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 4, MiShellParser::RuleCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    match(MiShellParser::COMMAND_NAME);
    setState(42);
    parameters();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

MiShellParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiShellParser::ExpressionContext* MiShellParser::If_statementContext::expression() {
  return getRuleContext<MiShellParser::ExpressionContext>(0);
}

std::vector<MiShellParser::ProgramContext *> MiShellParser::If_statementContext::program() {
  return getRuleContexts<MiShellParser::ProgramContext>();
}

MiShellParser::ProgramContext* MiShellParser::If_statementContext::program(size_t i) {
  return getRuleContext<MiShellParser::ProgramContext>(i);
}


size_t MiShellParser::If_statementContext::getRuleIndex() const {
  return MiShellParser::RuleIf_statement;
}

void MiShellParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void MiShellParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}

MiShellParser::If_statementContext* MiShellParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 6, MiShellParser::RuleIf_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(MiShellParser::T__0);
    setState(45);
    expression(0);
    setState(46);
    match(MiShellParser::T__1);
    setState(47);
    program();
    setState(50);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MiShellParser::T__2) {
      setState(48);
      match(MiShellParser::T__2);
      setState(49);
      program();
    }
    setState(52);
    match(MiShellParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_statementContext ------------------------------------------------------------------

MiShellParser::While_statementContext::While_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiShellParser::ExpressionContext* MiShellParser::While_statementContext::expression() {
  return getRuleContext<MiShellParser::ExpressionContext>(0);
}

MiShellParser::ProgramContext* MiShellParser::While_statementContext::program() {
  return getRuleContext<MiShellParser::ProgramContext>(0);
}


size_t MiShellParser::While_statementContext::getRuleIndex() const {
  return MiShellParser::RuleWhile_statement;
}

void MiShellParser::While_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_statement(this);
}

void MiShellParser::While_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_statement(this);
}

MiShellParser::While_statementContext* MiShellParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 8, MiShellParser::RuleWhile_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(MiShellParser::T__4);
    setState(55);
    expression(0);
    setState(56);
    match(MiShellParser::T__5);
    setState(57);
    program();
    setState(58);
    match(MiShellParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declarationContext ------------------------------------------------------------------

MiShellParser::Variable_declarationContext::Variable_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiShellParser::Variable_declarationContext::VARIABLE_NAME() {
  return getToken(MiShellParser::VARIABLE_NAME, 0);
}

MiShellParser::ExpressionContext* MiShellParser::Variable_declarationContext::expression() {
  return getRuleContext<MiShellParser::ExpressionContext>(0);
}


size_t MiShellParser::Variable_declarationContext::getRuleIndex() const {
  return MiShellParser::RuleVariable_declaration;
}

void MiShellParser::Variable_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_declaration(this);
}

void MiShellParser::Variable_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_declaration(this);
}

MiShellParser::Variable_declarationContext* MiShellParser::variable_declaration() {
  Variable_declarationContext *_localctx = _tracker.createInstance<Variable_declarationContext>(_ctx, getState());
  enterRule(_localctx, 10, MiShellParser::RuleVariable_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(MiShellParser::T__7);
    setState(61);
    match(MiShellParser::VARIABLE_NAME);
    setState(62);
    match(MiShellParser::T__8);
    setState(63);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Access_commandContext ------------------------------------------------------------------

MiShellParser::Access_commandContext::Access_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiShellParser::Access_commandContext::COMMAND_NAME() {
  return getToken(MiShellParser::COMMAND_NAME, 0);
}


size_t MiShellParser::Access_commandContext::getRuleIndex() const {
  return MiShellParser::RuleAccess_command;
}

void MiShellParser::Access_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccess_command(this);
}

void MiShellParser::Access_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccess_command(this);
}

MiShellParser::Access_commandContext* MiShellParser::access_command() {
  Access_commandContext *_localctx = _tracker.createInstance<Access_commandContext>(_ctx, getState());
  enterRule(_localctx, 12, MiShellParser::RuleAccess_command);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    match(MiShellParser::T__9);
    setState(66);
    match(MiShellParser::COMMAND_NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_operationContext ------------------------------------------------------------------

MiShellParser::List_operationContext::List_operationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiShellParser::ExpressionContext* MiShellParser::List_operationContext::expression() {
  return getRuleContext<MiShellParser::ExpressionContext>(0);
}


size_t MiShellParser::List_operationContext::getRuleIndex() const {
  return MiShellParser::RuleList_operation;
}

void MiShellParser::List_operationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_operation(this);
}

void MiShellParser::List_operationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_operation(this);
}

MiShellParser::List_operationContext* MiShellParser::list_operation() {
  List_operationContext *_localctx = _tracker.createInstance<List_operationContext>(_ctx, getState());
  enterRule(_localctx, 14, MiShellParser::RuleList_operation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(MiShellParser::T__10);
    setState(69);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_environmentContext ------------------------------------------------------------------

MiShellParser::Set_environmentContext::Set_environmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiShellParser::Set_environmentContext::VARIABLE_NAME() {
  return getToken(MiShellParser::VARIABLE_NAME, 0);
}

MiShellParser::ExpressionContext* MiShellParser::Set_environmentContext::expression() {
  return getRuleContext<MiShellParser::ExpressionContext>(0);
}


size_t MiShellParser::Set_environmentContext::getRuleIndex() const {
  return MiShellParser::RuleSet_environment;
}

void MiShellParser::Set_environmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet_environment(this);
}

void MiShellParser::Set_environmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet_environment(this);
}

MiShellParser::Set_environmentContext* MiShellParser::set_environment() {
  Set_environmentContext *_localctx = _tracker.createInstance<Set_environmentContext>(_ctx, getState());
  enterRule(_localctx, 16, MiShellParser::RuleSet_environment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(MiShellParser::T__11);
    setState(72);
    match(MiShellParser::VARIABLE_NAME);
    setState(73);
    match(MiShellParser::T__8);
    setState(74);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Show_environmentContext ------------------------------------------------------------------

MiShellParser::Show_environmentContext::Show_environmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiShellParser::Show_environmentContext::getRuleIndex() const {
  return MiShellParser::RuleShow_environment;
}

void MiShellParser::Show_environmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShow_environment(this);
}

void MiShellParser::Show_environmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShow_environment(this);
}

MiShellParser::Show_environmentContext* MiShellParser::show_environment() {
  Show_environmentContext *_localctx = _tracker.createInstance<Show_environmentContext>(_ctx, getState());
  enterRule(_localctx, 18, MiShellParser::RuleShow_environment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(MiShellParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- System_commandContext ------------------------------------------------------------------

MiShellParser::System_commandContext::System_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiShellParser::System_commandContext::STRING() {
  return getToken(MiShellParser::STRING, 0);
}


size_t MiShellParser::System_commandContext::getRuleIndex() const {
  return MiShellParser::RuleSystem_command;
}

void MiShellParser::System_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSystem_command(this);
}

void MiShellParser::System_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSystem_command(this);
}

MiShellParser::System_commandContext* MiShellParser::system_command() {
  System_commandContext *_localctx = _tracker.createInstance<System_commandContext>(_ctx, getState());
  enterRule(_localctx, 20, MiShellParser::RuleSystem_command);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(MiShellParser::T__13);
    setState(79);
    match(MiShellParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

MiShellParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiShellParser::AtomContext* MiShellParser::ExpressionContext::atom() {
  return getRuleContext<MiShellParser::AtomContext>(0);
}

std::vector<MiShellParser::ExpressionContext *> MiShellParser::ExpressionContext::expression() {
  return getRuleContexts<MiShellParser::ExpressionContext>();
}

MiShellParser::ExpressionContext* MiShellParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<MiShellParser::ExpressionContext>(i);
}


size_t MiShellParser::ExpressionContext::getRuleIndex() const {
  return MiShellParser::RuleExpression;
}

void MiShellParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void MiShellParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


MiShellParser::ExpressionContext* MiShellParser::expression() {
   return expression(0);
}

MiShellParser::ExpressionContext* MiShellParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MiShellParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  MiShellParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, MiShellParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(87);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MiShellParser::VARIABLE_NAME:
      case MiShellParser::INT: {
        setState(82);
        atom();
        break;
      }

      case MiShellParser::T__18: {
        setState(83);
        match(MiShellParser::T__18);
        setState(84);
        expression(0);
        setState(85);
        match(MiShellParser::T__19);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(103);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(101);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(89);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(90);
          match(MiShellParser::T__14);
          setState(91);
          expression(6);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(92);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(93);
          match(MiShellParser::T__15);
          setState(94);
          expression(5);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(95);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(96);
          match(MiShellParser::T__16);
          setState(97);
          expression(4);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(98);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(99);
          match(MiShellParser::T__17);
          setState(100);
          expression(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(105);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

MiShellParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiShellParser::AtomContext::INT() {
  return getToken(MiShellParser::INT, 0);
}

tree::TerminalNode* MiShellParser::AtomContext::VARIABLE_NAME() {
  return getToken(MiShellParser::VARIABLE_NAME, 0);
}


size_t MiShellParser::AtomContext::getRuleIndex() const {
  return MiShellParser::RuleAtom;
}

void MiShellParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void MiShellParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}

MiShellParser::AtomContext* MiShellParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 24, MiShellParser::RuleAtom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    _la = _input->LA(1);
    if (!(_la == MiShellParser::VARIABLE_NAME

    || _la == MiShellParser::INT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

MiShellParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiShellParser::ExpressionContext *> MiShellParser::ParametersContext::expression() {
  return getRuleContexts<MiShellParser::ExpressionContext>();
}

MiShellParser::ExpressionContext* MiShellParser::ParametersContext::expression(size_t i) {
  return getRuleContext<MiShellParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> MiShellParser::ParametersContext::STRING() {
  return getTokens(MiShellParser::STRING);
}

tree::TerminalNode* MiShellParser::ParametersContext::STRING(size_t i) {
  return getToken(MiShellParser::STRING, i);
}


size_t MiShellParser::ParametersContext::getRuleIndex() const {
  return MiShellParser::RuleParameters;
}

void MiShellParser::ParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameters(this);
}

void MiShellParser::ParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MiShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameters(this);
}

MiShellParser::ParametersContext* MiShellParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 26, MiShellParser::RuleParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(110);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MiShellParser::T__18:
        case MiShellParser::VARIABLE_NAME:
        case MiShellParser::INT: {
          setState(108);
          expression(0);
          break;
        }

        case MiShellParser::STRING: {
          setState(109);
          match(MiShellParser::STRING);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(112); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 29884416) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MiShellParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 11: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MiShellParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void MiShellParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mishellParserInitialize();
#else
  ::antlr4::internal::call_once(mishellParserOnceFlag, mishellParserInitialize);
#endif
}
