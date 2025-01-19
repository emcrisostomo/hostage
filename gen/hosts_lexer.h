
// Generated from ../src/antlr4/hosts_lexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  hosts_lexer : public antlr4::Lexer {
public:
  enum {
    NewLine = 1, Space = 2, UCSCHAR = 3, D0 = 4, D1 = 5, D2 = 6, D3 = 7, 
    D4 = 8, D5 = 9, D6 = 10, D7 = 11, D8 = 12, D9 = 13, A = 14, B = 15, 
    C = 16, D = 17, E = 18, F = 19, G = 20, H = 21, I = 22, J = 23, K = 24, 
    L = 25, M = 26, N = 27, O = 28, P = 29, Q = 30, R = 31, S = 32, T = 33, 
    U = 34, V = 35, W = 36, X = 37, Y = 38, Z = 39, COLON = 40, DCOLON = 41, 
    DASH = 42, DOT = 43, UNDERSCORE = 44, TILDE = 45, SHARP = 46
  };

  explicit hosts_lexer(antlr4::CharStream *input);

  ~hosts_lexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

