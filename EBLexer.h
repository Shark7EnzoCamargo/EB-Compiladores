
// Generated from EB.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  EBLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, INT = 3, ID = 4, PLUS = 5, MINUS = 6, MULT = 7, 
    DIV = 8, EQ = 9, NEQ = 10, LT = 11, LE = 12, GT = 13, GE = 14, IF = 15, 
    THEN = 16, ELSE = 17, ENDIF = 18, WS = 19
  };

  EBLexer(antlr4::CharStream *input);
  ~EBLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

