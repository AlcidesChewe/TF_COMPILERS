
// Generated from MiShell.g4 by ANTLR 4.13.1


#include "MiShellLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct MiShellLexerStaticData final {
  MiShellLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MiShellLexerStaticData(const MiShellLexerStaticData&) = delete;
  MiShellLexerStaticData(MiShellLexerStaticData&&) = delete;
  MiShellLexerStaticData& operator=(const MiShellLexerStaticData&) = delete;
  MiShellLexerStaticData& operator=(MiShellLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mishelllexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MiShellLexerStaticData *mishelllexerLexerStaticData = nullptr;

void mishelllexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mishelllexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(mishelllexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MiShellLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "COMMAND_NAME", "VARIABLE_NAME", "INT", 
      "STRING", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,25,166,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,
  	2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,
  	1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,
  	9,1,9,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,4,20,
  	137,8,20,11,20,12,20,138,1,21,4,21,142,8,21,11,21,12,21,143,1,22,4,22,
  	147,8,22,11,22,12,22,148,1,23,1,23,5,23,153,8,23,10,23,12,23,156,9,23,
  	1,23,1,23,1,24,4,24,161,8,24,11,24,12,24,162,1,24,1,24,1,154,0,25,1,1,
  	3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,
  	15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,1,0,3,
  	2,0,65,90,97,122,1,0,48,57,3,0,9,10,13,13,32,32,170,0,1,1,0,0,0,0,3,1,
  	0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,
  	15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,
  	0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,
  	0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,
  	47,1,0,0,0,0,49,1,0,0,0,1,51,1,0,0,0,3,54,1,0,0,0,5,59,1,0,0,0,7,64,1,
  	0,0,0,9,70,1,0,0,0,11,76,1,0,0,0,13,79,1,0,0,0,15,88,1,0,0,0,17,92,1,
  	0,0,0,19,94,1,0,0,0,21,96,1,0,0,0,23,101,1,0,0,0,25,108,1,0,0,0,27,116,
  	1,0,0,0,29,123,1,0,0,0,31,125,1,0,0,0,33,127,1,0,0,0,35,129,1,0,0,0,37,
  	131,1,0,0,0,39,133,1,0,0,0,41,136,1,0,0,0,43,141,1,0,0,0,45,146,1,0,0,
  	0,47,150,1,0,0,0,49,160,1,0,0,0,51,52,5,105,0,0,52,53,5,102,0,0,53,2,
  	1,0,0,0,54,55,5,116,0,0,55,56,5,104,0,0,56,57,5,101,0,0,57,58,5,110,0,
  	0,58,4,1,0,0,0,59,60,5,101,0,0,60,61,5,108,0,0,61,62,5,115,0,0,62,63,
  	5,101,0,0,63,6,1,0,0,0,64,65,5,101,0,0,65,66,5,110,0,0,66,67,5,100,0,
  	0,67,68,5,105,0,0,68,69,5,102,0,0,69,8,1,0,0,0,70,71,5,119,0,0,71,72,
  	5,104,0,0,72,73,5,105,0,0,73,74,5,108,0,0,74,75,5,101,0,0,75,10,1,0,0,
  	0,76,77,5,100,0,0,77,78,5,111,0,0,78,12,1,0,0,0,79,80,5,101,0,0,80,81,
  	5,110,0,0,81,82,5,100,0,0,82,83,5,119,0,0,83,84,5,104,0,0,84,85,5,105,
  	0,0,85,86,5,108,0,0,86,87,5,101,0,0,87,14,1,0,0,0,88,89,5,118,0,0,89,
  	90,5,97,0,0,90,91,5,114,0,0,91,16,1,0,0,0,92,93,5,61,0,0,93,18,1,0,0,
  	0,94,95,5,36,0,0,95,20,1,0,0,0,96,97,5,108,0,0,97,98,5,105,0,0,98,99,
  	5,115,0,0,99,100,5,116,0,0,100,22,1,0,0,0,101,102,5,115,0,0,102,103,5,
  	101,0,0,103,104,5,116,0,0,104,105,5,101,0,0,105,106,5,110,0,0,106,107,
  	5,118,0,0,107,24,1,0,0,0,108,109,5,115,0,0,109,110,5,104,0,0,110,111,
  	5,111,0,0,111,112,5,119,0,0,112,113,5,101,0,0,113,114,5,110,0,0,114,115,
  	5,118,0,0,115,26,1,0,0,0,116,117,5,115,0,0,117,118,5,121,0,0,118,119,
  	5,115,0,0,119,120,5,116,0,0,120,121,5,101,0,0,121,122,5,109,0,0,122,28,
  	1,0,0,0,123,124,5,43,0,0,124,30,1,0,0,0,125,126,5,45,0,0,126,32,1,0,0,
  	0,127,128,5,42,0,0,128,34,1,0,0,0,129,130,5,47,0,0,130,36,1,0,0,0,131,
  	132,5,40,0,0,132,38,1,0,0,0,133,134,5,41,0,0,134,40,1,0,0,0,135,137,7,
  	0,0,0,136,135,1,0,0,0,137,138,1,0,0,0,138,136,1,0,0,0,138,139,1,0,0,0,
  	139,42,1,0,0,0,140,142,7,0,0,0,141,140,1,0,0,0,142,143,1,0,0,0,143,141,
  	1,0,0,0,143,144,1,0,0,0,144,44,1,0,0,0,145,147,7,1,0,0,146,145,1,0,0,
  	0,147,148,1,0,0,0,148,146,1,0,0,0,148,149,1,0,0,0,149,46,1,0,0,0,150,
  	154,5,34,0,0,151,153,9,0,0,0,152,151,1,0,0,0,153,156,1,0,0,0,154,155,
  	1,0,0,0,154,152,1,0,0,0,155,157,1,0,0,0,156,154,1,0,0,0,157,158,5,34,
  	0,0,158,48,1,0,0,0,159,161,7,2,0,0,160,159,1,0,0,0,161,162,1,0,0,0,162,
  	160,1,0,0,0,162,163,1,0,0,0,163,164,1,0,0,0,164,165,6,24,0,0,165,50,1,
  	0,0,0,6,0,138,143,148,154,162,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mishelllexerLexerStaticData = staticData.release();
}

}

MiShellLexer::MiShellLexer(CharStream *input) : Lexer(input) {
  MiShellLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *mishelllexerLexerStaticData->atn, mishelllexerLexerStaticData->decisionToDFA, mishelllexerLexerStaticData->sharedContextCache);
}

MiShellLexer::~MiShellLexer() {
  delete _interpreter;
}

std::string MiShellLexer::getGrammarFileName() const {
  return "MiShell.g4";
}

const std::vector<std::string>& MiShellLexer::getRuleNames() const {
  return mishelllexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& MiShellLexer::getChannelNames() const {
  return mishelllexerLexerStaticData->channelNames;
}

const std::vector<std::string>& MiShellLexer::getModeNames() const {
  return mishelllexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& MiShellLexer::getVocabulary() const {
  return mishelllexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MiShellLexer::getSerializedATN() const {
  return mishelllexerLexerStaticData->serializedATN;
}

const atn::ATN& MiShellLexer::getATN() const {
  return *mishelllexerLexerStaticData->atn;
}




void MiShellLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mishelllexerLexerInitialize();
#else
  ::antlr4::internal::call_once(mishelllexerLexerOnceFlag, mishelllexerLexerInitialize);
#endif
}
