
// Generated from /Users/enrico.m.crisostomo/repos/hostage/src/antlr4/hosts.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  hosts : public antlr4::Parser {
public:
  enum {
    NewLine = 1, Space = 2, UCSCHAR = 3, D0 = 4, D1 = 5, D2 = 6, D3 = 7, 
    D4 = 8, D5 = 9, D6 = 10, D7 = 11, D8 = 12, D9 = 13, A = 14, B = 15, 
    C = 16, D = 17, E = 18, F = 19, G = 20, H = 21, I = 22, J = 23, K = 24, 
    L = 25, M = 26, N = 27, O = 28, P = 29, Q = 30, R = 31, S = 32, T = 33, 
    U = 34, V = 35, W = 36, X = 37, Y = 38, Z = 39, COLON = 40, DCOLON = 41, 
    DASH = 42, DOT = 43, UNDERSCORE = 44, TILDE = 45, SHARP = 46
  };

  enum {
    RuleHosts_file = 0, RuleLine = 1, RuleEmpty_line = 2, RuleTable_entry = 3, 
    RuleAddress = 4, RuleIp_v4_address = 5, RuleIp_v6_address = 6, RuleH16 = 7, 
    RuleLs32 = 8, RuleHexdig = 9, RuleDec_octet = 10, RuleDigit = 11, RuleNon_zero_digit = 12, 
    RuleHost_name = 13, RuleIreg_name = 14, RuleIunreserved = 15, RuleAlpha = 16, 
    RuleComment = 17, RuleCommand_line = 18, RuleList_command = 19, RuleSet_command = 20, 
    RuleGet_command = 21, RulePurge_command = 22, RuleRm_command = 23, RuleCmd_list = 24, 
    RuleCmd_purge = 25, RuleCmd_rm = 26, RuleCmd_set = 27, RuleCmd_get = 28
  };

  hosts(antlr4::TokenStream *input);
  ~hosts();

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
  class Ireg_nameContext;
  class IunreservedContext;
  class AlphaContext;
  class CommentContext;
  class Command_lineContext;
  class List_commandContext;
  class Set_commandContext;
  class Get_commandContext;
  class Purge_commandContext;
  class Rm_commandContext;
  class Cmd_listContext;
  class Cmd_purgeContext;
  class Cmd_rmContext;
  class Cmd_setContext;
  class Cmd_getContext; 

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
    std::vector<Host_nameContext *> host_name();
    Host_nameContext* host_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Space();
    antlr4::tree::TerminalNode* Space(size_t i);
    CommentContext *comment();

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
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

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
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    Ls32Context *ls32();
    antlr4::tree::TerminalNode *DCOLON();

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
    antlr4::tree::TerminalNode *COLON();
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
    antlr4::tree::TerminalNode *DASH();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *UNDERSCORE();
    antlr4::tree::TerminalNode *TILDE();
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
    antlr4::tree::TerminalNode *SHARP();
    std::vector<antlr4::tree::TerminalNode *> Space();
    antlr4::tree::TerminalNode* Space(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NewLine();
    antlr4::tree::TerminalNode* NewLine(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentContext* comment();

  class  Command_lineContext : public antlr4::ParserRuleContext {
  public:
    Command_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    List_commandContext *list_command();
    Purge_commandContext *purge_command();
    Set_commandContext *set_command();
    Get_commandContext *get_command();
    Rm_commandContext *rm_command();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Command_lineContext* command_line();

  class  List_commandContext : public antlr4::ParserRuleContext {
  public:
    List_commandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cmd_listContext *cmd_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_commandContext* list_command();

  class  Set_commandContext : public antlr4::ParserRuleContext {
  public:
    Set_commandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cmd_setContext *cmd_set();
    AddressContext *address();
    std::vector<antlr4::tree::TerminalNode *> Space();
    antlr4::tree::TerminalNode* Space(size_t i);
    std::vector<Host_nameContext *> host_name();
    Host_nameContext* host_name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_commandContext* set_command();

  class  Get_commandContext : public antlr4::ParserRuleContext {
  public:
    Get_commandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cmd_getContext *cmd_get();
    AddressContext *address();
    std::vector<antlr4::tree::TerminalNode *> Space();
    antlr4::tree::TerminalNode* Space(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Get_commandContext* get_command();

  class  Purge_commandContext : public antlr4::ParserRuleContext {
  public:
    Purge_commandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cmd_purgeContext *cmd_purge();
    std::vector<AddressContext *> address();
    AddressContext* address(size_t i);
    std::vector<Host_nameContext *> host_name();
    Host_nameContext* host_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Space();
    antlr4::tree::TerminalNode* Space(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Purge_commandContext* purge_command();

  class  Rm_commandContext : public antlr4::ParserRuleContext {
  public:
    Rm_commandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cmd_rmContext *cmd_rm();
    AddressContext *address();
    std::vector<antlr4::tree::TerminalNode *> Space();
    antlr4::tree::TerminalNode* Space(size_t i);
    std::vector<Host_nameContext *> host_name();
    Host_nameContext* host_name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rm_commandContext* rm_command();

  class  Cmd_listContext : public antlr4::ParserRuleContext {
  public:
    Cmd_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L();
    antlr4::tree::TerminalNode *I();
    antlr4::tree::TerminalNode *S();
    antlr4::tree::TerminalNode *T();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cmd_listContext* cmd_list();

  class  Cmd_purgeContext : public antlr4::ParserRuleContext {
  public:
    Cmd_purgeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *P();
    antlr4::tree::TerminalNode *U();
    antlr4::tree::TerminalNode *R();
    antlr4::tree::TerminalNode *G();
    antlr4::tree::TerminalNode *E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cmd_purgeContext* cmd_purge();

  class  Cmd_rmContext : public antlr4::ParserRuleContext {
  public:
    Cmd_rmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *R();
    antlr4::tree::TerminalNode *M();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cmd_rmContext* cmd_rm();

  class  Cmd_setContext : public antlr4::ParserRuleContext {
  public:
    Cmd_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *S();
    antlr4::tree::TerminalNode *E();
    antlr4::tree::TerminalNode *T();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cmd_setContext* cmd_set();

  class  Cmd_getContext : public antlr4::ParserRuleContext {
  public:
    Cmd_getContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *G();
    antlr4::tree::TerminalNode *E();
    antlr4::tree::TerminalNode *T();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cmd_getContext* cmd_get();


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

