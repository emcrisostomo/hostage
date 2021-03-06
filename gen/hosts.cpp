
// Generated from /Users/enrico.m.crisostomo/repos/hostage/src/antlr4/hosts.g4 by ANTLR 4.8


#include "hostsListener.h"
#include "hostsVisitor.h"

#include "hosts.h"


using namespace antlrcpp;
using namespace antlr4;

hosts::hosts(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

hosts::~hosts() {
  delete _interpreter;
}

std::string hosts::getGrammarFileName() const {
  return "hosts.g4";
}

const std::vector<std::string>& hosts::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& hosts::getVocabulary() const {
  return _vocabulary;
}


//----------------- Hosts_fileContext ------------------------------------------------------------------

hosts::Hosts_fileContext::Hosts_fileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hosts::Hosts_fileContext::EOF() {
  return getToken(hosts::EOF, 0);
}

std::vector<hosts::LineContext *> hosts::Hosts_fileContext::line() {
  return getRuleContexts<hosts::LineContext>();
}

hosts::LineContext* hosts::Hosts_fileContext::line(size_t i) {
  return getRuleContext<hosts::LineContext>(i);
}


size_t hosts::Hosts_fileContext::getRuleIndex() const {
  return hosts::RuleHosts_file;
}

void hosts::Hosts_fileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHosts_file(this);
}

void hosts::Hosts_fileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHosts_file(this);
}


antlrcpp::Any hosts::Hosts_fileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitHosts_file(this);
  else
    return visitor->visitChildren(this);
}

hosts::Hosts_fileContext* hosts::hosts_file() {
  Hosts_fileContext *_localctx = _tracker.createInstance<Hosts_fileContext>(_ctx, getState());
  enterRule(_localctx, 0, hosts::RuleHosts_file);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << hosts::NewLine)
      | (1ULL << hosts::Space)
      | (1ULL << hosts::D0)
      | (1ULL << hosts::D1)
      | (1ULL << hosts::D2)
      | (1ULL << hosts::D3)
      | (1ULL << hosts::D4)
      | (1ULL << hosts::D5)
      | (1ULL << hosts::D6)
      | (1ULL << hosts::D7)
      | (1ULL << hosts::D8)
      | (1ULL << hosts::D9)
      | (1ULL << hosts::A)
      | (1ULL << hosts::B)
      | (1ULL << hosts::C)
      | (1ULL << hosts::D)
      | (1ULL << hosts::E)
      | (1ULL << hosts::F)
      | (1ULL << hosts::DCOLON)
      | (1ULL << hosts::SHARP))) != 0)) {
      setState(60);
      line();
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(66);
    match(hosts::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

hosts::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hosts::LineContext::NewLine() {
  return getToken(hosts::NewLine, 0);
}

hosts::Comment_lineContext* hosts::LineContext::comment_line() {
  return getRuleContext<hosts::Comment_lineContext>(0);
}

hosts::Table_entryContext* hosts::LineContext::table_entry() {
  return getRuleContext<hosts::Table_entryContext>(0);
}

hosts::Empty_lineContext* hosts::LineContext::empty_line() {
  return getRuleContext<hosts::Empty_lineContext>(0);
}


size_t hosts::LineContext::getRuleIndex() const {
  return hosts::RuleLine;
}

void hosts::LineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine(this);
}

void hosts::LineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine(this);
}


antlrcpp::Any hosts::LineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitLine(this);
  else
    return visitor->visitChildren(this);
}

hosts::LineContext* hosts::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 2, hosts::RuleLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(68);
      comment_line();
      break;
    }

    case 2: {
      setState(69);
      table_entry();
      break;
    }

    case 3: {
      setState(70);
      empty_line();
      break;
    }

    }
    setState(73);
    match(hosts::NewLine);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comment_lineContext ------------------------------------------------------------------

hosts::Comment_lineContext::Comment_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hosts::CommentContext* hosts::Comment_lineContext::comment() {
  return getRuleContext<hosts::CommentContext>(0);
}


size_t hosts::Comment_lineContext::getRuleIndex() const {
  return hosts::RuleComment_line;
}

void hosts::Comment_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComment_line(this);
}

void hosts::Comment_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComment_line(this);
}


antlrcpp::Any hosts::Comment_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitComment_line(this);
  else
    return visitor->visitChildren(this);
}

hosts::Comment_lineContext* hosts::comment_line() {
  Comment_lineContext *_localctx = _tracker.createInstance<Comment_lineContext>(_ctx, getState());
  enterRule(_localctx, 4, hosts::RuleComment_line);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    comment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Empty_lineContext ------------------------------------------------------------------

hosts::Empty_lineContext::Empty_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> hosts::Empty_lineContext::Space() {
  return getTokens(hosts::Space);
}

tree::TerminalNode* hosts::Empty_lineContext::Space(size_t i) {
  return getToken(hosts::Space, i);
}


size_t hosts::Empty_lineContext::getRuleIndex() const {
  return hosts::RuleEmpty_line;
}

void hosts::Empty_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmpty_line(this);
}

void hosts::Empty_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmpty_line(this);
}


antlrcpp::Any hosts::Empty_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitEmpty_line(this);
  else
    return visitor->visitChildren(this);
}

hosts::Empty_lineContext* hosts::empty_line() {
  Empty_lineContext *_localctx = _tracker.createInstance<Empty_lineContext>(_ctx, getState());
  enterRule(_localctx, 6, hosts::RuleEmpty_line);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hosts::Space) {
      setState(77);
      match(hosts::Space);
      setState(82);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Table_entryContext ------------------------------------------------------------------

hosts::Table_entryContext::Table_entryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hosts::AddressContext* hosts::Table_entryContext::address() {
  return getRuleContext<hosts::AddressContext>(0);
}

std::vector<hosts::Host_nameContext *> hosts::Table_entryContext::host_name() {
  return getRuleContexts<hosts::Host_nameContext>();
}

hosts::Host_nameContext* hosts::Table_entryContext::host_name(size_t i) {
  return getRuleContext<hosts::Host_nameContext>(i);
}

std::vector<tree::TerminalNode *> hosts::Table_entryContext::Space() {
  return getTokens(hosts::Space);
}

tree::TerminalNode* hosts::Table_entryContext::Space(size_t i) {
  return getToken(hosts::Space, i);
}

hosts::CommentContext* hosts::Table_entryContext::comment() {
  return getRuleContext<hosts::CommentContext>(0);
}


size_t hosts::Table_entryContext::getRuleIndex() const {
  return hosts::RuleTable_entry;
}

void hosts::Table_entryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTable_entry(this);
}

void hosts::Table_entryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTable_entry(this);
}


antlrcpp::Any hosts::Table_entryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitTable_entry(this);
  else
    return visitor->visitChildren(this);
}

hosts::Table_entryContext* hosts::table_entry() {
  Table_entryContext *_localctx = _tracker.createInstance<Table_entryContext>(_ctx, getState());
  enterRule(_localctx, 8, hosts::RuleTable_entry);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(83);
    address();
    setState(85); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(84);
      match(hosts::Space);
      setState(87); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hosts::Space);
    setState(89);
    host_name();
    setState(98);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(91); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(90);
          match(hosts::Space);
          setState(93); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == hosts::Space);
        setState(95);
        host_name(); 
      }
      setState(100);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
    setState(104);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(101);
        match(hosts::Space); 
      }
      setState(106);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
    setState(108);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == hosts::Space

    || _la == hosts::SHARP) {
      setState(107);
      comment();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddressContext ------------------------------------------------------------------

hosts::AddressContext::AddressContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hosts::Ip_v4_addressContext* hosts::AddressContext::ip_v4_address() {
  return getRuleContext<hosts::Ip_v4_addressContext>(0);
}

hosts::Ip_v6_addressContext* hosts::AddressContext::ip_v6_address() {
  return getRuleContext<hosts::Ip_v6_addressContext>(0);
}


size_t hosts::AddressContext::getRuleIndex() const {
  return hosts::RuleAddress;
}

void hosts::AddressContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddress(this);
}

void hosts::AddressContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddress(this);
}


antlrcpp::Any hosts::AddressContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitAddress(this);
  else
    return visitor->visitChildren(this);
}

hosts::AddressContext* hosts::address() {
  AddressContext *_localctx = _tracker.createInstance<AddressContext>(_ctx, getState());
  enterRule(_localctx, 10, hosts::RuleAddress);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(110);
      ip_v4_address();
      break;
    }

    case 2: {
      setState(111);
      ip_v6_address();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ip_v4_addressContext ------------------------------------------------------------------

hosts::Ip_v4_addressContext::Ip_v4_addressContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hosts::Dec_octetContext *> hosts::Ip_v4_addressContext::dec_octet() {
  return getRuleContexts<hosts::Dec_octetContext>();
}

hosts::Dec_octetContext* hosts::Ip_v4_addressContext::dec_octet(size_t i) {
  return getRuleContext<hosts::Dec_octetContext>(i);
}

std::vector<tree::TerminalNode *> hosts::Ip_v4_addressContext::DOT() {
  return getTokens(hosts::DOT);
}

tree::TerminalNode* hosts::Ip_v4_addressContext::DOT(size_t i) {
  return getToken(hosts::DOT, i);
}


size_t hosts::Ip_v4_addressContext::getRuleIndex() const {
  return hosts::RuleIp_v4_address;
}

void hosts::Ip_v4_addressContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIp_v4_address(this);
}

void hosts::Ip_v4_addressContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIp_v4_address(this);
}


antlrcpp::Any hosts::Ip_v4_addressContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitIp_v4_address(this);
  else
    return visitor->visitChildren(this);
}

hosts::Ip_v4_addressContext* hosts::ip_v4_address() {
  Ip_v4_addressContext *_localctx = _tracker.createInstance<Ip_v4_addressContext>(_ctx, getState());
  enterRule(_localctx, 12, hosts::RuleIp_v4_address);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    dec_octet();
    setState(115);
    match(hosts::DOT);
    setState(116);
    dec_octet();
    setState(117);
    match(hosts::DOT);
    setState(118);
    dec_octet();
    setState(119);
    match(hosts::DOT);
    setState(120);
    dec_octet();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ip_v6_addressContext ------------------------------------------------------------------

hosts::Ip_v6_addressContext::Ip_v6_addressContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hosts::H16Context *> hosts::Ip_v6_addressContext::h16() {
  return getRuleContexts<hosts::H16Context>();
}

hosts::H16Context* hosts::Ip_v6_addressContext::h16(size_t i) {
  return getRuleContext<hosts::H16Context>(i);
}

std::vector<tree::TerminalNode *> hosts::Ip_v6_addressContext::COLON() {
  return getTokens(hosts::COLON);
}

tree::TerminalNode* hosts::Ip_v6_addressContext::COLON(size_t i) {
  return getToken(hosts::COLON, i);
}

hosts::Ls32Context* hosts::Ip_v6_addressContext::ls32() {
  return getRuleContext<hosts::Ls32Context>(0);
}

tree::TerminalNode* hosts::Ip_v6_addressContext::DCOLON() {
  return getToken(hosts::DCOLON, 0);
}


size_t hosts::Ip_v6_addressContext::getRuleIndex() const {
  return hosts::RuleIp_v6_address;
}

void hosts::Ip_v6_addressContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIp_v6_address(this);
}

void hosts::Ip_v6_addressContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIp_v6_address(this);
}


antlrcpp::Any hosts::Ip_v6_addressContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitIp_v6_address(this);
  else
    return visitor->visitChildren(this);
}

hosts::Ip_v6_addressContext* hosts::ip_v6_address() {
  Ip_v6_addressContext *_localctx = _tracker.createInstance<Ip_v6_addressContext>(_ctx, getState());
  enterRule(_localctx, 14, hosts::RuleIp_v6_address);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(312);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(122);
      h16();
      setState(123);
      match(hosts::COLON);
      setState(124);
      h16();
      setState(125);
      match(hosts::COLON);
      setState(126);
      h16();
      setState(127);
      match(hosts::COLON);
      setState(128);
      h16();
      setState(129);
      match(hosts::COLON);
      setState(130);
      h16();
      setState(131);
      match(hosts::COLON);
      setState(132);
      h16();
      setState(133);
      match(hosts::COLON);
      setState(134);
      ls32();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(136);
      match(hosts::DCOLON);
      setState(137);
      h16();
      setState(138);
      match(hosts::COLON);
      setState(139);
      h16();
      setState(140);
      match(hosts::COLON);
      setState(141);
      h16();
      setState(142);
      match(hosts::COLON);
      setState(143);
      h16();
      setState(144);
      match(hosts::COLON);
      setState(145);
      h16();
      setState(146);
      match(hosts::COLON);
      setState(147);
      ls32();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(150);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hosts::D0)
        | (1ULL << hosts::D1)
        | (1ULL << hosts::D2)
        | (1ULL << hosts::D3)
        | (1ULL << hosts::D4)
        | (1ULL << hosts::D5)
        | (1ULL << hosts::D6)
        | (1ULL << hosts::D7)
        | (1ULL << hosts::D8)
        | (1ULL << hosts::D9)
        | (1ULL << hosts::A)
        | (1ULL << hosts::B)
        | (1ULL << hosts::C)
        | (1ULL << hosts::D)
        | (1ULL << hosts::E)
        | (1ULL << hosts::F))) != 0)) {
        setState(149);
        h16();
      }
      setState(152);
      match(hosts::DCOLON);
      setState(153);
      h16();
      setState(154);
      match(hosts::COLON);
      setState(155);
      h16();
      setState(156);
      match(hosts::COLON);
      setState(157);
      h16();
      setState(158);
      match(hosts::COLON);
      setState(159);
      h16();
      setState(160);
      match(hosts::COLON);
      setState(161);
      ls32();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(169);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hosts::D0)
        | (1ULL << hosts::D1)
        | (1ULL << hosts::D2)
        | (1ULL << hosts::D3)
        | (1ULL << hosts::D4)
        | (1ULL << hosts::D5)
        | (1ULL << hosts::D6)
        | (1ULL << hosts::D7)
        | (1ULL << hosts::D8)
        | (1ULL << hosts::D9)
        | (1ULL << hosts::A)
        | (1ULL << hosts::B)
        | (1ULL << hosts::C)
        | (1ULL << hosts::D)
        | (1ULL << hosts::E)
        | (1ULL << hosts::F))) != 0)) {
        setState(166);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          setState(163);
          h16();
          setState(164);
          match(hosts::COLON);
          break;
        }

        }
        setState(168);
        h16();
      }
      setState(171);
      match(hosts::DCOLON);
      setState(172);
      h16();
      setState(173);
      match(hosts::COLON);
      setState(174);
      h16();
      setState(175);
      match(hosts::COLON);
      setState(176);
      h16();
      setState(177);
      match(hosts::COLON);
      setState(178);
      ls32();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(191);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hosts::D0)
        | (1ULL << hosts::D1)
        | (1ULL << hosts::D2)
        | (1ULL << hosts::D3)
        | (1ULL << hosts::D4)
        | (1ULL << hosts::D5)
        | (1ULL << hosts::D6)
        | (1ULL << hosts::D7)
        | (1ULL << hosts::D8)
        | (1ULL << hosts::D9)
        | (1ULL << hosts::A)
        | (1ULL << hosts::B)
        | (1ULL << hosts::C)
        | (1ULL << hosts::D)
        | (1ULL << hosts::E)
        | (1ULL << hosts::F))) != 0)) {
        setState(188);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          setState(183);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
          case 1: {
            setState(180);
            h16();
            setState(181);
            match(hosts::COLON);
            break;
          }

          }
          setState(185);
          h16();
          setState(186);
          match(hosts::COLON);
          break;
        }

        }
        setState(190);
        h16();
      }
      setState(193);
      match(hosts::DCOLON);
      setState(194);
      h16();
      setState(195);
      match(hosts::COLON);
      setState(196);
      h16();
      setState(197);
      match(hosts::COLON);
      setState(198);
      ls32();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(216);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hosts::D0)
        | (1ULL << hosts::D1)
        | (1ULL << hosts::D2)
        | (1ULL << hosts::D3)
        | (1ULL << hosts::D4)
        | (1ULL << hosts::D5)
        | (1ULL << hosts::D6)
        | (1ULL << hosts::D7)
        | (1ULL << hosts::D8)
        | (1ULL << hosts::D9)
        | (1ULL << hosts::A)
        | (1ULL << hosts::B)
        | (1ULL << hosts::C)
        | (1ULL << hosts::D)
        | (1ULL << hosts::E)
        | (1ULL << hosts::F))) != 0)) {
        setState(213);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          setState(208);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
          case 1: {
            setState(203);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
            case 1: {
              setState(200);
              h16();
              setState(201);
              match(hosts::COLON);
              break;
            }

            }
            setState(205);
            h16();
            setState(206);
            match(hosts::COLON);
            break;
          }

          }
          setState(210);
          h16();
          setState(211);
          match(hosts::COLON);
          break;
        }

        }
        setState(215);
        h16();
      }
      setState(218);
      match(hosts::DCOLON);
      setState(219);
      h16();
      setState(220);
      match(hosts::COLON);
      setState(221);
      ls32();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(244);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hosts::D0)
        | (1ULL << hosts::D1)
        | (1ULL << hosts::D2)
        | (1ULL << hosts::D3)
        | (1ULL << hosts::D4)
        | (1ULL << hosts::D5)
        | (1ULL << hosts::D6)
        | (1ULL << hosts::D7)
        | (1ULL << hosts::D8)
        | (1ULL << hosts::D9)
        | (1ULL << hosts::A)
        | (1ULL << hosts::B)
        | (1ULL << hosts::C)
        | (1ULL << hosts::D)
        | (1ULL << hosts::E)
        | (1ULL << hosts::F))) != 0)) {
        setState(241);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
        case 1: {
          setState(236);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
          case 1: {
            setState(231);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
            case 1: {
              setState(226);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
              case 1: {
                setState(223);
                h16();
                setState(224);
                match(hosts::COLON);
                break;
              }

              }
              setState(228);
              h16();
              setState(229);
              match(hosts::COLON);
              break;
            }

            }
            setState(233);
            h16();
            setState(234);
            match(hosts::COLON);
            break;
          }

          }
          setState(238);
          h16();
          setState(239);
          match(hosts::COLON);
          break;
        }

        }
        setState(243);
        h16();
      }
      setState(246);
      match(hosts::DCOLON);
      setState(247);
      ls32();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(274);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hosts::D0)
        | (1ULL << hosts::D1)
        | (1ULL << hosts::D2)
        | (1ULL << hosts::D3)
        | (1ULL << hosts::D4)
        | (1ULL << hosts::D5)
        | (1ULL << hosts::D6)
        | (1ULL << hosts::D7)
        | (1ULL << hosts::D8)
        | (1ULL << hosts::D9)
        | (1ULL << hosts::A)
        | (1ULL << hosts::B)
        | (1ULL << hosts::C)
        | (1ULL << hosts::D)
        | (1ULL << hosts::E)
        | (1ULL << hosts::F))) != 0)) {
        setState(271);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
        case 1: {
          setState(266);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
          case 1: {
            setState(261);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
            case 1: {
              setState(256);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
              case 1: {
                setState(251);
                _errHandler->sync(this);

                switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
                case 1: {
                  setState(248);
                  h16();
                  setState(249);
                  match(hosts::COLON);
                  break;
                }

                }
                setState(253);
                h16();
                setState(254);
                match(hosts::COLON);
                break;
              }

              }
              setState(258);
              h16();
              setState(259);
              match(hosts::COLON);
              break;
            }

            }
            setState(263);
            h16();
            setState(264);
            match(hosts::COLON);
            break;
          }

          }
          setState(268);
          h16();
          setState(269);
          match(hosts::COLON);
          break;
        }

        }
        setState(273);
        h16();
      }
      setState(276);
      match(hosts::DCOLON);
      setState(277);
      h16();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(309);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hosts::D0)
        | (1ULL << hosts::D1)
        | (1ULL << hosts::D2)
        | (1ULL << hosts::D3)
        | (1ULL << hosts::D4)
        | (1ULL << hosts::D5)
        | (1ULL << hosts::D6)
        | (1ULL << hosts::D7)
        | (1ULL << hosts::D8)
        | (1ULL << hosts::D9)
        | (1ULL << hosts::A)
        | (1ULL << hosts::B)
        | (1ULL << hosts::C)
        | (1ULL << hosts::D)
        | (1ULL << hosts::E)
        | (1ULL << hosts::F))) != 0)) {
        setState(306);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
        case 1: {
          setState(301);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
          case 1: {
            setState(296);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
            case 1: {
              setState(291);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
              case 1: {
                setState(286);
                _errHandler->sync(this);

                switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
                case 1: {
                  setState(281);
                  _errHandler->sync(this);

                  switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
                  case 1: {
                    setState(278);
                    h16();
                    setState(279);
                    match(hosts::COLON);
                    break;
                  }

                  }
                  setState(283);
                  h16();
                  setState(284);
                  match(hosts::COLON);
                  break;
                }

                }
                setState(288);
                h16();
                setState(289);
                match(hosts::COLON);
                break;
              }

              }
              setState(293);
              h16();
              setState(294);
              match(hosts::COLON);
              break;
            }

            }
            setState(298);
            h16();
            setState(299);
            match(hosts::COLON);
            break;
          }

          }
          setState(303);
          h16();
          setState(304);
          match(hosts::COLON);
          break;
        }

        }
        setState(308);
        h16();
      }
      setState(311);
      match(hosts::DCOLON);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- H16Context ------------------------------------------------------------------

hosts::H16Context::H16Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hosts::HexdigContext *> hosts::H16Context::hexdig() {
  return getRuleContexts<hosts::HexdigContext>();
}

hosts::HexdigContext* hosts::H16Context::hexdig(size_t i) {
  return getRuleContext<hosts::HexdigContext>(i);
}


size_t hosts::H16Context::getRuleIndex() const {
  return hosts::RuleH16;
}

void hosts::H16Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterH16(this);
}

void hosts::H16Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitH16(this);
}


antlrcpp::Any hosts::H16Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitH16(this);
  else
    return visitor->visitChildren(this);
}

hosts::H16Context* hosts::h16() {
  H16Context *_localctx = _tracker.createInstance<H16Context>(_ctx, getState());
  enterRule(_localctx, 16, hosts::RuleH16);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(327);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(314);
      hexdig();
      setState(315);
      hexdig();
      setState(316);
      hexdig();
      setState(317);
      hexdig();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(319);
      hexdig();
      setState(320);
      hexdig();
      setState(321);
      hexdig();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(323);
      hexdig();
      setState(324);
      hexdig();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(326);
      hexdig();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ls32Context ------------------------------------------------------------------

hosts::Ls32Context::Ls32Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hosts::H16Context *> hosts::Ls32Context::h16() {
  return getRuleContexts<hosts::H16Context>();
}

hosts::H16Context* hosts::Ls32Context::h16(size_t i) {
  return getRuleContext<hosts::H16Context>(i);
}

tree::TerminalNode* hosts::Ls32Context::COLON() {
  return getToken(hosts::COLON, 0);
}

hosts::Ip_v4_addressContext* hosts::Ls32Context::ip_v4_address() {
  return getRuleContext<hosts::Ip_v4_addressContext>(0);
}


size_t hosts::Ls32Context::getRuleIndex() const {
  return hosts::RuleLs32;
}

void hosts::Ls32Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLs32(this);
}

void hosts::Ls32Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLs32(this);
}


antlrcpp::Any hosts::Ls32Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitLs32(this);
  else
    return visitor->visitChildren(this);
}

hosts::Ls32Context* hosts::ls32() {
  Ls32Context *_localctx = _tracker.createInstance<Ls32Context>(_ctx, getState());
  enterRule(_localctx, 18, hosts::RuleLs32);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(334);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(329);
      h16();
      setState(330);
      match(hosts::COLON);
      setState(331);
      h16();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(333);
      ip_v4_address();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HexdigContext ------------------------------------------------------------------

hosts::HexdigContext::HexdigContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hosts::DigitContext* hosts::HexdigContext::digit() {
  return getRuleContext<hosts::DigitContext>(0);
}

tree::TerminalNode* hosts::HexdigContext::A() {
  return getToken(hosts::A, 0);
}

tree::TerminalNode* hosts::HexdigContext::B() {
  return getToken(hosts::B, 0);
}

tree::TerminalNode* hosts::HexdigContext::C() {
  return getToken(hosts::C, 0);
}

tree::TerminalNode* hosts::HexdigContext::D() {
  return getToken(hosts::D, 0);
}

tree::TerminalNode* hosts::HexdigContext::E() {
  return getToken(hosts::E, 0);
}

tree::TerminalNode* hosts::HexdigContext::F() {
  return getToken(hosts::F, 0);
}


size_t hosts::HexdigContext::getRuleIndex() const {
  return hosts::RuleHexdig;
}

void hosts::HexdigContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHexdig(this);
}

void hosts::HexdigContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHexdig(this);
}


antlrcpp::Any hosts::HexdigContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitHexdig(this);
  else
    return visitor->visitChildren(this);
}

hosts::HexdigContext* hosts::hexdig() {
  HexdigContext *_localctx = _tracker.createInstance<HexdigContext>(_ctx, getState());
  enterRule(_localctx, 20, hosts::RuleHexdig);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(338);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hosts::D0:
      case hosts::D1:
      case hosts::D2:
      case hosts::D3:
      case hosts::D4:
      case hosts::D5:
      case hosts::D6:
      case hosts::D7:
      case hosts::D8:
      case hosts::D9: {
        enterOuterAlt(_localctx, 1);
        setState(336);
        digit();
        break;
      }

      case hosts::A:
      case hosts::B:
      case hosts::C:
      case hosts::D:
      case hosts::E:
      case hosts::F: {
        enterOuterAlt(_localctx, 2);
        setState(337);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << hosts::A)
          | (1ULL << hosts::B)
          | (1ULL << hosts::C)
          | (1ULL << hosts::D)
          | (1ULL << hosts::E)
          | (1ULL << hosts::F))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
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

//----------------- Dec_octetContext ------------------------------------------------------------------

hosts::Dec_octetContext::Dec_octetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hosts::DigitContext *> hosts::Dec_octetContext::digit() {
  return getRuleContexts<hosts::DigitContext>();
}

hosts::DigitContext* hosts::Dec_octetContext::digit(size_t i) {
  return getRuleContext<hosts::DigitContext>(i);
}

hosts::Non_zero_digitContext* hosts::Dec_octetContext::non_zero_digit() {
  return getRuleContext<hosts::Non_zero_digitContext>(0);
}

tree::TerminalNode* hosts::Dec_octetContext::D1() {
  return getToken(hosts::D1, 0);
}

std::vector<tree::TerminalNode *> hosts::Dec_octetContext::D2() {
  return getTokens(hosts::D2);
}

tree::TerminalNode* hosts::Dec_octetContext::D2(size_t i) {
  return getToken(hosts::D2, i);
}

tree::TerminalNode* hosts::Dec_octetContext::D0() {
  return getToken(hosts::D0, 0);
}

tree::TerminalNode* hosts::Dec_octetContext::D3() {
  return getToken(hosts::D3, 0);
}

tree::TerminalNode* hosts::Dec_octetContext::D4() {
  return getToken(hosts::D4, 0);
}

std::vector<tree::TerminalNode *> hosts::Dec_octetContext::D5() {
  return getTokens(hosts::D5);
}

tree::TerminalNode* hosts::Dec_octetContext::D5(size_t i) {
  return getToken(hosts::D5, i);
}


size_t hosts::Dec_octetContext::getRuleIndex() const {
  return hosts::RuleDec_octet;
}

void hosts::Dec_octetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDec_octet(this);
}

void hosts::Dec_octetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDec_octet(this);
}


antlrcpp::Any hosts::Dec_octetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitDec_octet(this);
  else
    return visitor->visitChildren(this);
}

hosts::Dec_octetContext* hosts::dec_octet() {
  Dec_octetContext *_localctx = _tracker.createInstance<Dec_octetContext>(_ctx, getState());
  enterRule(_localctx, 22, hosts::RuleDec_octet);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(354);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(340);
      digit();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(341);
      non_zero_digit();
      setState(342);
      digit();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(344);
      match(hosts::D1);
      setState(345);
      digit();
      setState(346);
      digit();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(348);
      match(hosts::D2);
      setState(349);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hosts::D0)
        | (1ULL << hosts::D1)
        | (1ULL << hosts::D2)
        | (1ULL << hosts::D3)
        | (1ULL << hosts::D4))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(350);
      digit();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(351);
      match(hosts::D2);
      setState(352);
      match(hosts::D5);
      setState(353);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hosts::D0)
        | (1ULL << hosts::D1)
        | (1ULL << hosts::D2)
        | (1ULL << hosts::D3)
        | (1ULL << hosts::D4)
        | (1ULL << hosts::D5))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DigitContext ------------------------------------------------------------------

hosts::DigitContext::DigitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hosts::DigitContext::D0() {
  return getToken(hosts::D0, 0);
}

hosts::Non_zero_digitContext* hosts::DigitContext::non_zero_digit() {
  return getRuleContext<hosts::Non_zero_digitContext>(0);
}


size_t hosts::DigitContext::getRuleIndex() const {
  return hosts::RuleDigit;
}

void hosts::DigitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDigit(this);
}

void hosts::DigitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDigit(this);
}


antlrcpp::Any hosts::DigitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitDigit(this);
  else
    return visitor->visitChildren(this);
}

hosts::DigitContext* hosts::digit() {
  DigitContext *_localctx = _tracker.createInstance<DigitContext>(_ctx, getState());
  enterRule(_localctx, 24, hosts::RuleDigit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(358);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hosts::D0: {
        enterOuterAlt(_localctx, 1);
        setState(356);
        match(hosts::D0);
        break;
      }

      case hosts::D1:
      case hosts::D2:
      case hosts::D3:
      case hosts::D4:
      case hosts::D5:
      case hosts::D6:
      case hosts::D7:
      case hosts::D8:
      case hosts::D9: {
        enterOuterAlt(_localctx, 2);
        setState(357);
        non_zero_digit();
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

//----------------- Non_zero_digitContext ------------------------------------------------------------------

hosts::Non_zero_digitContext::Non_zero_digitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hosts::Non_zero_digitContext::D1() {
  return getToken(hosts::D1, 0);
}

tree::TerminalNode* hosts::Non_zero_digitContext::D2() {
  return getToken(hosts::D2, 0);
}

tree::TerminalNode* hosts::Non_zero_digitContext::D3() {
  return getToken(hosts::D3, 0);
}

tree::TerminalNode* hosts::Non_zero_digitContext::D4() {
  return getToken(hosts::D4, 0);
}

tree::TerminalNode* hosts::Non_zero_digitContext::D5() {
  return getToken(hosts::D5, 0);
}

tree::TerminalNode* hosts::Non_zero_digitContext::D6() {
  return getToken(hosts::D6, 0);
}

tree::TerminalNode* hosts::Non_zero_digitContext::D7() {
  return getToken(hosts::D7, 0);
}

tree::TerminalNode* hosts::Non_zero_digitContext::D8() {
  return getToken(hosts::D8, 0);
}

tree::TerminalNode* hosts::Non_zero_digitContext::D9() {
  return getToken(hosts::D9, 0);
}


size_t hosts::Non_zero_digitContext::getRuleIndex() const {
  return hosts::RuleNon_zero_digit;
}

void hosts::Non_zero_digitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNon_zero_digit(this);
}

void hosts::Non_zero_digitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNon_zero_digit(this);
}


antlrcpp::Any hosts::Non_zero_digitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitNon_zero_digit(this);
  else
    return visitor->visitChildren(this);
}

hosts::Non_zero_digitContext* hosts::non_zero_digit() {
  Non_zero_digitContext *_localctx = _tracker.createInstance<Non_zero_digitContext>(_ctx, getState());
  enterRule(_localctx, 26, hosts::RuleNon_zero_digit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << hosts::D1)
      | (1ULL << hosts::D2)
      | (1ULL << hosts::D3)
      | (1ULL << hosts::D4)
      | (1ULL << hosts::D5)
      | (1ULL << hosts::D6)
      | (1ULL << hosts::D7)
      | (1ULL << hosts::D8)
      | (1ULL << hosts::D9))) != 0))) {
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

//----------------- Host_nameContext ------------------------------------------------------------------

hosts::Host_nameContext::Host_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hosts::Ireg_nameContext* hosts::Host_nameContext::ireg_name() {
  return getRuleContext<hosts::Ireg_nameContext>(0);
}


size_t hosts::Host_nameContext::getRuleIndex() const {
  return hosts::RuleHost_name;
}

void hosts::Host_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHost_name(this);
}

void hosts::Host_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHost_name(this);
}


antlrcpp::Any hosts::Host_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitHost_name(this);
  else
    return visitor->visitChildren(this);
}

hosts::Host_nameContext* hosts::host_name() {
  Host_nameContext *_localctx = _tracker.createInstance<Host_nameContext>(_ctx, getState());
  enterRule(_localctx, 28, hosts::RuleHost_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    ireg_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ireg_nameContext ------------------------------------------------------------------

hosts::Ireg_nameContext::Ireg_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hosts::IunreservedContext *> hosts::Ireg_nameContext::iunreserved() {
  return getRuleContexts<hosts::IunreservedContext>();
}

hosts::IunreservedContext* hosts::Ireg_nameContext::iunreserved(size_t i) {
  return getRuleContext<hosts::IunreservedContext>(i);
}


size_t hosts::Ireg_nameContext::getRuleIndex() const {
  return hosts::RuleIreg_name;
}

void hosts::Ireg_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIreg_name(this);
}

void hosts::Ireg_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIreg_name(this);
}


antlrcpp::Any hosts::Ireg_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitIreg_name(this);
  else
    return visitor->visitChildren(this);
}

hosts::Ireg_nameContext* hosts::ireg_name() {
  Ireg_nameContext *_localctx = _tracker.createInstance<Ireg_nameContext>(_ctx, getState());
  enterRule(_localctx, 30, hosts::RuleIreg_name);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(364);
    iunreserved();
    setState(368);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << hosts::UCSCHAR)
      | (1ULL << hosts::D0)
      | (1ULL << hosts::D1)
      | (1ULL << hosts::D2)
      | (1ULL << hosts::D3)
      | (1ULL << hosts::D4)
      | (1ULL << hosts::D5)
      | (1ULL << hosts::D6)
      | (1ULL << hosts::D7)
      | (1ULL << hosts::D8)
      | (1ULL << hosts::D9)
      | (1ULL << hosts::A)
      | (1ULL << hosts::B)
      | (1ULL << hosts::C)
      | (1ULL << hosts::D)
      | (1ULL << hosts::E)
      | (1ULL << hosts::F)
      | (1ULL << hosts::G)
      | (1ULL << hosts::H)
      | (1ULL << hosts::I)
      | (1ULL << hosts::J)
      | (1ULL << hosts::K)
      | (1ULL << hosts::L)
      | (1ULL << hosts::M)
      | (1ULL << hosts::N)
      | (1ULL << hosts::O)
      | (1ULL << hosts::P)
      | (1ULL << hosts::Q)
      | (1ULL << hosts::R)
      | (1ULL << hosts::S)
      | (1ULL << hosts::T)
      | (1ULL << hosts::U)
      | (1ULL << hosts::V)
      | (1ULL << hosts::W)
      | (1ULL << hosts::X)
      | (1ULL << hosts::Y)
      | (1ULL << hosts::Z)
      | (1ULL << hosts::DASH)
      | (1ULL << hosts::DOT)
      | (1ULL << hosts::UNDERSCORE)
      | (1ULL << hosts::TILDE))) != 0)) {
      setState(365);
      iunreserved();
      setState(370);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IunreservedContext ------------------------------------------------------------------

hosts::IunreservedContext::IunreservedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hosts::AlphaContext* hosts::IunreservedContext::alpha() {
  return getRuleContext<hosts::AlphaContext>(0);
}

hosts::DigitContext* hosts::IunreservedContext::digit() {
  return getRuleContext<hosts::DigitContext>(0);
}

tree::TerminalNode* hosts::IunreservedContext::DASH() {
  return getToken(hosts::DASH, 0);
}

tree::TerminalNode* hosts::IunreservedContext::DOT() {
  return getToken(hosts::DOT, 0);
}

tree::TerminalNode* hosts::IunreservedContext::UNDERSCORE() {
  return getToken(hosts::UNDERSCORE, 0);
}

tree::TerminalNode* hosts::IunreservedContext::TILDE() {
  return getToken(hosts::TILDE, 0);
}

tree::TerminalNode* hosts::IunreservedContext::UCSCHAR() {
  return getToken(hosts::UCSCHAR, 0);
}


size_t hosts::IunreservedContext::getRuleIndex() const {
  return hosts::RuleIunreserved;
}

void hosts::IunreservedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIunreserved(this);
}

void hosts::IunreservedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIunreserved(this);
}


antlrcpp::Any hosts::IunreservedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitIunreserved(this);
  else
    return visitor->visitChildren(this);
}

hosts::IunreservedContext* hosts::iunreserved() {
  IunreservedContext *_localctx = _tracker.createInstance<IunreservedContext>(_ctx, getState());
  enterRule(_localctx, 32, hosts::RuleIunreserved);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(374);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hosts::A:
      case hosts::B:
      case hosts::C:
      case hosts::D:
      case hosts::E:
      case hosts::F:
      case hosts::G:
      case hosts::H:
      case hosts::I:
      case hosts::J:
      case hosts::K:
      case hosts::L:
      case hosts::M:
      case hosts::N:
      case hosts::O:
      case hosts::P:
      case hosts::Q:
      case hosts::R:
      case hosts::S:
      case hosts::T:
      case hosts::U:
      case hosts::V:
      case hosts::W:
      case hosts::X:
      case hosts::Y:
      case hosts::Z: {
        enterOuterAlt(_localctx, 1);
        setState(371);
        alpha();
        break;
      }

      case hosts::D0:
      case hosts::D1:
      case hosts::D2:
      case hosts::D3:
      case hosts::D4:
      case hosts::D5:
      case hosts::D6:
      case hosts::D7:
      case hosts::D8:
      case hosts::D9: {
        enterOuterAlt(_localctx, 2);
        setState(372);
        digit();
        break;
      }

      case hosts::UCSCHAR:
      case hosts::DASH:
      case hosts::DOT:
      case hosts::UNDERSCORE:
      case hosts::TILDE: {
        enterOuterAlt(_localctx, 3);
        setState(373);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << hosts::UCSCHAR)
          | (1ULL << hosts::DASH)
          | (1ULL << hosts::DOT)
          | (1ULL << hosts::UNDERSCORE)
          | (1ULL << hosts::TILDE))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
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

//----------------- AlphaContext ------------------------------------------------------------------

hosts::AlphaContext::AlphaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hosts::AlphaContext::A() {
  return getToken(hosts::A, 0);
}

tree::TerminalNode* hosts::AlphaContext::B() {
  return getToken(hosts::B, 0);
}

tree::TerminalNode* hosts::AlphaContext::C() {
  return getToken(hosts::C, 0);
}

tree::TerminalNode* hosts::AlphaContext::D() {
  return getToken(hosts::D, 0);
}

tree::TerminalNode* hosts::AlphaContext::E() {
  return getToken(hosts::E, 0);
}

tree::TerminalNode* hosts::AlphaContext::F() {
  return getToken(hosts::F, 0);
}

tree::TerminalNode* hosts::AlphaContext::G() {
  return getToken(hosts::G, 0);
}

tree::TerminalNode* hosts::AlphaContext::H() {
  return getToken(hosts::H, 0);
}

tree::TerminalNode* hosts::AlphaContext::I() {
  return getToken(hosts::I, 0);
}

tree::TerminalNode* hosts::AlphaContext::J() {
  return getToken(hosts::J, 0);
}

tree::TerminalNode* hosts::AlphaContext::K() {
  return getToken(hosts::K, 0);
}

tree::TerminalNode* hosts::AlphaContext::L() {
  return getToken(hosts::L, 0);
}

tree::TerminalNode* hosts::AlphaContext::M() {
  return getToken(hosts::M, 0);
}

tree::TerminalNode* hosts::AlphaContext::N() {
  return getToken(hosts::N, 0);
}

tree::TerminalNode* hosts::AlphaContext::O() {
  return getToken(hosts::O, 0);
}

tree::TerminalNode* hosts::AlphaContext::P() {
  return getToken(hosts::P, 0);
}

tree::TerminalNode* hosts::AlphaContext::Q() {
  return getToken(hosts::Q, 0);
}

tree::TerminalNode* hosts::AlphaContext::R() {
  return getToken(hosts::R, 0);
}

tree::TerminalNode* hosts::AlphaContext::S() {
  return getToken(hosts::S, 0);
}

tree::TerminalNode* hosts::AlphaContext::T() {
  return getToken(hosts::T, 0);
}

tree::TerminalNode* hosts::AlphaContext::U() {
  return getToken(hosts::U, 0);
}

tree::TerminalNode* hosts::AlphaContext::V() {
  return getToken(hosts::V, 0);
}

tree::TerminalNode* hosts::AlphaContext::W() {
  return getToken(hosts::W, 0);
}

tree::TerminalNode* hosts::AlphaContext::X() {
  return getToken(hosts::X, 0);
}

tree::TerminalNode* hosts::AlphaContext::Y() {
  return getToken(hosts::Y, 0);
}

tree::TerminalNode* hosts::AlphaContext::Z() {
  return getToken(hosts::Z, 0);
}


size_t hosts::AlphaContext::getRuleIndex() const {
  return hosts::RuleAlpha;
}

void hosts::AlphaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlpha(this);
}

void hosts::AlphaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlpha(this);
}


antlrcpp::Any hosts::AlphaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitAlpha(this);
  else
    return visitor->visitChildren(this);
}

hosts::AlphaContext* hosts::alpha() {
  AlphaContext *_localctx = _tracker.createInstance<AlphaContext>(_ctx, getState());
  enterRule(_localctx, 34, hosts::RuleAlpha);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << hosts::A)
      | (1ULL << hosts::B)
      | (1ULL << hosts::C)
      | (1ULL << hosts::D)
      | (1ULL << hosts::E)
      | (1ULL << hosts::F)
      | (1ULL << hosts::G)
      | (1ULL << hosts::H)
      | (1ULL << hosts::I)
      | (1ULL << hosts::J)
      | (1ULL << hosts::K)
      | (1ULL << hosts::L)
      | (1ULL << hosts::M)
      | (1ULL << hosts::N)
      | (1ULL << hosts::O)
      | (1ULL << hosts::P)
      | (1ULL << hosts::Q)
      | (1ULL << hosts::R)
      | (1ULL << hosts::S)
      | (1ULL << hosts::T)
      | (1ULL << hosts::U)
      | (1ULL << hosts::V)
      | (1ULL << hosts::W)
      | (1ULL << hosts::X)
      | (1ULL << hosts::Y)
      | (1ULL << hosts::Z))) != 0))) {
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

//----------------- CommentContext ------------------------------------------------------------------

hosts::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hosts::CommentContext::SHARP() {
  return getToken(hosts::SHARP, 0);
}

std::vector<tree::TerminalNode *> hosts::CommentContext::Space() {
  return getTokens(hosts::Space);
}

tree::TerminalNode* hosts::CommentContext::Space(size_t i) {
  return getToken(hosts::Space, i);
}

std::vector<tree::TerminalNode *> hosts::CommentContext::NewLine() {
  return getTokens(hosts::NewLine);
}

tree::TerminalNode* hosts::CommentContext::NewLine(size_t i) {
  return getToken(hosts::NewLine, i);
}


size_t hosts::CommentContext::getRuleIndex() const {
  return hosts::RuleComment;
}

void hosts::CommentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComment(this);
}

void hosts::CommentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComment(this);
}


antlrcpp::Any hosts::CommentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitComment(this);
  else
    return visitor->visitChildren(this);
}

hosts::CommentContext* hosts::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 36, hosts::RuleComment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(381);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hosts::Space) {
      setState(378);
      match(hosts::Space);
      setState(383);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(384);
    match(hosts::SHARP);
    setState(388);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << hosts::Space)
      | (1ULL << hosts::UCSCHAR)
      | (1ULL << hosts::D0)
      | (1ULL << hosts::D1)
      | (1ULL << hosts::D2)
      | (1ULL << hosts::D3)
      | (1ULL << hosts::D4)
      | (1ULL << hosts::D5)
      | (1ULL << hosts::D6)
      | (1ULL << hosts::D7)
      | (1ULL << hosts::D8)
      | (1ULL << hosts::D9)
      | (1ULL << hosts::A)
      | (1ULL << hosts::B)
      | (1ULL << hosts::C)
      | (1ULL << hosts::D)
      | (1ULL << hosts::E)
      | (1ULL << hosts::F)
      | (1ULL << hosts::G)
      | (1ULL << hosts::H)
      | (1ULL << hosts::I)
      | (1ULL << hosts::J)
      | (1ULL << hosts::K)
      | (1ULL << hosts::L)
      | (1ULL << hosts::M)
      | (1ULL << hosts::N)
      | (1ULL << hosts::O)
      | (1ULL << hosts::P)
      | (1ULL << hosts::Q)
      | (1ULL << hosts::R)
      | (1ULL << hosts::S)
      | (1ULL << hosts::T)
      | (1ULL << hosts::U)
      | (1ULL << hosts::V)
      | (1ULL << hosts::W)
      | (1ULL << hosts::X)
      | (1ULL << hosts::Y)
      | (1ULL << hosts::Z)
      | (1ULL << hosts::COLON)
      | (1ULL << hosts::DCOLON)
      | (1ULL << hosts::DASH)
      | (1ULL << hosts::DOT)
      | (1ULL << hosts::UNDERSCORE)
      | (1ULL << hosts::TILDE)
      | (1ULL << hosts::SHARP))) != 0)) {
      setState(385);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == hosts::NewLine)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(390);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Command_lineContext ------------------------------------------------------------------

hosts::Command_lineContext::Command_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hosts::Command_lineContext::EOF() {
  return getToken(hosts::EOF, 0);
}

hosts::List_commandContext* hosts::Command_lineContext::list_command() {
  return getRuleContext<hosts::List_commandContext>(0);
}

hosts::Purge_commandContext* hosts::Command_lineContext::purge_command() {
  return getRuleContext<hosts::Purge_commandContext>(0);
}

hosts::Set_commandContext* hosts::Command_lineContext::set_command() {
  return getRuleContext<hosts::Set_commandContext>(0);
}

hosts::Get_commandContext* hosts::Command_lineContext::get_command() {
  return getRuleContext<hosts::Get_commandContext>(0);
}

hosts::Rm_commandContext* hosts::Command_lineContext::rm_command() {
  return getRuleContext<hosts::Rm_commandContext>(0);
}


size_t hosts::Command_lineContext::getRuleIndex() const {
  return hosts::RuleCommand_line;
}

void hosts::Command_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand_line(this);
}

void hosts::Command_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand_line(this);
}


antlrcpp::Any hosts::Command_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitCommand_line(this);
  else
    return visitor->visitChildren(this);
}

hosts::Command_lineContext* hosts::command_line() {
  Command_lineContext *_localctx = _tracker.createInstance<Command_lineContext>(_ctx, getState());
  enterRule(_localctx, 38, hosts::RuleCommand_line);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(396);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hosts::L: {
        setState(391);
        list_command();
        break;
      }

      case hosts::P: {
        setState(392);
        purge_command();
        break;
      }

      case hosts::S: {
        setState(393);
        set_command();
        break;
      }

      case hosts::G: {
        setState(394);
        get_command();
        break;
      }

      case hosts::R: {
        setState(395);
        rm_command();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(398);
    match(hosts::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_commandContext ------------------------------------------------------------------

hosts::List_commandContext::List_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hosts::Cmd_listContext* hosts::List_commandContext::cmd_list() {
  return getRuleContext<hosts::Cmd_listContext>(0);
}


size_t hosts::List_commandContext::getRuleIndex() const {
  return hosts::RuleList_command;
}

void hosts::List_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_command(this);
}

void hosts::List_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_command(this);
}


antlrcpp::Any hosts::List_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitList_command(this);
  else
    return visitor->visitChildren(this);
}

hosts::List_commandContext* hosts::list_command() {
  List_commandContext *_localctx = _tracker.createInstance<List_commandContext>(_ctx, getState());
  enterRule(_localctx, 40, hosts::RuleList_command);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(400);
    cmd_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_commandContext ------------------------------------------------------------------

hosts::Set_commandContext::Set_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hosts::Cmd_setContext* hosts::Set_commandContext::cmd_set() {
  return getRuleContext<hosts::Cmd_setContext>(0);
}

hosts::AddressContext* hosts::Set_commandContext::address() {
  return getRuleContext<hosts::AddressContext>(0);
}

std::vector<tree::TerminalNode *> hosts::Set_commandContext::Space() {
  return getTokens(hosts::Space);
}

tree::TerminalNode* hosts::Set_commandContext::Space(size_t i) {
  return getToken(hosts::Space, i);
}

std::vector<hosts::Host_nameContext *> hosts::Set_commandContext::host_name() {
  return getRuleContexts<hosts::Host_nameContext>();
}

hosts::Host_nameContext* hosts::Set_commandContext::host_name(size_t i) {
  return getRuleContext<hosts::Host_nameContext>(i);
}


size_t hosts::Set_commandContext::getRuleIndex() const {
  return hosts::RuleSet_command;
}

void hosts::Set_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet_command(this);
}

void hosts::Set_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet_command(this);
}


antlrcpp::Any hosts::Set_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitSet_command(this);
  else
    return visitor->visitChildren(this);
}

hosts::Set_commandContext* hosts::set_command() {
  Set_commandContext *_localctx = _tracker.createInstance<Set_commandContext>(_ctx, getState());
  enterRule(_localctx, 42, hosts::RuleSet_command);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(402);
    cmd_set();
    setState(404); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(403);
      match(hosts::Space);
      setState(406); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hosts::Space);

    setState(408);
    address();
    setState(415); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(410); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(409);
        match(hosts::Space);
        setState(412); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == hosts::Space);

      setState(414);
      host_name();
      setState(417); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hosts::Space);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Get_commandContext ------------------------------------------------------------------

hosts::Get_commandContext::Get_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hosts::Cmd_getContext* hosts::Get_commandContext::cmd_get() {
  return getRuleContext<hosts::Cmd_getContext>(0);
}

hosts::AddressContext* hosts::Get_commandContext::address() {
  return getRuleContext<hosts::AddressContext>(0);
}

std::vector<tree::TerminalNode *> hosts::Get_commandContext::Space() {
  return getTokens(hosts::Space);
}

tree::TerminalNode* hosts::Get_commandContext::Space(size_t i) {
  return getToken(hosts::Space, i);
}


size_t hosts::Get_commandContext::getRuleIndex() const {
  return hosts::RuleGet_command;
}

void hosts::Get_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGet_command(this);
}

void hosts::Get_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGet_command(this);
}


antlrcpp::Any hosts::Get_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitGet_command(this);
  else
    return visitor->visitChildren(this);
}

hosts::Get_commandContext* hosts::get_command() {
  Get_commandContext *_localctx = _tracker.createInstance<Get_commandContext>(_ctx, getState());
  enterRule(_localctx, 44, hosts::RuleGet_command);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
    cmd_get();
    setState(421); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(420);
      match(hosts::Space);
      setState(423); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hosts::Space);

    setState(425);
    address();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Purge_commandContext ------------------------------------------------------------------

hosts::Purge_commandContext::Purge_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hosts::Cmd_purgeContext* hosts::Purge_commandContext::cmd_purge() {
  return getRuleContext<hosts::Cmd_purgeContext>(0);
}

std::vector<hosts::AddressContext *> hosts::Purge_commandContext::address() {
  return getRuleContexts<hosts::AddressContext>();
}

hosts::AddressContext* hosts::Purge_commandContext::address(size_t i) {
  return getRuleContext<hosts::AddressContext>(i);
}

std::vector<hosts::Host_nameContext *> hosts::Purge_commandContext::host_name() {
  return getRuleContexts<hosts::Host_nameContext>();
}

hosts::Host_nameContext* hosts::Purge_commandContext::host_name(size_t i) {
  return getRuleContext<hosts::Host_nameContext>(i);
}

std::vector<tree::TerminalNode *> hosts::Purge_commandContext::Space() {
  return getTokens(hosts::Space);
}

tree::TerminalNode* hosts::Purge_commandContext::Space(size_t i) {
  return getToken(hosts::Space, i);
}


size_t hosts::Purge_commandContext::getRuleIndex() const {
  return hosts::RulePurge_command;
}

void hosts::Purge_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPurge_command(this);
}

void hosts::Purge_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPurge_command(this);
}


antlrcpp::Any hosts::Purge_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitPurge_command(this);
  else
    return visitor->visitChildren(this);
}

hosts::Purge_commandContext* hosts::purge_command() {
  Purge_commandContext *_localctx = _tracker.createInstance<Purge_commandContext>(_ctx, getState());
  enterRule(_localctx, 46, hosts::RulePurge_command);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(427);
    cmd_purge();
    setState(437); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(429); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(428);
        match(hosts::Space);
        setState(431); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == hosts::Space);
      setState(435);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
      case 1: {
        setState(433);
        address();
        break;
      }

      case 2: {
        setState(434);
        host_name();
        break;
      }

      }
      setState(439); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hosts::Space);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rm_commandContext ------------------------------------------------------------------

hosts::Rm_commandContext::Rm_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hosts::Cmd_rmContext* hosts::Rm_commandContext::cmd_rm() {
  return getRuleContext<hosts::Cmd_rmContext>(0);
}

hosts::AddressContext* hosts::Rm_commandContext::address() {
  return getRuleContext<hosts::AddressContext>(0);
}

std::vector<tree::TerminalNode *> hosts::Rm_commandContext::Space() {
  return getTokens(hosts::Space);
}

tree::TerminalNode* hosts::Rm_commandContext::Space(size_t i) {
  return getToken(hosts::Space, i);
}

std::vector<hosts::Host_nameContext *> hosts::Rm_commandContext::host_name() {
  return getRuleContexts<hosts::Host_nameContext>();
}

hosts::Host_nameContext* hosts::Rm_commandContext::host_name(size_t i) {
  return getRuleContext<hosts::Host_nameContext>(i);
}


size_t hosts::Rm_commandContext::getRuleIndex() const {
  return hosts::RuleRm_command;
}

void hosts::Rm_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRm_command(this);
}

void hosts::Rm_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRm_command(this);
}


antlrcpp::Any hosts::Rm_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitRm_command(this);
  else
    return visitor->visitChildren(this);
}

hosts::Rm_commandContext* hosts::rm_command() {
  Rm_commandContext *_localctx = _tracker.createInstance<Rm_commandContext>(_ctx, getState());
  enterRule(_localctx, 48, hosts::RuleRm_command);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
    cmd_rm();
    setState(443); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(442);
      match(hosts::Space);
      setState(445); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hosts::Space);
    setState(447);
    address();
    setState(454); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(449); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(448);
        match(hosts::Space);
        setState(451); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == hosts::Space);

      setState(453);
      host_name();
      setState(456); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hosts::Space);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cmd_listContext ------------------------------------------------------------------

hosts::Cmd_listContext::Cmd_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hosts::Cmd_listContext::L() {
  return getToken(hosts::L, 0);
}

tree::TerminalNode* hosts::Cmd_listContext::I() {
  return getToken(hosts::I, 0);
}

tree::TerminalNode* hosts::Cmd_listContext::S() {
  return getToken(hosts::S, 0);
}

tree::TerminalNode* hosts::Cmd_listContext::T() {
  return getToken(hosts::T, 0);
}


size_t hosts::Cmd_listContext::getRuleIndex() const {
  return hosts::RuleCmd_list;
}

void hosts::Cmd_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCmd_list(this);
}

void hosts::Cmd_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCmd_list(this);
}


antlrcpp::Any hosts::Cmd_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitCmd_list(this);
  else
    return visitor->visitChildren(this);
}

hosts::Cmd_listContext* hosts::cmd_list() {
  Cmd_listContext *_localctx = _tracker.createInstance<Cmd_listContext>(_ctx, getState());
  enterRule(_localctx, 50, hosts::RuleCmd_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(458);
    match(hosts::L);
    setState(459);
    match(hosts::I);
    setState(460);
    match(hosts::S);
    setState(461);
    match(hosts::T);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cmd_purgeContext ------------------------------------------------------------------

hosts::Cmd_purgeContext::Cmd_purgeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hosts::Cmd_purgeContext::P() {
  return getToken(hosts::P, 0);
}

tree::TerminalNode* hosts::Cmd_purgeContext::U() {
  return getToken(hosts::U, 0);
}

tree::TerminalNode* hosts::Cmd_purgeContext::R() {
  return getToken(hosts::R, 0);
}

tree::TerminalNode* hosts::Cmd_purgeContext::G() {
  return getToken(hosts::G, 0);
}

tree::TerminalNode* hosts::Cmd_purgeContext::E() {
  return getToken(hosts::E, 0);
}


size_t hosts::Cmd_purgeContext::getRuleIndex() const {
  return hosts::RuleCmd_purge;
}

void hosts::Cmd_purgeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCmd_purge(this);
}

void hosts::Cmd_purgeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCmd_purge(this);
}


antlrcpp::Any hosts::Cmd_purgeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitCmd_purge(this);
  else
    return visitor->visitChildren(this);
}

hosts::Cmd_purgeContext* hosts::cmd_purge() {
  Cmd_purgeContext *_localctx = _tracker.createInstance<Cmd_purgeContext>(_ctx, getState());
  enterRule(_localctx, 52, hosts::RuleCmd_purge);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(463);
    match(hosts::P);
    setState(464);
    match(hosts::U);
    setState(465);
    match(hosts::R);
    setState(466);
    match(hosts::G);
    setState(467);
    match(hosts::E);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cmd_rmContext ------------------------------------------------------------------

hosts::Cmd_rmContext::Cmd_rmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hosts::Cmd_rmContext::R() {
  return getToken(hosts::R, 0);
}

tree::TerminalNode* hosts::Cmd_rmContext::M() {
  return getToken(hosts::M, 0);
}


size_t hosts::Cmd_rmContext::getRuleIndex() const {
  return hosts::RuleCmd_rm;
}

void hosts::Cmd_rmContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCmd_rm(this);
}

void hosts::Cmd_rmContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCmd_rm(this);
}


antlrcpp::Any hosts::Cmd_rmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitCmd_rm(this);
  else
    return visitor->visitChildren(this);
}

hosts::Cmd_rmContext* hosts::cmd_rm() {
  Cmd_rmContext *_localctx = _tracker.createInstance<Cmd_rmContext>(_ctx, getState());
  enterRule(_localctx, 54, hosts::RuleCmd_rm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    match(hosts::R);
    setState(470);
    match(hosts::M);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cmd_setContext ------------------------------------------------------------------

hosts::Cmd_setContext::Cmd_setContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hosts::Cmd_setContext::S() {
  return getToken(hosts::S, 0);
}

tree::TerminalNode* hosts::Cmd_setContext::E() {
  return getToken(hosts::E, 0);
}

tree::TerminalNode* hosts::Cmd_setContext::T() {
  return getToken(hosts::T, 0);
}


size_t hosts::Cmd_setContext::getRuleIndex() const {
  return hosts::RuleCmd_set;
}

void hosts::Cmd_setContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCmd_set(this);
}

void hosts::Cmd_setContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCmd_set(this);
}


antlrcpp::Any hosts::Cmd_setContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitCmd_set(this);
  else
    return visitor->visitChildren(this);
}

hosts::Cmd_setContext* hosts::cmd_set() {
  Cmd_setContext *_localctx = _tracker.createInstance<Cmd_setContext>(_ctx, getState());
  enterRule(_localctx, 56, hosts::RuleCmd_set);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(472);
    match(hosts::S);
    setState(473);
    match(hosts::E);
    setState(474);
    match(hosts::T);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cmd_getContext ------------------------------------------------------------------

hosts::Cmd_getContext::Cmd_getContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hosts::Cmd_getContext::G() {
  return getToken(hosts::G, 0);
}

tree::TerminalNode* hosts::Cmd_getContext::E() {
  return getToken(hosts::E, 0);
}

tree::TerminalNode* hosts::Cmd_getContext::T() {
  return getToken(hosts::T, 0);
}


size_t hosts::Cmd_getContext::getRuleIndex() const {
  return hosts::RuleCmd_get;
}

void hosts::Cmd_getContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCmd_get(this);
}

void hosts::Cmd_getContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCmd_get(this);
}


antlrcpp::Any hosts::Cmd_getContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitCmd_get(this);
  else
    return visitor->visitChildren(this);
}

hosts::Cmd_getContext* hosts::cmd_get() {
  Cmd_getContext *_localctx = _tracker.createInstance<Cmd_getContext>(_ctx, getState());
  enterRule(_localctx, 58, hosts::RuleCmd_get);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(476);
    match(hosts::G);
    setState(477);
    match(hosts::E);
    setState(478);
    match(hosts::T);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> hosts::_decisionToDFA;
atn::PredictionContextCache hosts::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN hosts::_atn;
std::vector<uint16_t> hosts::_serializedATN;

std::vector<std::string> hosts::_ruleNames = {
  "hosts_file", "line", "comment_line", "empty_line", "table_entry", "address", 
  "ip_v4_address", "ip_v6_address", "h16", "ls32", "hexdig", "dec_octet", 
  "digit", "non_zero_digit", "host_name", "ireg_name", "iunreserved", "alpha", 
  "comment", "command_line", "list_command", "set_command", "get_command", 
  "purge_command", "rm_command", "cmd_list", "cmd_purge", "cmd_rm", "cmd_set", 
  "cmd_get"
};

std::vector<std::string> hosts::_literalNames = {
  "", "", "", "", "'0'", "'1'", "'2'", "'3'", "'4'", "'5'", "'6'", "'7'", 
  "'8'", "'9'", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "':'", "'::'", "'-'", 
  "'.'", "'_'", "'~'", "'#'"
};

std::vector<std::string> hosts::_symbolicNames = {
  "", "NewLine", "Space", "UCSCHAR", "D0", "D1", "D2", "D3", "D4", "D5", 
  "D6", "D7", "D8", "D9", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", 
  "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", 
  "Y", "Z", "COLON", "DCOLON", "DASH", "DOT", "UNDERSCORE", "TILDE", "SHARP"
};

dfa::Vocabulary hosts::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> hosts::_tokenNames;

hosts::Initializer::Initializer() {
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
    0x3, 0x30, 0x1e3, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x3, 0x2, 0x7, 0x2, 0x40, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x43, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x4a, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x7, 0x5, 0x51, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x54, 0xb, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x6, 0x6, 0x58, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x59, 0x3, 
    0x6, 0x3, 0x6, 0x6, 0x6, 0x5e, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x5f, 0x3, 
    0x6, 0x7, 0x6, 0x63, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x66, 0xb, 0x6, 0x3, 
    0x6, 0x7, 0x6, 0x69, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x6c, 0xb, 0x6, 0x3, 
    0x6, 0x5, 0x6, 0x6f, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x73, 0xa, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0x99, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xa9, 0xa, 0x9, 0x3, 
    0x9, 0x5, 0x9, 0xac, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x5, 0x9, 0xba, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0xbf, 0xa, 0x9, 0x3, 0x9, 0x5, 0x9, 0xc2, 0xa, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0xce, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x5, 0x9, 0xd3, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xd8, 
    0xa, 0x9, 0x3, 0x9, 0x5, 0x9, 0xdb, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xe5, 
    0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xea, 0xa, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xef, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x5, 0x9, 0xf4, 0xa, 0x9, 0x3, 0x9, 0x5, 0x9, 0xf7, 0xa, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xfe, 0xa, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x103, 0xa, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x108, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x5, 0x9, 0x10d, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 
    0x112, 0xa, 0x9, 0x3, 0x9, 0x5, 0x9, 0x115, 0xa, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x11c, 0xa, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x121, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x5, 0x9, 0x126, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 
    0x12b, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x130, 0xa, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x135, 0xa, 0x9, 0x3, 0x9, 
    0x5, 0x9, 0x138, 0xa, 0x9, 0x3, 0x9, 0x5, 0x9, 0x13b, 0xa, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x14a, 
    0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 
    0x151, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x155, 0xa, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 
    0xd, 0x165, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x169, 0xa, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x7, 
    0x11, 0x171, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x174, 0xb, 0x11, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x179, 0xa, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x7, 0x14, 0x17e, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 
    0x181, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x185, 0xa, 0x14, 
    0xc, 0x14, 0xe, 0x14, 0x188, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x18f, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x6, 0x17, 0x197, 0xa, 0x17, 
    0xd, 0x17, 0xe, 0x17, 0x198, 0x3, 0x17, 0x3, 0x17, 0x6, 0x17, 0x19d, 
    0xa, 0x17, 0xd, 0x17, 0xe, 0x17, 0x19e, 0x3, 0x17, 0x6, 0x17, 0x1a2, 
    0xa, 0x17, 0xd, 0x17, 0xe, 0x17, 0x1a3, 0x3, 0x18, 0x3, 0x18, 0x6, 0x18, 
    0x1a8, 0xa, 0x18, 0xd, 0x18, 0xe, 0x18, 0x1a9, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x19, 0x3, 0x19, 0x6, 0x19, 0x1b0, 0xa, 0x19, 0xd, 0x19, 0xe, 0x19, 
    0x1b1, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x1b6, 0xa, 0x19, 0x6, 0x19, 
    0x1b8, 0xa, 0x19, 0xd, 0x19, 0xe, 0x19, 0x1b9, 0x3, 0x1a, 0x3, 0x1a, 
    0x6, 0x1a, 0x1be, 0xa, 0x1a, 0xd, 0x1a, 0xe, 0x1a, 0x1bf, 0x3, 0x1a, 
    0x3, 0x1a, 0x6, 0x1a, 0x1c4, 0xa, 0x1a, 0xd, 0x1a, 0xe, 0x1a, 0x1c5, 
    0x3, 0x1a, 0x6, 0x1a, 0x1c9, 0xa, 0x1a, 0xd, 0x1a, 0xe, 0x1a, 0x1ca, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x2, 0x2, 0x20, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x2, 0x9, 0x3, 0x2, 0x10, 0x15, 0x3, 0x2, 0x6, 0xa, 
    0x3, 0x2, 0x6, 0xb, 0x3, 0x2, 0x7, 0xf, 0x4, 0x2, 0x5, 0x5, 0x2c, 0x2f, 
    0x3, 0x2, 0x10, 0x29, 0x3, 0x2, 0x3, 0x3, 0x2, 0x20f, 0x2, 0x41, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x49, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x52, 0x3, 0x2, 0x2, 0x2, 0xa, 0x55, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x72, 0x3, 0x2, 0x2, 0x2, 0xe, 0x74, 0x3, 0x2, 0x2, 0x2, 0x10, 0x13a, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14, 0x150, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x154, 0x3, 0x2, 0x2, 0x2, 0x18, 0x164, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x168, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x16a, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x20, 0x16e, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x178, 0x3, 0x2, 0x2, 0x2, 0x24, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x17f, 0x3, 0x2, 0x2, 0x2, 0x28, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x192, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x194, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1a5, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1bb, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1d1, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1da, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 0x5, 0x4, 0x3, 0x2, 0x3f, 
    0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x43, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x3, 
    0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0x2, 
    0x2, 0x3, 0x45, 0x3, 0x3, 0x2, 0x2, 0x2, 0x46, 0x4a, 0x5, 0x6, 0x4, 
    0x2, 0x47, 0x4a, 0x5, 0xa, 0x6, 0x2, 0x48, 0x4a, 0x5, 0x8, 0x5, 0x2, 
    0x49, 0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 
    0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 
    0x7, 0x3, 0x2, 0x2, 0x4c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x5, 
    0x26, 0x14, 0x2, 0x4e, 0x7, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x51, 0x7, 0x4, 
    0x2, 0x2, 0x50, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x54, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x53, 0x9, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x55, 
    0x57, 0x5, 0xc, 0x7, 0x2, 0x56, 0x58, 0x7, 0x4, 0x2, 0x2, 0x57, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x5b, 0x64, 0x5, 0x1e, 0x10, 0x2, 0x5c, 0x5e, 0x7, 0x4, 0x2, 
    0x2, 0x5d, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 0x60, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x63, 0x5, 0x1e, 0x10, 0x2, 0x62, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0x63, 0x66, 0x3, 0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 
    0x2, 0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 0x6a, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 0x69, 0x7, 0x4, 0x2, 
    0x2, 0x68, 0x67, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6c, 0x3, 0x2, 0x2, 0x2, 
    0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6f, 
    0x5, 0x26, 0x14, 0x2, 0x6e, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x6f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x70, 0x73, 0x5, 0xe, 
    0x8, 0x2, 0x71, 0x73, 0x5, 0x10, 0x9, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x75, 0x5, 0x18, 0xd, 0x2, 0x75, 0x76, 0x7, 0x2d, 0x2, 0x2, 0x76, 
    0x77, 0x5, 0x18, 0xd, 0x2, 0x77, 0x78, 0x7, 0x2d, 0x2, 0x2, 0x78, 0x79, 
    0x5, 0x18, 0xd, 0x2, 0x79, 0x7a, 0x7, 0x2d, 0x2, 0x2, 0x7a, 0x7b, 0x5, 
    0x18, 0xd, 0x2, 0x7b, 0xf, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x5, 0x12, 
    0xa, 0x2, 0x7d, 0x7e, 0x7, 0x2a, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x12, 0xa, 
    0x2, 0x7f, 0x80, 0x7, 0x2a, 0x2, 0x2, 0x80, 0x81, 0x5, 0x12, 0xa, 0x2, 
    0x81, 0x82, 0x7, 0x2a, 0x2, 0x2, 0x82, 0x83, 0x5, 0x12, 0xa, 0x2, 0x83, 
    0x84, 0x7, 0x2a, 0x2, 0x2, 0x84, 0x85, 0x5, 0x12, 0xa, 0x2, 0x85, 0x86, 
    0x7, 0x2a, 0x2, 0x2, 0x86, 0x87, 0x5, 0x12, 0xa, 0x2, 0x87, 0x88, 0x7, 
    0x2a, 0x2, 0x2, 0x88, 0x89, 0x5, 0x14, 0xb, 0x2, 0x89, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x8b, 0x7, 0x2b, 0x2, 0x2, 0x8b, 0x8c, 0x5, 0x12, 0xa, 
    0x2, 0x8c, 0x8d, 0x7, 0x2a, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0x12, 0xa, 0x2, 
    0x8e, 0x8f, 0x7, 0x2a, 0x2, 0x2, 0x8f, 0x90, 0x5, 0x12, 0xa, 0x2, 0x90, 
    0x91, 0x7, 0x2a, 0x2, 0x2, 0x91, 0x92, 0x5, 0x12, 0xa, 0x2, 0x92, 0x93, 
    0x7, 0x2a, 0x2, 0x2, 0x93, 0x94, 0x5, 0x12, 0xa, 0x2, 0x94, 0x95, 0x7, 
    0x2a, 0x2, 0x2, 0x95, 0x96, 0x5, 0x14, 0xb, 0x2, 0x96, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x97, 0x99, 0x5, 0x12, 0xa, 0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x9b, 0x7, 0x2b, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0x12, 0xa, 0x2, 0x9c, 
    0x9d, 0x7, 0x2a, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x12, 0xa, 0x2, 0x9e, 0x9f, 
    0x7, 0x2a, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0x12, 0xa, 0x2, 0xa0, 0xa1, 0x7, 
    0x2a, 0x2, 0x2, 0xa1, 0xa2, 0x5, 0x12, 0xa, 0x2, 0xa2, 0xa3, 0x7, 0x2a, 
    0x2, 0x2, 0xa3, 0xa4, 0x5, 0x14, 0xb, 0x2, 0xa4, 0x13b, 0x3, 0x2, 0x2, 
    0x2, 0xa5, 0xa6, 0x5, 0x12, 0xa, 0x2, 0xa6, 0xa7, 0x7, 0x2a, 0x2, 0x2, 
    0xa7, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa8, 
    0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xac, 
    0x5, 0x12, 0xa, 0x2, 0xab, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x7, 0x2b, 
    0x2, 0x2, 0xae, 0xaf, 0x5, 0x12, 0xa, 0x2, 0xaf, 0xb0, 0x7, 0x2a, 0x2, 
    0x2, 0xb0, 0xb1, 0x5, 0x12, 0xa, 0x2, 0xb1, 0xb2, 0x7, 0x2a, 0x2, 0x2, 
    0xb2, 0xb3, 0x5, 0x12, 0xa, 0x2, 0xb3, 0xb4, 0x7, 0x2a, 0x2, 0x2, 0xb4, 
    0xb5, 0x5, 0x14, 0xb, 0x2, 0xb5, 0x13b, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 
    0x5, 0x12, 0xa, 0x2, 0xb7, 0xb8, 0x7, 0x2a, 0x2, 0x2, 0xb8, 0xba, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 
    0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x5, 0x12, 0xa, 
    0x2, 0xbc, 0xbd, 0x7, 0x2a, 0x2, 0x2, 0xbd, 0xbf, 0x3, 0x2, 0x2, 0x2, 
    0xbe, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 
    0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc2, 0x5, 0x12, 0xa, 0x2, 0xc1, 0xbe, 
    0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 
    0x2, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x2b, 0x2, 0x2, 0xc4, 0xc5, 0x5, 0x12, 
    0xa, 0x2, 0xc5, 0xc6, 0x7, 0x2a, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0x12, 0xa, 
    0x2, 0xc7, 0xc8, 0x7, 0x2a, 0x2, 0x2, 0xc8, 0xc9, 0x5, 0x14, 0xb, 0x2, 
    0xc9, 0x13b, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x5, 0x12, 0xa, 0x2, 0xcb, 
    0xcc, 0x7, 0x2a, 0x2, 0x2, 0xcc, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xca, 
    0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 
    0x2, 0x2, 0x2, 0xcf, 0xd0, 0x5, 0x12, 0xa, 0x2, 0xd0, 0xd1, 0x7, 0x2a, 
    0x2, 0x2, 0xd1, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xcd, 0x3, 0x2, 0x2, 
    0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0xd4, 0xd5, 0x5, 0x12, 0xa, 0x2, 0xd5, 0xd6, 0x7, 0x2a, 0x2, 0x2, 0xd6, 
    0xd8, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 
    0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdb, 0x5, 
    0x12, 0xa, 0x2, 0xda, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x2b, 0x2, 
    0x2, 0xdd, 0xde, 0x5, 0x12, 0xa, 0x2, 0xde, 0xdf, 0x7, 0x2a, 0x2, 0x2, 
    0xdf, 0xe0, 0x5, 0x14, 0xb, 0x2, 0xe0, 0x13b, 0x3, 0x2, 0x2, 0x2, 0xe1, 
    0xe2, 0x5, 0x12, 0xa, 0x2, 0xe2, 0xe3, 0x7, 0x2a, 0x2, 0x2, 0xe3, 0xe5, 
    0x3, 0x2, 0x2, 0x2, 0xe4, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x3, 
    0x2, 0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x5, 0x12, 
    0xa, 0x2, 0xe7, 0xe8, 0x7, 0x2a, 0x2, 0x2, 0xe8, 0xea, 0x3, 0x2, 0x2, 
    0x2, 0xe9, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x3, 0x2, 0x2, 0x2, 
    0xea, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x5, 0x12, 0xa, 0x2, 0xec, 
    0xed, 0x7, 0x2a, 0x2, 0x2, 0xed, 0xef, 0x3, 0x2, 0x2, 0x2, 0xee, 0xe9, 
    0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 
    0x2, 0x2, 0x2, 0xf0, 0xf1, 0x5, 0x12, 0xa, 0x2, 0xf1, 0xf2, 0x7, 0x2a, 
    0x2, 0x2, 0xf2, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xee, 0x3, 0x2, 0x2, 
    0x2, 0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 0x2, 
    0xf5, 0xf7, 0x5, 0x12, 0xa, 0x2, 0xf6, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf6, 
    0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 
    0x7, 0x2b, 0x2, 0x2, 0xf9, 0x13b, 0x5, 0x14, 0xb, 0x2, 0xfa, 0xfb, 0x5, 
    0x12, 0xa, 0x2, 0xfb, 0xfc, 0x7, 0x2a, 0x2, 0x2, 0xfc, 0xfe, 0x3, 0x2, 
    0x2, 0x2, 0xfd, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 
    0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x5, 0x12, 0xa, 0x2, 
    0x100, 0x101, 0x7, 0x2a, 0x2, 0x2, 0x101, 0x103, 0x3, 0x2, 0x2, 0x2, 
    0x102, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 
    0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x5, 0x12, 0xa, 0x2, 0x105, 
    0x106, 0x7, 0x2a, 0x2, 0x2, 0x106, 0x108, 0x3, 0x2, 0x2, 0x2, 0x107, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 0x108, 
    0x109, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x12, 0xa, 0x2, 0x10a, 
    0x10b, 0x7, 0x2a, 0x2, 0x2, 0x10b, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10c, 
    0x107, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10d, 
    0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x5, 0x12, 0xa, 0x2, 0x10f, 
    0x110, 0x7, 0x2a, 0x2, 0x2, 0x110, 0x112, 0x3, 0x2, 0x2, 0x2, 0x111, 
    0x10c, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0x113, 0x3, 0x2, 0x2, 0x2, 0x113, 0x115, 0x5, 0x12, 0xa, 0x2, 0x114, 
    0x111, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x3, 0x2, 0x2, 0x2, 0x115, 
    0x116, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x7, 0x2b, 0x2, 0x2, 0x117, 
    0x13b, 0x5, 0x12, 0xa, 0x2, 0x118, 0x119, 0x5, 0x12, 0xa, 0x2, 0x119, 
    0x11a, 0x7, 0x2a, 0x2, 0x2, 0x11a, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11b, 
    0x118, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11c, 
    0x11d, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x5, 0x12, 0xa, 0x2, 0x11e, 
    0x11f, 0x7, 0x2a, 0x2, 0x2, 0x11f, 0x121, 0x3, 0x2, 0x2, 0x2, 0x120, 
    0x11b, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 
    0x122, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x5, 0x12, 0xa, 0x2, 0x123, 
    0x124, 0x7, 0x2a, 0x2, 0x2, 0x124, 0x126, 0x3, 0x2, 0x2, 0x2, 0x125, 
    0x120, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 
    0x127, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x5, 0x12, 0xa, 0x2, 0x128, 
    0x129, 0x7, 0x2a, 0x2, 0x2, 0x129, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12a, 
    0x125, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12b, 
    0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x5, 0x12, 0xa, 0x2, 0x12d, 
    0x12e, 0x7, 0x2a, 0x2, 0x2, 0x12e, 0x130, 0x3, 0x2, 0x2, 0x2, 0x12f, 
    0x12a, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x3, 0x2, 0x2, 0x2, 0x130, 
    0x131, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x5, 0x12, 0xa, 0x2, 0x132, 
    0x133, 0x7, 0x2a, 0x2, 0x2, 0x133, 0x135, 0x3, 0x2, 0x2, 0x2, 0x134, 
    0x12f, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x3, 0x2, 0x2, 0x2, 0x135, 
    0x136, 0x3, 0x2, 0x2, 0x2, 0x136, 0x138, 0x5, 0x12, 0xa, 0x2, 0x137, 
    0x134, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x139, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13b, 0x7, 0x2b, 0x2, 0x2, 0x13a, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x98, 
    0x3, 0x2, 0x2, 0x2, 0x13a, 0xab, 0x3, 0x2, 0x2, 0x2, 0x13a, 0xc1, 0x3, 
    0x2, 0x2, 0x2, 0x13a, 0xda, 0x3, 0x2, 0x2, 0x2, 0x13a, 0xf6, 0x3, 0x2, 
    0x2, 0x2, 0x13a, 0x114, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x137, 0x3, 0x2, 
    0x2, 0x2, 0x13b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x5, 0x16, 
    0xc, 0x2, 0x13d, 0x13e, 0x5, 0x16, 0xc, 0x2, 0x13e, 0x13f, 0x5, 0x16, 
    0xc, 0x2, 0x13f, 0x140, 0x5, 0x16, 0xc, 0x2, 0x140, 0x14a, 0x3, 0x2, 
    0x2, 0x2, 0x141, 0x142, 0x5, 0x16, 0xc, 0x2, 0x142, 0x143, 0x5, 0x16, 
    0xc, 0x2, 0x143, 0x144, 0x5, 0x16, 0xc, 0x2, 0x144, 0x14a, 0x3, 0x2, 
    0x2, 0x2, 0x145, 0x146, 0x5, 0x16, 0xc, 0x2, 0x146, 0x147, 0x5, 0x16, 
    0xc, 0x2, 0x147, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x148, 0x14a, 0x5, 0x16, 
    0xc, 0x2, 0x149, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x149, 0x141, 0x3, 0x2, 
    0x2, 0x2, 0x149, 0x145, 0x3, 0x2, 0x2, 0x2, 0x149, 0x148, 0x3, 0x2, 
    0x2, 0x2, 0x14a, 0x13, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x5, 0x12, 
    0xa, 0x2, 0x14c, 0x14d, 0x7, 0x2a, 0x2, 0x2, 0x14d, 0x14e, 0x5, 0x12, 
    0xa, 0x2, 0x14e, 0x151, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x151, 0x5, 0xe, 
    0x8, 0x2, 0x150, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14f, 0x3, 0x2, 
    0x2, 0x2, 0x151, 0x15, 0x3, 0x2, 0x2, 0x2, 0x152, 0x155, 0x5, 0x1a, 
    0xe, 0x2, 0x153, 0x155, 0x9, 0x2, 0x2, 0x2, 0x154, 0x152, 0x3, 0x2, 
    0x2, 0x2, 0x154, 0x153, 0x3, 0x2, 0x2, 0x2, 0x155, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x156, 0x165, 0x5, 0x1a, 0xe, 0x2, 0x157, 0x158, 0x5, 0x1c, 0xf, 
    0x2, 0x158, 0x159, 0x5, 0x1a, 0xe, 0x2, 0x159, 0x165, 0x3, 0x2, 0x2, 
    0x2, 0x15a, 0x15b, 0x7, 0x7, 0x2, 0x2, 0x15b, 0x15c, 0x5, 0x1a, 0xe, 
    0x2, 0x15c, 0x15d, 0x5, 0x1a, 0xe, 0x2, 0x15d, 0x165, 0x3, 0x2, 0x2, 
    0x2, 0x15e, 0x15f, 0x7, 0x8, 0x2, 0x2, 0x15f, 0x160, 0x9, 0x3, 0x2, 
    0x2, 0x160, 0x165, 0x5, 0x1a, 0xe, 0x2, 0x161, 0x162, 0x7, 0x8, 0x2, 
    0x2, 0x162, 0x163, 0x7, 0xb, 0x2, 0x2, 0x163, 0x165, 0x9, 0x4, 0x2, 
    0x2, 0x164, 0x156, 0x3, 0x2, 0x2, 0x2, 0x164, 0x157, 0x3, 0x2, 0x2, 
    0x2, 0x164, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x164, 0x15e, 0x3, 0x2, 0x2, 
    0x2, 0x164, 0x161, 0x3, 0x2, 0x2, 0x2, 0x165, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x166, 0x169, 0x7, 0x6, 0x2, 0x2, 0x167, 0x169, 0x5, 0x1c, 0xf, 0x2, 
    0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x168, 0x167, 0x3, 0x2, 0x2, 0x2, 
    0x169, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x9, 0x5, 0x2, 0x2, 0x16b, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x5, 0x20, 0x11, 0x2, 0x16d, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x172, 0x5, 0x22, 0x12, 0x2, 0x16f, 
    0x171, 0x5, 0x22, 0x12, 0x2, 0x170, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x171, 
    0x174, 0x3, 0x2, 0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 0x2, 0x2, 0x172, 
    0x173, 0x3, 0x2, 0x2, 0x2, 0x173, 0x21, 0x3, 0x2, 0x2, 0x2, 0x174, 0x172, 
    0x3, 0x2, 0x2, 0x2, 0x175, 0x179, 0x5, 0x24, 0x13, 0x2, 0x176, 0x179, 
    0x5, 0x1a, 0xe, 0x2, 0x177, 0x179, 0x9, 0x6, 0x2, 0x2, 0x178, 0x175, 
    0x3, 0x2, 0x2, 0x2, 0x178, 0x176, 0x3, 0x2, 0x2, 0x2, 0x178, 0x177, 
    0x3, 0x2, 0x2, 0x2, 0x179, 0x23, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x9, 
    0x7, 0x2, 0x2, 0x17b, 0x25, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17e, 0x7, 0x4, 
    0x2, 0x2, 0x17d, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x181, 0x3, 0x2, 
    0x2, 0x2, 0x17f, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x3, 0x2, 
    0x2, 0x2, 0x180, 0x182, 0x3, 0x2, 0x2, 0x2, 0x181, 0x17f, 0x3, 0x2, 
    0x2, 0x2, 0x182, 0x186, 0x7, 0x30, 0x2, 0x2, 0x183, 0x185, 0xa, 0x8, 
    0x2, 0x2, 0x184, 0x183, 0x3, 0x2, 0x2, 0x2, 0x185, 0x188, 0x3, 0x2, 
    0x2, 0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x3, 0x2, 
    0x2, 0x2, 0x187, 0x27, 0x3, 0x2, 0x2, 0x2, 0x188, 0x186, 0x3, 0x2, 0x2, 
    0x2, 0x189, 0x18f, 0x5, 0x2a, 0x16, 0x2, 0x18a, 0x18f, 0x5, 0x30, 0x19, 
    0x2, 0x18b, 0x18f, 0x5, 0x2c, 0x17, 0x2, 0x18c, 0x18f, 0x5, 0x2e, 0x18, 
    0x2, 0x18d, 0x18f, 0x5, 0x32, 0x1a, 0x2, 0x18e, 0x189, 0x3, 0x2, 0x2, 
    0x2, 0x18e, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18b, 0x3, 0x2, 0x2, 
    0x2, 0x18e, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18d, 0x3, 0x2, 0x2, 
    0x2, 0x18f, 0x190, 0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x7, 0x2, 0x2, 
    0x3, 0x191, 0x29, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x5, 0x34, 0x1b, 
    0x2, 0x193, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x194, 0x196, 0x5, 0x3a, 0x1e, 
    0x2, 0x195, 0x197, 0x7, 0x4, 0x2, 0x2, 0x196, 0x195, 0x3, 0x2, 0x2, 
    0x2, 0x197, 0x198, 0x3, 0x2, 0x2, 0x2, 0x198, 0x196, 0x3, 0x2, 0x2, 
    0x2, 0x198, 0x199, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0x3, 0x2, 0x2, 
    0x2, 0x19a, 0x1a1, 0x5, 0xc, 0x7, 0x2, 0x19b, 0x19d, 0x7, 0x4, 0x2, 
    0x2, 0x19c, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x3, 0x2, 0x2, 
    0x2, 0x19e, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x3, 0x2, 0x2, 
    0x2, 0x19f, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a2, 0x5, 0x1e, 0x10, 
    0x2, 0x1a1, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 
    0x2, 0x1a3, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x3, 0x2, 0x2, 
    0x2, 0x1a4, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a7, 0x5, 0x3c, 0x1f, 
    0x2, 0x1a6, 0x1a8, 0x7, 0x4, 0x2, 0x2, 0x1a7, 0x1a6, 0x3, 0x2, 0x2, 
    0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1a7, 0x3, 0x2, 0x2, 
    0x2, 0x1a9, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x3, 0x2, 0x2, 
    0x2, 0x1ab, 0x1ac, 0x5, 0xc, 0x7, 0x2, 0x1ac, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x1ad, 0x1b7, 0x5, 0x36, 0x1c, 0x2, 0x1ae, 0x1b0, 0x7, 0x4, 0x2, 0x2, 
    0x1af, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 0x2, 0x2, 
    0x1b1, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 
    0x1b2, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b6, 0x5, 0xc, 0x7, 0x2, 
    0x1b4, 0x1b6, 0x5, 0x1e, 0x10, 0x2, 0x1b5, 0x1b3, 0x3, 0x2, 0x2, 0x2, 
    0x1b5, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b8, 0x3, 0x2, 0x2, 0x2, 
    0x1b7, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x3, 0x2, 0x2, 0x2, 
    0x1b9, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x3, 0x2, 0x2, 0x2, 
    0x1ba, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bd, 0x5, 0x38, 0x1d, 0x2, 
    0x1bc, 0x1be, 0x7, 0x4, 0x2, 0x2, 0x1bd, 0x1bc, 0x3, 0x2, 0x2, 0x2, 
    0x1be, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1bd, 0x3, 0x2, 0x2, 0x2, 
    0x1bf, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x3, 0x2, 0x2, 0x2, 
    0x1c1, 0x1c8, 0x5, 0xc, 0x7, 0x2, 0x1c2, 0x1c4, 0x7, 0x4, 0x2, 0x2, 
    0x1c3, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 0x3, 0x2, 0x2, 0x2, 
    0x1c5, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x3, 0x2, 0x2, 0x2, 
    0x1c6, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c9, 0x5, 0x1e, 0x10, 0x2, 
    0x1c8, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x3, 0x2, 0x2, 0x2, 
    0x1ca, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cb, 0x3, 0x2, 0x2, 0x2, 
    0x1cb, 0x33, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cd, 0x7, 0x1b, 0x2, 0x2, 
    0x1cd, 0x1ce, 0x7, 0x18, 0x2, 0x2, 0x1ce, 0x1cf, 0x7, 0x22, 0x2, 0x2, 
    0x1cf, 0x1d0, 0x7, 0x23, 0x2, 0x2, 0x1d0, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x1d1, 0x1d2, 0x7, 0x1f, 0x2, 0x2, 0x1d2, 0x1d3, 0x7, 0x24, 0x2, 0x2, 
    0x1d3, 0x1d4, 0x7, 0x21, 0x2, 0x2, 0x1d4, 0x1d5, 0x7, 0x16, 0x2, 0x2, 
    0x1d5, 0x1d6, 0x7, 0x14, 0x2, 0x2, 0x1d6, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x1d7, 0x1d8, 0x7, 0x21, 0x2, 0x2, 0x1d8, 0x1d9, 0x7, 0x1c, 0x2, 0x2, 
    0x1d9, 0x39, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1db, 0x7, 0x22, 0x2, 0x2, 
    0x1db, 0x1dc, 0x7, 0x14, 0x2, 0x2, 0x1dc, 0x1dd, 0x7, 0x23, 0x2, 0x2, 
    0x1dd, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1df, 0x7, 0x16, 0x2, 0x2, 
    0x1df, 0x1e0, 0x7, 0x14, 0x2, 0x2, 0x1e0, 0x1e1, 0x7, 0x23, 0x2, 0x2, 
    0x1e1, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x41, 0x49, 0x52, 0x59, 0x5f, 
    0x64, 0x6a, 0x6e, 0x72, 0x98, 0xa8, 0xab, 0xb9, 0xbe, 0xc1, 0xcd, 0xd2, 
    0xd7, 0xda, 0xe4, 0xe9, 0xee, 0xf3, 0xf6, 0xfd, 0x102, 0x107, 0x10c, 
    0x111, 0x114, 0x11b, 0x120, 0x125, 0x12a, 0x12f, 0x134, 0x137, 0x13a, 
    0x149, 0x150, 0x154, 0x164, 0x168, 0x172, 0x178, 0x17f, 0x186, 0x18e, 
    0x198, 0x19e, 0x1a3, 0x1a9, 0x1b1, 0x1b5, 0x1b9, 0x1bf, 0x1c5, 0x1ca, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

hosts::Initializer hosts::_init;
