
// Generated from EB.g4 by ANTLR 4.7.2


#include "EBListener.h"

#include "EBParser.h"


using namespace antlrcpp;
using namespace antlr4;

EBParser::EBParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

EBParser::~EBParser() {
  delete _interpreter;
}

std::string EBParser::getGrammarFileName() const {
  return "EB.g4";
}

const std::vector<std::string>& EBParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& EBParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

EBParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EBParser::StatementContext *> EBParser::ProgramContext::statement() {
  return getRuleContexts<EBParser::StatementContext>();
}

EBParser::StatementContext* EBParser::ProgramContext::statement(size_t i) {
  return getRuleContext<EBParser::StatementContext>(i);
}


size_t EBParser::ProgramContext::getRuleIndex() const {
  return EBParser::RuleProgram;
}

void EBParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EBListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void EBParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EBListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

EBParser::ProgramContext* EBParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, EBParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(13); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(12);
      statement();
      setState(15); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == EBParser::ID

    || _la == EBParser::IF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

EBParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EBParser::AssignmentContext* EBParser::StatementContext::assignment() {
  return getRuleContext<EBParser::AssignmentContext>(0);
}

EBParser::IfStatementContext* EBParser::StatementContext::ifStatement() {
  return getRuleContext<EBParser::IfStatementContext>(0);
}


size_t EBParser::StatementContext::getRuleIndex() const {
  return EBParser::RuleStatement;
}

void EBParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EBListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void EBParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EBListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

EBParser::StatementContext* EBParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, EBParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(19);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EBParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(17);
        assignment();
        break;
      }

      case EBParser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(18);
        ifStatement();
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

//----------------- AssignmentContext ------------------------------------------------------------------

EBParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EBParser::AssignmentContext::ID() {
  return getToken(EBParser::ID, 0);
}

EBParser::ExprContext* EBParser::AssignmentContext::expr() {
  return getRuleContext<EBParser::ExprContext>(0);
}


size_t EBParser::AssignmentContext::getRuleIndex() const {
  return EBParser::RuleAssignment;
}

void EBParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EBListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void EBParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EBListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

EBParser::AssignmentContext* EBParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 4, EBParser::RuleAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(21);
    match(EBParser::ID);
    setState(22);
    match(EBParser::T__0);
    setState(23);
    expr(0);
    setState(24);
    match(EBParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

EBParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EBParser::IfStatementContext::IF() {
  return getToken(EBParser::IF, 0);
}

EBParser::ConditionContext* EBParser::IfStatementContext::condition() {
  return getRuleContext<EBParser::ConditionContext>(0);
}

tree::TerminalNode* EBParser::IfStatementContext::THEN() {
  return getToken(EBParser::THEN, 0);
}

tree::TerminalNode* EBParser::IfStatementContext::ENDIF() {
  return getToken(EBParser::ENDIF, 0);
}

std::vector<EBParser::StatementContext *> EBParser::IfStatementContext::statement() {
  return getRuleContexts<EBParser::StatementContext>();
}

EBParser::StatementContext* EBParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<EBParser::StatementContext>(i);
}

tree::TerminalNode* EBParser::IfStatementContext::ELSE() {
  return getToken(EBParser::ELSE, 0);
}


size_t EBParser::IfStatementContext::getRuleIndex() const {
  return EBParser::RuleIfStatement;
}

void EBParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EBListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void EBParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EBListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

EBParser::IfStatementContext* EBParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, EBParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    match(EBParser::IF);
    setState(27);
    condition();
    setState(28);
    match(EBParser::THEN);
    setState(30); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(29);
      statement();
      setState(32); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == EBParser::ID

    || _la == EBParser::IF);
    setState(40);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EBParser::ELSE) {
      setState(34);
      match(EBParser::ELSE);
      setState(36); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(35);
        statement();
        setState(38); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == EBParser::ID

      || _la == EBParser::IF);
    }
    setState(42);
    match(EBParser::ENDIF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

EBParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EBParser::ExprContext *> EBParser::ConditionContext::expr() {
  return getRuleContexts<EBParser::ExprContext>();
}

EBParser::ExprContext* EBParser::ConditionContext::expr(size_t i) {
  return getRuleContext<EBParser::ExprContext>(i);
}

tree::TerminalNode* EBParser::ConditionContext::EQ() {
  return getToken(EBParser::EQ, 0);
}

tree::TerminalNode* EBParser::ConditionContext::NEQ() {
  return getToken(EBParser::NEQ, 0);
}

tree::TerminalNode* EBParser::ConditionContext::LT() {
  return getToken(EBParser::LT, 0);
}

tree::TerminalNode* EBParser::ConditionContext::LE() {
  return getToken(EBParser::LE, 0);
}

tree::TerminalNode* EBParser::ConditionContext::GT() {
  return getToken(EBParser::GT, 0);
}

tree::TerminalNode* EBParser::ConditionContext::GE() {
  return getToken(EBParser::GE, 0);
}


size_t EBParser::ConditionContext::getRuleIndex() const {
  return EBParser::RuleCondition;
}

void EBParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EBListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void EBParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EBListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}

EBParser::ConditionContext* EBParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 8, EBParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    expr(0);
    setState(45);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << EBParser::EQ)
      | (1ULL << EBParser::NEQ)
      | (1ULL << EBParser::LT)
      | (1ULL << EBParser::LE)
      | (1ULL << EBParser::GT)
      | (1ULL << EBParser::GE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(46);
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

EBParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EBParser::ExprContext::INT() {
  return getToken(EBParser::INT, 0);
}

tree::TerminalNode* EBParser::ExprContext::ID() {
  return getToken(EBParser::ID, 0);
}

std::vector<EBParser::ExprContext *> EBParser::ExprContext::expr() {
  return getRuleContexts<EBParser::ExprContext>();
}

EBParser::ExprContext* EBParser::ExprContext::expr(size_t i) {
  return getRuleContext<EBParser::ExprContext>(i);
}

tree::TerminalNode* EBParser::ExprContext::PLUS() {
  return getToken(EBParser::PLUS, 0);
}

tree::TerminalNode* EBParser::ExprContext::MINUS() {
  return getToken(EBParser::MINUS, 0);
}

tree::TerminalNode* EBParser::ExprContext::MULT() {
  return getToken(EBParser::MULT, 0);
}

tree::TerminalNode* EBParser::ExprContext::DIV() {
  return getToken(EBParser::DIV, 0);
}


size_t EBParser::ExprContext::getRuleIndex() const {
  return EBParser::RuleExpr;
}

void EBParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EBListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void EBParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EBListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


EBParser::ExprContext* EBParser::expr() {
   return expr(0);
}

EBParser::ExprContext* EBParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  EBParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  EBParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, EBParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(51);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EBParser::INT: {
        setState(49);
        match(EBParser::INT);
        break;
      }

      case EBParser::ID: {
        setState(50);
        match(EBParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(58);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpr);
        setState(53);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(54);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << EBParser::PLUS)
          | (1ULL << EBParser::MINUS)
          | (1ULL << EBParser::MULT)
          | (1ULL << EBParser::DIV))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(55);
        expr(2); 
      }
      setState(60);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool EBParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool EBParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> EBParser::_decisionToDFA;
atn::PredictionContextCache EBParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN EBParser::_atn;
std::vector<uint16_t> EBParser::_serializedATN;

std::vector<std::string> EBParser::_ruleNames = {
  "program", "statement", "assignment", "ifStatement", "condition", "expr"
};

std::vector<std::string> EBParser::_literalNames = {
  "", "'='", "';'", "", "", "'+'", "'-'", "'*'", "'/'", "'=='", "'!='", 
  "'<'", "'<='", "'>'", "'>='", "'if'", "'then'", "'else'", "'endif'"
};

std::vector<std::string> EBParser::_symbolicNames = {
  "", "", "", "INT", "ID", "PLUS", "MINUS", "MULT", "DIV", "EQ", "NEQ", 
  "LT", "LE", "GT", "GE", "IF", "THEN", "ELSE", "ENDIF", "WS"
};

dfa::Vocabulary EBParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> EBParser::_tokenNames;

EBParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x15, 0x40, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x3, 
    0x2, 0x6, 0x2, 0x10, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x11, 0x3, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x16, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 0x21, 0xa, 
    0x5, 0xd, 0x5, 0xe, 0x5, 0x22, 0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 0x27, 0xa, 
    0x5, 0xd, 0x5, 0xe, 0x5, 0x28, 0x5, 0x5, 0x2b, 0xa, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x36, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 
    0x3b, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x3e, 0xb, 0x7, 0x3, 0x7, 0x2, 0x3, 
    0xc, 0x8, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0x2, 0x4, 0x3, 0x2, 0xb, 0x10, 
    0x3, 0x2, 0x7, 0xa, 0x2, 0x40, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x17, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1c, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x2e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x10, 0x5, 0x4, 0x3, 0x2, 0xf, 0xe, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x11, 0xf, 0x3, 0x2, 0x2, 0x2, 0x11, 0x12, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x3, 0x3, 0x2, 0x2, 0x2, 0x13, 0x16, 0x5, 0x6, 
    0x4, 0x2, 0x14, 0x16, 0x5, 0x8, 0x5, 0x2, 0x15, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x15, 0x14, 0x3, 0x2, 0x2, 0x2, 0x16, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x17, 0x18, 0x7, 0x6, 0x2, 0x2, 0x18, 0x19, 0x7, 0x3, 0x2, 0x2, 0x19, 
    0x1a, 0x5, 0xc, 0x7, 0x2, 0x1a, 0x1b, 0x7, 0x4, 0x2, 0x2, 0x1b, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x11, 0x2, 0x2, 0x1d, 0x1e, 0x5, 
    0xa, 0x6, 0x2, 0x1e, 0x20, 0x7, 0x12, 0x2, 0x2, 0x1f, 0x21, 0x5, 0x4, 
    0x3, 0x2, 0x20, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x23, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x24, 0x26, 0x7, 0x13, 0x2, 0x2, 0x25, 
    0x27, 0x5, 0x4, 0x3, 0x2, 0x26, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x29, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x2d, 0x7, 0x14, 0x2, 0x2, 0x2d, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x2f, 0x5, 0xc, 0x7, 0x2, 0x2f, 0x30, 0x9, 0x2, 0x2, 0x2, 0x30, 
    0x31, 0x5, 0xc, 0x7, 0x2, 0x31, 0xb, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 
    0x8, 0x7, 0x1, 0x2, 0x33, 0x36, 0x7, 0x5, 0x2, 0x2, 0x34, 0x36, 0x7, 
    0x6, 0x2, 0x2, 0x35, 0x32, 0x3, 0x2, 0x2, 0x2, 0x35, 0x34, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0xc, 0x3, 0x2, 
    0x2, 0x38, 0x39, 0x9, 0x3, 0x2, 0x2, 0x39, 0x3b, 0x5, 0xc, 0x7, 0x4, 
    0x3a, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3d, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x9, 0x11, 0x15, 
    0x22, 0x28, 0x2a, 0x35, 0x3c, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

EBParser::Initializer EBParser::_init;
