
// Generated from CalcScript.g4 by ANTLR 4.13.1


#include "CalcScriptListener.h"

#include "CalcScriptParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CalcScriptParserStaticData final {
  CalcScriptParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcScriptParserStaticData(const CalcScriptParserStaticData&) = delete;
  CalcScriptParserStaticData(CalcScriptParserStaticData&&) = delete;
  CalcScriptParserStaticData& operator=(const CalcScriptParserStaticData&) = delete;
  CalcScriptParserStaticData& operator=(CalcScriptParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calcscriptParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CalcScriptParserStaticData *calcscriptParserStaticData = nullptr;

void calcscriptParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calcscriptParserStaticData != nullptr) {
    return;
  }
#else
  assert(calcscriptParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CalcScriptParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "assignment", "print", "expr", "atom", "function"
    },
    std::vector<std::string>{
      "", "';'", "'='", "'print'", "'^'", "'-'", "'*'", "'/'", "'+'", "'('", 
      "')'", "'sin'", "'cos'", "'sqrt'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "ID", "NUMBER", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,16,76,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,1,0,
  	1,0,1,0,4,0,18,8,0,11,0,12,0,19,1,0,1,0,1,1,1,1,1,1,3,1,27,8,1,1,2,1,
  	2,1,2,1,2,1,3,1,3,1,3,1,4,1,4,1,4,1,4,3,4,40,8,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,57,8,4,10,4,12,4,60,9,4,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,69,8,5,1,6,1,6,1,6,1,6,1,6,1,6,0,1,8,7,
  	0,2,4,6,8,10,12,0,1,1,0,11,13,80,0,17,1,0,0,0,2,26,1,0,0,0,4,28,1,0,0,
  	0,6,32,1,0,0,0,8,39,1,0,0,0,10,68,1,0,0,0,12,70,1,0,0,0,14,15,3,2,1,0,
  	15,16,5,1,0,0,16,18,1,0,0,0,17,14,1,0,0,0,18,19,1,0,0,0,19,17,1,0,0,0,
  	19,20,1,0,0,0,20,21,1,0,0,0,21,22,5,0,0,1,22,1,1,0,0,0,23,27,3,4,2,0,
  	24,27,3,6,3,0,25,27,3,8,4,0,26,23,1,0,0,0,26,24,1,0,0,0,26,25,1,0,0,0,
  	27,3,1,0,0,0,28,29,5,14,0,0,29,30,5,2,0,0,30,31,3,8,4,0,31,5,1,0,0,0,
  	32,33,5,3,0,0,33,34,3,8,4,0,34,7,1,0,0,0,35,36,6,4,-1,0,36,37,5,5,0,0,
  	37,40,3,8,4,6,38,40,3,10,5,0,39,35,1,0,0,0,39,38,1,0,0,0,40,58,1,0,0,
  	0,41,42,10,7,0,0,42,43,5,4,0,0,43,57,3,8,4,8,44,45,10,5,0,0,45,46,5,6,
  	0,0,46,57,3,8,4,6,47,48,10,4,0,0,48,49,5,7,0,0,49,57,3,8,4,5,50,51,10,
  	3,0,0,51,52,5,8,0,0,52,57,3,8,4,4,53,54,10,2,0,0,54,55,5,5,0,0,55,57,
  	3,8,4,3,56,41,1,0,0,0,56,44,1,0,0,0,56,47,1,0,0,0,56,50,1,0,0,0,56,53,
  	1,0,0,0,57,60,1,0,0,0,58,56,1,0,0,0,58,59,1,0,0,0,59,9,1,0,0,0,60,58,
  	1,0,0,0,61,69,5,15,0,0,62,69,5,14,0,0,63,64,5,9,0,0,64,65,3,8,4,0,65,
  	66,5,10,0,0,66,69,1,0,0,0,67,69,3,12,6,0,68,61,1,0,0,0,68,62,1,0,0,0,
  	68,63,1,0,0,0,68,67,1,0,0,0,69,11,1,0,0,0,70,71,7,0,0,0,71,72,5,9,0,0,
  	72,73,3,8,4,0,73,74,5,10,0,0,74,13,1,0,0,0,6,19,26,39,56,58,68
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calcscriptParserStaticData = staticData.release();
}

}

CalcScriptParser::CalcScriptParser(TokenStream *input) : CalcScriptParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CalcScriptParser::CalcScriptParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CalcScriptParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *calcscriptParserStaticData->atn, calcscriptParserStaticData->decisionToDFA, calcscriptParserStaticData->sharedContextCache, options);
}

CalcScriptParser::~CalcScriptParser() {
  delete _interpreter;
}

const atn::ATN& CalcScriptParser::getATN() const {
  return *calcscriptParserStaticData->atn;
}

std::string CalcScriptParser::getGrammarFileName() const {
  return "CalcScript.g4";
}

const std::vector<std::string>& CalcScriptParser::getRuleNames() const {
  return calcscriptParserStaticData->ruleNames;
}

const dfa::Vocabulary& CalcScriptParser::getVocabulary() const {
  return calcscriptParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CalcScriptParser::getSerializedATN() const {
  return calcscriptParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

CalcScriptParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcScriptParser::ProgramContext::EOF() {
  return getToken(CalcScriptParser::EOF, 0);
}

std::vector<CalcScriptParser::StatementContext *> CalcScriptParser::ProgramContext::statement() {
  return getRuleContexts<CalcScriptParser::StatementContext>();
}

CalcScriptParser::StatementContext* CalcScriptParser::ProgramContext::statement(size_t i) {
  return getRuleContext<CalcScriptParser::StatementContext>(i);
}


size_t CalcScriptParser::ProgramContext::getRuleIndex() const {
  return CalcScriptParser::RuleProgram;
}

void CalcScriptParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void CalcScriptParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

CalcScriptParser::ProgramContext* CalcScriptParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, CalcScriptParser::RuleProgram);
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
    setState(17); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(14);
      statement();
      setState(15);
      match(CalcScriptParser::T__0);
      setState(19); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 64040) != 0));
    setState(21);
    match(CalcScriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CalcScriptParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalcScriptParser::AssignmentContext* CalcScriptParser::StatementContext::assignment() {
  return getRuleContext<CalcScriptParser::AssignmentContext>(0);
}

CalcScriptParser::PrintContext* CalcScriptParser::StatementContext::print() {
  return getRuleContext<CalcScriptParser::PrintContext>(0);
}

CalcScriptParser::ExprContext* CalcScriptParser::StatementContext::expr() {
  return getRuleContext<CalcScriptParser::ExprContext>(0);
}


size_t CalcScriptParser::StatementContext::getRuleIndex() const {
  return CalcScriptParser::RuleStatement;
}

void CalcScriptParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void CalcScriptParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

CalcScriptParser::StatementContext* CalcScriptParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, CalcScriptParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(26);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(23);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(24);
      print();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(25);
      expr(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

CalcScriptParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcScriptParser::AssignmentContext::ID() {
  return getToken(CalcScriptParser::ID, 0);
}

CalcScriptParser::ExprContext* CalcScriptParser::AssignmentContext::expr() {
  return getRuleContext<CalcScriptParser::ExprContext>(0);
}


size_t CalcScriptParser::AssignmentContext::getRuleIndex() const {
  return CalcScriptParser::RuleAssignment;
}

void CalcScriptParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void CalcScriptParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

CalcScriptParser::AssignmentContext* CalcScriptParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 4, CalcScriptParser::RuleAssignment);

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
    match(CalcScriptParser::ID);
    setState(29);
    match(CalcScriptParser::T__1);
    setState(30);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

CalcScriptParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalcScriptParser::ExprContext* CalcScriptParser::PrintContext::expr() {
  return getRuleContext<CalcScriptParser::ExprContext>(0);
}


size_t CalcScriptParser::PrintContext::getRuleIndex() const {
  return CalcScriptParser::RulePrint;
}

void CalcScriptParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void CalcScriptParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}

CalcScriptParser::PrintContext* CalcScriptParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 6, CalcScriptParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    match(CalcScriptParser::T__2);
    setState(33);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

CalcScriptParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcScriptParser::ExprContext::getRuleIndex() const {
  return CalcScriptParser::RuleExpr;
}

void CalcScriptParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DivContext ------------------------------------------------------------------

std::vector<CalcScriptParser::ExprContext *> CalcScriptParser::DivContext::expr() {
  return getRuleContexts<CalcScriptParser::ExprContext>();
}

CalcScriptParser::ExprContext* CalcScriptParser::DivContext::expr(size_t i) {
  return getRuleContext<CalcScriptParser::ExprContext>(i);
}

CalcScriptParser::DivContext::DivContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcScriptParser::DivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiv(this);
}
void CalcScriptParser::DivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiv(this);
}
//----------------- AddContext ------------------------------------------------------------------

std::vector<CalcScriptParser::ExprContext *> CalcScriptParser::AddContext::expr() {
  return getRuleContexts<CalcScriptParser::ExprContext>();
}

CalcScriptParser::ExprContext* CalcScriptParser::AddContext::expr(size_t i) {
  return getRuleContext<CalcScriptParser::ExprContext>(i);
}

CalcScriptParser::AddContext::AddContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcScriptParser::AddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd(this);
}
void CalcScriptParser::AddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd(this);
}
//----------------- NegContext ------------------------------------------------------------------

CalcScriptParser::ExprContext* CalcScriptParser::NegContext::expr() {
  return getRuleContext<CalcScriptParser::ExprContext>(0);
}

CalcScriptParser::NegContext::NegContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcScriptParser::NegContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNeg(this);
}
void CalcScriptParser::NegContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNeg(this);
}
//----------------- SubContext ------------------------------------------------------------------

std::vector<CalcScriptParser::ExprContext *> CalcScriptParser::SubContext::expr() {
  return getRuleContexts<CalcScriptParser::ExprContext>();
}

CalcScriptParser::ExprContext* CalcScriptParser::SubContext::expr(size_t i) {
  return getRuleContext<CalcScriptParser::ExprContext>(i);
}

CalcScriptParser::SubContext::SubContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcScriptParser::SubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSub(this);
}
void CalcScriptParser::SubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSub(this);
}
//----------------- MulContext ------------------------------------------------------------------

std::vector<CalcScriptParser::ExprContext *> CalcScriptParser::MulContext::expr() {
  return getRuleContexts<CalcScriptParser::ExprContext>();
}

CalcScriptParser::ExprContext* CalcScriptParser::MulContext::expr(size_t i) {
  return getRuleContext<CalcScriptParser::ExprContext>(i);
}

CalcScriptParser::MulContext::MulContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcScriptParser::MulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMul(this);
}
void CalcScriptParser::MulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMul(this);
}
//----------------- PowContext ------------------------------------------------------------------

std::vector<CalcScriptParser::ExprContext *> CalcScriptParser::PowContext::expr() {
  return getRuleContexts<CalcScriptParser::ExprContext>();
}

CalcScriptParser::ExprContext* CalcScriptParser::PowContext::expr(size_t i) {
  return getRuleContext<CalcScriptParser::ExprContext>(i);
}

CalcScriptParser::PowContext::PowContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcScriptParser::PowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPow(this);
}
void CalcScriptParser::PowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPow(this);
}
//----------------- AtomExprContext ------------------------------------------------------------------

CalcScriptParser::AtomContext* CalcScriptParser::AtomExprContext::atom() {
  return getRuleContext<CalcScriptParser::AtomContext>(0);
}

CalcScriptParser::AtomExprContext::AtomExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcScriptParser::AtomExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomExpr(this);
}
void CalcScriptParser::AtomExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomExpr(this);
}

CalcScriptParser::ExprContext* CalcScriptParser::expr() {
   return expr(0);
}

CalcScriptParser::ExprContext* CalcScriptParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalcScriptParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  CalcScriptParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, CalcScriptParser::RuleExpr, precedence);

    

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
    setState(39);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcScriptParser::T__4: {
        _localctx = _tracker.createInstance<NegContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(36);
        match(CalcScriptParser::T__4);
        setState(37);
        expr(6);
        break;
      }

      case CalcScriptParser::T__8:
      case CalcScriptParser::T__10:
      case CalcScriptParser::T__11:
      case CalcScriptParser::T__12:
      case CalcScriptParser::ID:
      case CalcScriptParser::NUMBER: {
        _localctx = _tracker.createInstance<AtomExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(38);
        atom();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(58);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(56);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(41);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(42);
          match(CalcScriptParser::T__3);
          setState(43);
          expr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MulContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(44);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(45);
          match(CalcScriptParser::T__5);
          setState(46);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<DivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(47);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(48);
          match(CalcScriptParser::T__6);
          setState(49);
          expr(5);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(50);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(51);
          match(CalcScriptParser::T__7);
          setState(52);
          expr(4);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<SubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(53);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(54);
          match(CalcScriptParser::T__4);
          setState(55);
          expr(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(60);
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

CalcScriptParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcScriptParser::AtomContext::NUMBER() {
  return getToken(CalcScriptParser::NUMBER, 0);
}

tree::TerminalNode* CalcScriptParser::AtomContext::ID() {
  return getToken(CalcScriptParser::ID, 0);
}

CalcScriptParser::ExprContext* CalcScriptParser::AtomContext::expr() {
  return getRuleContext<CalcScriptParser::ExprContext>(0);
}

CalcScriptParser::FunctionContext* CalcScriptParser::AtomContext::function() {
  return getRuleContext<CalcScriptParser::FunctionContext>(0);
}


size_t CalcScriptParser::AtomContext::getRuleIndex() const {
  return CalcScriptParser::RuleAtom;
}

void CalcScriptParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void CalcScriptParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}

CalcScriptParser::AtomContext* CalcScriptParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 10, CalcScriptParser::RuleAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcScriptParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(61);
        match(CalcScriptParser::NUMBER);
        break;
      }

      case CalcScriptParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(62);
        match(CalcScriptParser::ID);
        break;
      }

      case CalcScriptParser::T__8: {
        enterOuterAlt(_localctx, 3);
        setState(63);
        match(CalcScriptParser::T__8);
        setState(64);
        expr(0);
        setState(65);
        match(CalcScriptParser::T__9);
        break;
      }

      case CalcScriptParser::T__10:
      case CalcScriptParser::T__11:
      case CalcScriptParser::T__12: {
        enterOuterAlt(_localctx, 4);
        setState(67);
        function();
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

//----------------- FunctionContext ------------------------------------------------------------------

CalcScriptParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalcScriptParser::ExprContext* CalcScriptParser::FunctionContext::expr() {
  return getRuleContext<CalcScriptParser::ExprContext>(0);
}


size_t CalcScriptParser::FunctionContext::getRuleIndex() const {
  return CalcScriptParser::RuleFunction;
}

void CalcScriptParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void CalcScriptParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

CalcScriptParser::FunctionContext* CalcScriptParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 12, CalcScriptParser::RuleFunction);
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
    setState(70);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 14336) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(71);
    match(CalcScriptParser::T__8);
    setState(72);
    expr(0);
    setState(73);
    match(CalcScriptParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CalcScriptParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 4: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CalcScriptParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);
    case 4: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void CalcScriptParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calcscriptParserInitialize();
#else
  ::antlr4::internal::call_once(calcscriptParserOnceFlag, calcscriptParserInitialize);
#endif
}
