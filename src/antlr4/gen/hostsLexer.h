
// Generated from /Users/enrico.m.crisostomo/repos/hostage/src/antlr4/hosts.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  hostsLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    NewLine = 8, Space = 9, UCSCHAR = 10, D0 = 11, D1 = 12, D2 = 13, D3 = 14, 
    D4 = 15, D5 = 16, D6 = 17, D7 = 18, D8 = 19, D9 = 20, A = 21, B = 22, 
    C = 23, D = 24, E = 25, F = 26, G = 27, H = 28, I = 29, J = 30, K = 31, 
    L = 32, M = 33, N = 34, O = 35, P = 36, Q = 37, R = 38, S = 39, T = 40, 
    U = 41, V = 42, W = 43, X = 44, Y = 45, Z = 46
  };

  hostsLexer(antlr4::CharStream *input);
  ~hostsLexer();

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

