
// Generated from /Users/enrico.m.crisostomo/repos/hostage/src/antlr4/hosts.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  hostsParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    NewLine = 8, Space = 9, UCSCHAR = 10, D0 = 11, D1 = 12, D2 = 13, D3 = 14, 
    D4 = 15, D5 = 16, D6 = 17, D7 = 18, D8 = 19, D9 = 20, A = 21, B = 22, 
    C = 23, D = 24, E = 25, F = 26, G = 27, H = 28, I = 29, J = 30, K = 31, 
    L = 32, M = 33, N = 34, O = 35, P = 36, Q = 37, R = 38, S = 39, T = 40, 
    U = 41, V = 42, W = 43, X = 44, Y = 45, Z = 46
  };

  enum {
    RuleHosts_file = 0, RuleLine = 1, RuleEmpty_line = 2, RuleTable_entry = 3, 
    RuleAddress = 4, RuleIp_v4_address = 5, RuleIp_v6_address = 6, RuleH16 = 7, 
    RuleLs32 = 8, RuleHexdig = 9, RuleDec_octet = 10, RuleDigit = 11, RuleNon_zero_digit = 12, 
    RuleHost_name = 13, RuleAliases = 14, RuleAlias = 15, RuleIreg_name = 16, 
    RuleIunreserved = 17, RuleAlpha = 18, RuleComment = 19
  };

  hostsParser(antlr4::TokenStream *input);
  ~hostsParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Hosts_fileContext;
  class LineContext;
  class Empty_lineContext;
  class Table_entryContext;
  class AddressContext;
  class Ip_v4_addressContext;
  class Ip_v6_addressContext;
  class H16Context;
  class Ls32Context;
  class HexdigContext;
  class Dec_octetContext;
  class DigitContext;
  class Non_zero_digitContext;
  class Host_nameContext;
  class AliasesContext;
  class AliasContext;
  class Ireg_nameContext;
  class IunreservedContext;
  class AlphaContext;
  class CommentContext; 

  class  Hosts_fileContext : public antlr4::ParserRuleContext {
  public:
    Hosts_fileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<LineContext *> line();
    LineContext* line(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hosts_fileContext* hosts_file();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NewLine();
    CommentContext *comment();
    Table_entryContext *table_entry();
    Empty_lineContext *empty_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineContext* line();

  class  Empty_lineContext : public antlr4::ParserRuleContext {
  public:
    Empty_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Space();
    antlr4::tree::TerminalNode* Space(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Empty_lineContext* empty_line();

  class  Table_entryContext : public antlr4::ParserRuleContext {
  public:
    Table_entryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddressContext *address();
    Host_nameContext *host_name();
    std::vector<antlr4::tree::TerminalNode *> Space();
    antlr4::tree::TerminalNode* Space(size_t i);
    AliasesContext *aliases();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_entryContext* table_entry();

  class  AddressContext : public antlr4::ParserRuleContext {
  public:
    AddressContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ip_v4_addressContext *ip_v4_address();
    Ip_v6_addressContext *ip_v6_address();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddressContext* address();

  class  Ip_v4_addressContext : public antlr4::ParserRuleContext {
  public:
    Ip_v4_addressContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Dec_octetContext *> dec_octet();
    Dec_octetContext* dec_octet(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ip_v4_addressContext* ip_v4_address();

  class  Ip_v6_addressContext : public antlr4::ParserRuleContext {
  public:
    Ip_v6_addressContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<H16Context *> h16();
    H16Context* h16(size_t i);
    Ls32Context *ls32();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ip_v6_addressContext* ip_v6_address();

  class  H16Context : public antlr4::ParserRuleContext {
  public:
    H16Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HexdigContext *> hexdig();
    HexdigContext* hexdig(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  H16Context* h16();

  class  Ls32Context : public antlr4::ParserRuleContext {
  public:
    Ls32Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<H16Context *> h16();
    H16Context* h16(size_t i);
    Ip_v4_addressContext *ip_v4_address();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ls32Context* ls32();

  class  HexdigContext : public antlr4::ParserRuleContext {
  public:
    HexdigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DigitContext *digit();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *B();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *D();
    antlr4::tree::TerminalNode *E();
    antlr4::tree::TerminalNode *F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HexdigContext* hexdig();

  class  Dec_octetContext : public antlr4::ParserRuleContext {
  public:
    Dec_octetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DigitContext *> digit();
    DigitContext* digit(size_t i);
    Non_zero_digitContext *non_zero_digit();
    antlr4::tree::TerminalNode *D1();
    std::vector<antlr4::tree::TerminalNode *> D2();
    antlr4::tree::TerminalNode* D2(size_t i);
    antlr4::tree::TerminalNode *D0();
    antlr4::tree::TerminalNode *D3();
    antlr4::tree::TerminalNode *D4();
    std::vector<antlr4::tree::TerminalNode *> D5();
    antlr4::tree::TerminalNode* D5(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dec_octetContext* dec_octet();

  class  DigitContext : public antlr4::ParserRuleContext {
  public:
    DigitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *D0();
    Non_zero_digitContext *non_zero_digit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DigitContext* digit();

  class  Non_zero_digitContext : public antlr4::ParserRuleContext {
  public:
    Non_zero_digitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *D1();
    antlr4::tree::TerminalNode *D2();
    antlr4::tree::TerminalNode *D3();
    antlr4::tree::TerminalNode *D4();
    antlr4::tree::TerminalNode *D5();
    antlr4::tree::TerminalNode *D6();
    antlr4::tree::TerminalNode *D7();
    antlr4::tree::TerminalNode *D8();
    antlr4::tree::TerminalNode *D9();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Non_zero_digitContext* non_zero_digit();

  class  Host_nameContext : public antlr4::ParserRuleContext {
  public:
    Host_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ireg_nameContext *ireg_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Host_nameContext* host_name();

  class  AliasesContext : public antlr4::ParserRuleContext {
  public:
    AliasesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AliasContext *> alias();
    AliasContext* alias(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Space();
    antlr4::tree::TerminalNode* Space(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AliasesContext* aliases();

  class  AliasContext : public antlr4::ParserRuleContext {
  public:
    AliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ireg_nameContext *ireg_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AliasContext* alias();

  class  Ireg_nameContext : public antlr4::ParserRuleContext {
  public:
    Ireg_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IunreservedContext *> iunreserved();
    IunreservedContext* iunreserved(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ireg_nameContext* ireg_name();

  class  IunreservedContext : public antlr4::ParserRuleContext {
  public:
    IunreservedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlphaContext *alpha();
    DigitContext *digit();
    antlr4::tree::TerminalNode *UCSCHAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IunreservedContext* iunreserved();

  class  AlphaContext : public antlr4::ParserRuleContext {
  public:
    AlphaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *B();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *D();
    antlr4::tree::TerminalNode *E();
    antlr4::tree::TerminalNode *F();
    antlr4::tree::TerminalNode *G();
    antlr4::tree::TerminalNode *H();
    antlr4::tree::TerminalNode *I();
    antlr4::tree::TerminalNode *J();
    antlr4::tree::TerminalNode *K();
    antlr4::tree::TerminalNode *L();
    antlr4::tree::TerminalNode *M();
    antlr4::tree::TerminalNode *N();
    antlr4::tree::TerminalNode *O();
    antlr4::tree::TerminalNode *P();
    antlr4::tree::TerminalNode *Q();
    antlr4::tree::TerminalNode *R();
    antlr4::tree::TerminalNode *S();
    antlr4::tree::TerminalNode *T();
    antlr4::tree::TerminalNode *U();
    antlr4::tree::TerminalNode *V();
    antlr4::tree::TerminalNode *W();
    antlr4::tree::TerminalNode *X();
    antlr4::tree::TerminalNode *Y();
    antlr4::tree::TerminalNode *Z();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlphaContext* alpha();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Space();
    antlr4::tree::TerminalNode* Space(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NewLine();
    antlr4::tree::TerminalNode* NewLine(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentContext* comment();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

