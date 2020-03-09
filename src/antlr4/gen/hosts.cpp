
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
    setState(43);
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
      setState(40);
      line();
      setState(45);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(46);
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

hosts::CommentContext* hosts::LineContext::comment() {
  return getRuleContext<hosts::CommentContext>(0);
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
    setState(51);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(48);
      comment();
      break;
    }

    case 2: {
      setState(49);
      table_entry();
      break;
    }

    case 3: {
      setState(50);
      empty_line();
      break;
    }

    }
    setState(53);
    match(hosts::NewLine);
   
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
  enterRule(_localctx, 4, hosts::RuleEmpty_line);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hosts::Space) {
      setState(55);
      match(hosts::Space);
      setState(60);
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

hosts::Host_nameContext* hosts::Table_entryContext::host_name() {
  return getRuleContext<hosts::Host_nameContext>(0);
}

std::vector<tree::TerminalNode *> hosts::Table_entryContext::Space() {
  return getTokens(hosts::Space);
}

tree::TerminalNode* hosts::Table_entryContext::Space(size_t i) {
  return getToken(hosts::Space, i);
}

hosts::AliasesContext* hosts::Table_entryContext::aliases() {
  return getRuleContext<hosts::AliasesContext>(0);
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
  enterRule(_localctx, 6, hosts::RuleTable_entry);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    address();
    setState(63); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(62);
      match(hosts::Space);
      setState(65); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hosts::Space);
    setState(67);
    host_name();
    setState(74);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == hosts::Space) {
      setState(69); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(68);
        match(hosts::Space);
        setState(71); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == hosts::Space);
      setState(73);
      aliases();
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
  enterRule(_localctx, 8, hosts::RuleAddress);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(76);
      ip_v4_address();
      break;
    }

    case 2: {
      setState(77);
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
  enterRule(_localctx, 10, hosts::RuleIp_v4_address);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    dec_octet();
    setState(81);
    match(hosts::DOT);
    setState(82);
    dec_octet();
    setState(83);
    match(hosts::DOT);
    setState(84);
    dec_octet();
    setState(85);
    match(hosts::DOT);
    setState(86);
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
  enterRule(_localctx, 12, hosts::RuleIp_v6_address);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(278);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(88);
      h16();
      setState(89);
      match(hosts::COLON);
      setState(90);
      h16();
      setState(91);
      match(hosts::COLON);
      setState(92);
      h16();
      setState(93);
      match(hosts::COLON);
      setState(94);
      h16();
      setState(95);
      match(hosts::COLON);
      setState(96);
      h16();
      setState(97);
      match(hosts::COLON);
      setState(98);
      h16();
      setState(99);
      match(hosts::COLON);
      setState(100);
      ls32();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(102);
      match(hosts::DCOLON);
      setState(103);
      h16();
      setState(104);
      match(hosts::COLON);
      setState(105);
      h16();
      setState(106);
      match(hosts::COLON);
      setState(107);
      h16();
      setState(108);
      match(hosts::COLON);
      setState(109);
      h16();
      setState(110);
      match(hosts::COLON);
      setState(111);
      h16();
      setState(112);
      match(hosts::COLON);
      setState(113);
      ls32();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(116);
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
        setState(115);
        h16();
      }
      setState(118);
      match(hosts::DCOLON);
      setState(119);
      h16();
      setState(120);
      match(hosts::COLON);
      setState(121);
      h16();
      setState(122);
      match(hosts::COLON);
      setState(123);
      h16();
      setState(124);
      match(hosts::COLON);
      setState(125);
      h16();
      setState(126);
      match(hosts::COLON);
      setState(127);
      ls32();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(135);
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
        setState(132);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          setState(129);
          h16();
          setState(130);
          match(hosts::COLON);
          break;
        }

        }
        setState(134);
        h16();
      }
      setState(137);
      match(hosts::DCOLON);
      setState(138);
      h16();
      setState(139);
      match(hosts::COLON);
      setState(140);
      h16();
      setState(141);
      match(hosts::COLON);
      setState(142);
      h16();
      setState(143);
      match(hosts::COLON);
      setState(144);
      ls32();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(157);
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
        setState(154);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          setState(149);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
          case 1: {
            setState(146);
            h16();
            setState(147);
            match(hosts::COLON);
            break;
          }

          }
          setState(151);
          h16();
          setState(152);
          match(hosts::COLON);
          break;
        }

        }
        setState(156);
        h16();
      }
      setState(159);
      match(hosts::DCOLON);
      setState(160);
      h16();
      setState(161);
      match(hosts::COLON);
      setState(162);
      h16();
      setState(163);
      match(hosts::COLON);
      setState(164);
      ls32();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(182);
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
        setState(179);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          setState(174);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
          case 1: {
            setState(169);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
            case 1: {
              setState(166);
              h16();
              setState(167);
              match(hosts::COLON);
              break;
            }

            }
            setState(171);
            h16();
            setState(172);
            match(hosts::COLON);
            break;
          }

          }
          setState(176);
          h16();
          setState(177);
          match(hosts::COLON);
          break;
        }

        }
        setState(181);
        h16();
      }
      setState(184);
      match(hosts::DCOLON);
      setState(185);
      h16();
      setState(186);
      match(hosts::COLON);
      setState(187);
      ls32();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(210);
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
        setState(207);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          setState(202);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
          case 1: {
            setState(197);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
            case 1: {
              setState(192);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
              case 1: {
                setState(189);
                h16();
                setState(190);
                match(hosts::COLON);
                break;
              }

              }
              setState(194);
              h16();
              setState(195);
              match(hosts::COLON);
              break;
            }

            }
            setState(199);
            h16();
            setState(200);
            match(hosts::COLON);
            break;
          }

          }
          setState(204);
          h16();
          setState(205);
          match(hosts::COLON);
          break;
        }

        }
        setState(209);
        h16();
      }
      setState(212);
      match(hosts::DCOLON);
      setState(213);
      ls32();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(240);
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
        setState(237);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
        case 1: {
          setState(232);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
          case 1: {
            setState(227);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
            case 1: {
              setState(222);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
              case 1: {
                setState(217);
                _errHandler->sync(this);

                switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
                case 1: {
                  setState(214);
                  h16();
                  setState(215);
                  match(hosts::COLON);
                  break;
                }

                }
                setState(219);
                h16();
                setState(220);
                match(hosts::COLON);
                break;
              }

              }
              setState(224);
              h16();
              setState(225);
              match(hosts::COLON);
              break;
            }

            }
            setState(229);
            h16();
            setState(230);
            match(hosts::COLON);
            break;
          }

          }
          setState(234);
          h16();
          setState(235);
          match(hosts::COLON);
          break;
        }

        }
        setState(239);
        h16();
      }
      setState(242);
      match(hosts::DCOLON);
      setState(243);
      h16();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(275);
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
        setState(272);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
        case 1: {
          setState(267);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
          case 1: {
            setState(262);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
            case 1: {
              setState(257);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
              case 1: {
                setState(252);
                _errHandler->sync(this);

                switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
                case 1: {
                  setState(247);
                  _errHandler->sync(this);

                  switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
                  case 1: {
                    setState(244);
                    h16();
                    setState(245);
                    match(hosts::COLON);
                    break;
                  }

                  }
                  setState(249);
                  h16();
                  setState(250);
                  match(hosts::COLON);
                  break;
                }

                }
                setState(254);
                h16();
                setState(255);
                match(hosts::COLON);
                break;
              }

              }
              setState(259);
              h16();
              setState(260);
              match(hosts::COLON);
              break;
            }

            }
            setState(264);
            h16();
            setState(265);
            match(hosts::COLON);
            break;
          }

          }
          setState(269);
          h16();
          setState(270);
          match(hosts::COLON);
          break;
        }

        }
        setState(274);
        h16();
      }
      setState(277);
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
  enterRule(_localctx, 14, hosts::RuleH16);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(293);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(280);
      hexdig();
      setState(281);
      hexdig();
      setState(282);
      hexdig();
      setState(283);
      hexdig();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(285);
      hexdig();
      setState(286);
      hexdig();
      setState(287);
      hexdig();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(289);
      hexdig();
      setState(290);
      hexdig();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(292);
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
  enterRule(_localctx, 16, hosts::RuleLs32);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(300);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(295);
      h16();
      setState(296);
      match(hosts::COLON);
      setState(297);
      h16();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(299);
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
  enterRule(_localctx, 18, hosts::RuleHexdig);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(304);
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
        setState(302);
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
        setState(303);
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
  enterRule(_localctx, 20, hosts::RuleDec_octet);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(320);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(306);
      digit();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(307);
      non_zero_digit();
      setState(308);
      digit();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(310);
      match(hosts::D1);
      setState(311);
      digit();
      setState(312);
      digit();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(314);
      match(hosts::D2);
      setState(315);
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
      setState(316);
      digit();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(317);
      match(hosts::D2);
      setState(318);
      match(hosts::D5);
      setState(319);
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
  enterRule(_localctx, 22, hosts::RuleDigit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(324);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hosts::D0: {
        enterOuterAlt(_localctx, 1);
        setState(322);
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
        setState(323);
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
  enterRule(_localctx, 24, hosts::RuleNon_zero_digit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
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
  enterRule(_localctx, 26, hosts::RuleHost_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
    ireg_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasesContext ------------------------------------------------------------------

hosts::AliasesContext::AliasesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hosts::AliasContext *> hosts::AliasesContext::alias() {
  return getRuleContexts<hosts::AliasContext>();
}

hosts::AliasContext* hosts::AliasesContext::alias(size_t i) {
  return getRuleContext<hosts::AliasContext>(i);
}

std::vector<tree::TerminalNode *> hosts::AliasesContext::Space() {
  return getTokens(hosts::Space);
}

tree::TerminalNode* hosts::AliasesContext::Space(size_t i) {
  return getToken(hosts::Space, i);
}


size_t hosts::AliasesContext::getRuleIndex() const {
  return hosts::RuleAliases;
}

void hosts::AliasesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAliases(this);
}

void hosts::AliasesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAliases(this);
}


antlrcpp::Any hosts::AliasesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitAliases(this);
  else
    return visitor->visitChildren(this);
}

hosts::AliasesContext* hosts::aliases() {
  AliasesContext *_localctx = _tracker.createInstance<AliasesContext>(_ctx, getState());
  enterRule(_localctx, 28, hosts::RuleAliases);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    alias();
    setState(339);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hosts::Space) {
      setState(332); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(331);
        match(hosts::Space);
        setState(334); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == hosts::Space);
      setState(336);
      alias();
      setState(341);
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

//----------------- AliasContext ------------------------------------------------------------------

hosts::AliasContext::AliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hosts::Ireg_nameContext* hosts::AliasContext::ireg_name() {
  return getRuleContext<hosts::Ireg_nameContext>(0);
}


size_t hosts::AliasContext::getRuleIndex() const {
  return hosts::RuleAlias;
}

void hosts::AliasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlias(this);
}

void hosts::AliasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlias(this);
}


antlrcpp::Any hosts::AliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitAlias(this);
  else
    return visitor->visitChildren(this);
}

hosts::AliasContext* hosts::alias() {
  AliasContext *_localctx = _tracker.createInstance<AliasContext>(_ctx, getState());
  enterRule(_localctx, 30, hosts::RuleAlias);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(342);
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
  enterRule(_localctx, 32, hosts::RuleIreg_name);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(344);
    iunreserved();
    setState(348);
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
      setState(345);
      iunreserved();
      setState(350);
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
  enterRule(_localctx, 34, hosts::RuleIunreserved);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(354);
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
        setState(351);
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
        setState(352);
        digit();
        break;
      }

      case hosts::UCSCHAR:
      case hosts::DASH:
      case hosts::DOT:
      case hosts::UNDERSCORE:
      case hosts::TILDE: {
        enterOuterAlt(_localctx, 3);
        setState(353);
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
  enterRule(_localctx, 36, hosts::RuleAlpha);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
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
  enterRule(_localctx, 38, hosts::RuleComment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(361);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hosts::Space) {
      setState(358);
      match(hosts::Space);
      setState(363);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(364);
    match(hosts::SHARP);
    setState(368);
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
      setState(365);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == hosts::NewLine)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
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

// Static vars and initialization.
std::vector<dfa::DFA> hosts::_decisionToDFA;
atn::PredictionContextCache hosts::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN hosts::_atn;
std::vector<uint16_t> hosts::_serializedATN;

std::vector<std::string> hosts::_ruleNames = {
  "hosts_file", "line", "empty_line", "table_entry", "address", "ip_v4_address", 
  "ip_v6_address", "h16", "ls32", "hexdig", "dec_octet", "digit", "non_zero_digit", 
  "host_name", "aliases", "alias", "ireg_name", "iunreserved", "alpha", 
  "comment"
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
    0x3, 0x30, 0x176, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x3, 0x2, 0x7, 0x2, 0x2c, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x2f, 
    0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x36, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x7, 0x4, 0x3b, 0xa, 0x4, 
    0xc, 0x4, 0xe, 0x4, 0x3e, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 0x42, 
    0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x43, 0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 0x48, 
    0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x49, 0x3, 0x5, 0x5, 0x5, 0x4d, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x51, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x77, 
    0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x87, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0x8a, 0xa, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x98, 0xa, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x9d, 0xa, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0xa0, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xac, 
    0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xb1, 0xa, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xb6, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0xb9, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xc3, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0xc8, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0xcd, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xd2, 0xa, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0xd5, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xdc, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0xe1, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0xe6, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xeb, 0xa, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xf0, 0xa, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0xf3, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0xfa, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xff, 
    0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x104, 0xa, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x109, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x10e, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0x113, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0x116, 0xa, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x119, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0x128, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x12f, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 
    0xb, 0x133, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x143, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 
    0xd, 0x147, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x6, 0x10, 0x14f, 0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0x150, 
    0x3, 0x10, 0x7, 0x10, 0x154, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x157, 
    0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x15d, 
    0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x160, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x5, 0x13, 0x165, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 
    0x7, 0x15, 0x16a, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x16d, 0xb, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x171, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 
    0x174, 0xb, 0x15, 0x3, 0x15, 0x2, 0x2, 0x16, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2, 0x9, 0x3, 0x2, 0x10, 0x15, 0x3, 0x2, 0x6, 0xa, 
    0x3, 0x2, 0x6, 0xb, 0x3, 0x2, 0x7, 0xf, 0x4, 0x2, 0x5, 0x5, 0x2c, 0x2f, 
    0x3, 0x2, 0x10, 0x29, 0x3, 0x2, 0x3, 0x3, 0x2, 0x19e, 0x2, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x35, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3c, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x3f, 0x3, 0x2, 0x2, 0x2, 0xa, 0x50, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x52, 0x3, 0x2, 0x2, 0x2, 0xe, 0x118, 0x3, 0x2, 0x2, 0x2, 0x10, 0x127, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x14, 0x132, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x142, 0x3, 0x2, 0x2, 0x2, 0x18, 0x146, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x148, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x14a, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x20, 0x158, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x24, 0x164, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x166, 0x3, 0x2, 0x2, 0x2, 0x28, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2c, 
    0x5, 0x4, 0x3, 0x2, 0x2b, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x30, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x31, 0x7, 0x2, 0x2, 0x3, 0x31, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x36, 0x5, 0x28, 0x15, 0x2, 0x33, 0x36, 0x5, 0x8, 0x5, 0x2, 0x34, 
    0x36, 0x5, 0x6, 0x4, 0x2, 0x35, 0x32, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x35, 0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x37, 0x38, 0x7, 0x3, 0x2, 0x2, 0x38, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x39, 0x3b, 0x7, 0x4, 0x2, 0x2, 0x3a, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x3b, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x41, 0x5, 0xa, 0x6, 0x2, 0x40, 0x42, 
    0x7, 0x4, 0x2, 0x2, 0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x4c, 0x5, 0x1c, 0xf, 
    0x2, 0x46, 0x48, 0x7, 0x4, 0x2, 0x2, 0x47, 0x46, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 
    0x4a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4d, 
    0x5, 0x1e, 0x10, 0x2, 0x4c, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x4d, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x51, 0x5, 0xc, 
    0x7, 0x2, 0x4f, 0x51, 0x5, 0xe, 0x8, 0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x53, 0x5, 0x16, 0xc, 0x2, 0x53, 0x54, 0x7, 0x2d, 0x2, 0x2, 0x54, 
    0x55, 0x5, 0x16, 0xc, 0x2, 0x55, 0x56, 0x7, 0x2d, 0x2, 0x2, 0x56, 0x57, 
    0x5, 0x16, 0xc, 0x2, 0x57, 0x58, 0x7, 0x2d, 0x2, 0x2, 0x58, 0x59, 0x5, 
    0x16, 0xc, 0x2, 0x59, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x5, 0x10, 
    0x9, 0x2, 0x5b, 0x5c, 0x7, 0x2a, 0x2, 0x2, 0x5c, 0x5d, 0x5, 0x10, 0x9, 
    0x2, 0x5d, 0x5e, 0x7, 0x2a, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0x10, 0x9, 0x2, 
    0x5f, 0x60, 0x7, 0x2a, 0x2, 0x2, 0x60, 0x61, 0x5, 0x10, 0x9, 0x2, 0x61, 
    0x62, 0x7, 0x2a, 0x2, 0x2, 0x62, 0x63, 0x5, 0x10, 0x9, 0x2, 0x63, 0x64, 
    0x7, 0x2a, 0x2, 0x2, 0x64, 0x65, 0x5, 0x10, 0x9, 0x2, 0x65, 0x66, 0x7, 
    0x2a, 0x2, 0x2, 0x66, 0x67, 0x5, 0x12, 0xa, 0x2, 0x67, 0x119, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x69, 0x7, 0x2b, 0x2, 0x2, 0x69, 0x6a, 0x5, 0x10, 0x9, 
    0x2, 0x6a, 0x6b, 0x7, 0x2a, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0x10, 0x9, 0x2, 
    0x6c, 0x6d, 0x7, 0x2a, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0x10, 0x9, 0x2, 0x6e, 
    0x6f, 0x7, 0x2a, 0x2, 0x2, 0x6f, 0x70, 0x5, 0x10, 0x9, 0x2, 0x70, 0x71, 
    0x7, 0x2a, 0x2, 0x2, 0x71, 0x72, 0x5, 0x10, 0x9, 0x2, 0x72, 0x73, 0x7, 
    0x2a, 0x2, 0x2, 0x73, 0x74, 0x5, 0x12, 0xa, 0x2, 0x74, 0x119, 0x3, 0x2, 
    0x2, 0x2, 0x75, 0x77, 0x5, 0x10, 0x9, 0x2, 0x76, 0x75, 0x3, 0x2, 0x2, 
    0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x79, 0x7, 0x2b, 0x2, 0x2, 0x79, 0x7a, 0x5, 0x10, 0x9, 0x2, 0x7a, 
    0x7b, 0x7, 0x2a, 0x2, 0x2, 0x7b, 0x7c, 0x5, 0x10, 0x9, 0x2, 0x7c, 0x7d, 
    0x7, 0x2a, 0x2, 0x2, 0x7d, 0x7e, 0x5, 0x10, 0x9, 0x2, 0x7e, 0x7f, 0x7, 
    0x2a, 0x2, 0x2, 0x7f, 0x80, 0x5, 0x10, 0x9, 0x2, 0x80, 0x81, 0x7, 0x2a, 
    0x2, 0x2, 0x81, 0x82, 0x5, 0x12, 0xa, 0x2, 0x82, 0x119, 0x3, 0x2, 0x2, 
    0x2, 0x83, 0x84, 0x5, 0x10, 0x9, 0x2, 0x84, 0x85, 0x7, 0x2a, 0x2, 0x2, 
    0x85, 0x87, 0x3, 0x2, 0x2, 0x2, 0x86, 0x83, 0x3, 0x2, 0x2, 0x2, 0x86, 
    0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8a, 
    0x5, 0x10, 0x9, 0x2, 0x89, 0x86, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x2b, 
    0x2, 0x2, 0x8c, 0x8d, 0x5, 0x10, 0x9, 0x2, 0x8d, 0x8e, 0x7, 0x2a, 0x2, 
    0x2, 0x8e, 0x8f, 0x5, 0x10, 0x9, 0x2, 0x8f, 0x90, 0x7, 0x2a, 0x2, 0x2, 
    0x90, 0x91, 0x5, 0x10, 0x9, 0x2, 0x91, 0x92, 0x7, 0x2a, 0x2, 0x2, 0x92, 
    0x93, 0x5, 0x12, 0xa, 0x2, 0x93, 0x119, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 
    0x5, 0x10, 0x9, 0x2, 0x95, 0x96, 0x7, 0x2a, 0x2, 0x2, 0x96, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x97, 0x94, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x5, 0x10, 0x9, 
    0x2, 0x9a, 0x9b, 0x7, 0x2a, 0x2, 0x2, 0x9b, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0x9c, 0x97, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 
    0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa0, 0x5, 0x10, 0x9, 0x2, 0x9f, 0x9c, 
    0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x2b, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x10, 
    0x9, 0x2, 0xa3, 0xa4, 0x7, 0x2a, 0x2, 0x2, 0xa4, 0xa5, 0x5, 0x10, 0x9, 
    0x2, 0xa5, 0xa6, 0x7, 0x2a, 0x2, 0x2, 0xa6, 0xa7, 0x5, 0x12, 0xa, 0x2, 
    0xa7, 0x119, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x5, 0x10, 0x9, 0x2, 0xa9, 
    0xaa, 0x7, 0x2a, 0x2, 0x2, 0xaa, 0xac, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa8, 
    0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 
    0x2, 0x2, 0x2, 0xad, 0xae, 0x5, 0x10, 0x9, 0x2, 0xae, 0xaf, 0x7, 0x2a, 
    0x2, 0x2, 0xaf, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xab, 0x3, 0x2, 0x2, 
    0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 
    0xb2, 0xb3, 0x5, 0x10, 0x9, 0x2, 0xb3, 0xb4, 0x7, 0x2a, 0x2, 0x2, 0xb4, 
    0xb6, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 
    0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb9, 0x5, 
    0x10, 0x9, 0x2, 0xb8, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x2b, 0x2, 
    0x2, 0xbb, 0xbc, 0x5, 0x10, 0x9, 0x2, 0xbc, 0xbd, 0x7, 0x2a, 0x2, 0x2, 
    0xbd, 0xbe, 0x5, 0x12, 0xa, 0x2, 0xbe, 0x119, 0x3, 0x2, 0x2, 0x2, 0xbf, 
    0xc0, 0x5, 0x10, 0x9, 0x2, 0xc0, 0xc1, 0x7, 0x2a, 0x2, 0x2, 0xc1, 0xc3, 
    0x3, 0x2, 0x2, 0x2, 0xc2, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 
    0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x5, 0x10, 
    0x9, 0x2, 0xc5, 0xc6, 0x7, 0x2a, 0x2, 0x2, 0xc6, 0xc8, 0x3, 0x2, 0x2, 
    0x2, 0xc7, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 
    0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x5, 0x10, 0x9, 0x2, 0xca, 
    0xcb, 0x7, 0x2a, 0x2, 0x2, 0xcb, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xc7, 
    0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 
    0x2, 0x2, 0x2, 0xce, 0xcf, 0x5, 0x10, 0x9, 0x2, 0xcf, 0xd0, 0x7, 0x2a, 
    0x2, 0x2, 0xd0, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcc, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 
    0xd3, 0xd5, 0x5, 0x10, 0x9, 0x2, 0xd4, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd4, 
    0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 
    0x7, 0x2b, 0x2, 0x2, 0xd7, 0x119, 0x5, 0x12, 0xa, 0x2, 0xd8, 0xd9, 0x5, 
    0x10, 0x9, 0x2, 0xd9, 0xda, 0x7, 0x2a, 0x2, 0x2, 0xda, 0xdc, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 
    0x2, 0xdc, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x5, 0x10, 0x9, 0x2, 
    0xde, 0xdf, 0x7, 0x2a, 0x2, 0x2, 0xdf, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0xdb, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 
    0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x10, 0x9, 0x2, 0xe3, 0xe4, 0x7, 
    0x2a, 0x2, 0x2, 0xe4, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe0, 0x3, 0x2, 
    0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0xe7, 0xe8, 0x5, 0x10, 0x9, 0x2, 0xe8, 0xe9, 0x7, 0x2a, 0x2, 0x2, 
    0xe9, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xea, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 
    0x5, 0x10, 0x9, 0x2, 0xed, 0xee, 0x7, 0x2a, 0x2, 0x2, 0xee, 0xf0, 0x3, 
    0x2, 0x2, 0x2, 0xef, 0xea, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 
    0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf3, 0x5, 0x10, 0x9, 
    0x2, 0xf2, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 
    0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x2b, 0x2, 0x2, 0xf5, 
    0x119, 0x5, 0x10, 0x9, 0x2, 0xf6, 0xf7, 0x5, 0x10, 0x9, 0x2, 0xf7, 0xf8, 
    0x7, 0x2a, 0x2, 0x2, 0xf8, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf6, 0x3, 
    0x2, 0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 
    0x2, 0x2, 0xfb, 0xfc, 0x5, 0x10, 0x9, 0x2, 0xfc, 0xfd, 0x7, 0x2a, 0x2, 
    0x2, 0xfd, 0xff, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xf9, 0x3, 0x2, 0x2, 0x2, 
    0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 
    0x101, 0x5, 0x10, 0x9, 0x2, 0x101, 0x102, 0x7, 0x2a, 0x2, 0x2, 0x102, 
    0x104, 0x3, 0x2, 0x2, 0x2, 0x103, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 
    0x5, 0x10, 0x9, 0x2, 0x106, 0x107, 0x7, 0x2a, 0x2, 0x2, 0x107, 0x109, 
    0x3, 0x2, 0x2, 0x2, 0x108, 0x103, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 
    0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 
    0x5, 0x10, 0x9, 0x2, 0x10b, 0x10c, 0x7, 0x2a, 0x2, 0x2, 0x10c, 0x10e, 
    0x3, 0x2, 0x2, 0x2, 0x10d, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 
    0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 
    0x5, 0x10, 0x9, 0x2, 0x110, 0x111, 0x7, 0x2a, 0x2, 0x2, 0x111, 0x113, 
    0x3, 0x2, 0x2, 0x2, 0x112, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 
    0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x3, 0x2, 0x2, 0x2, 0x114, 0x116, 
    0x5, 0x10, 0x9, 0x2, 0x115, 0x112, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x119, 
    0x7, 0x2b, 0x2, 0x2, 0x118, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x118, 0x68, 0x3, 
    0x2, 0x2, 0x2, 0x118, 0x76, 0x3, 0x2, 0x2, 0x2, 0x118, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x118, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x118, 0xb8, 0x3, 0x2, 0x2, 
    0x2, 0x118, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x118, 0xf2, 0x3, 0x2, 0x2, 0x2, 
    0x118, 0x115, 0x3, 0x2, 0x2, 0x2, 0x119, 0xf, 0x3, 0x2, 0x2, 0x2, 0x11a, 
    0x11b, 0x5, 0x14, 0xb, 0x2, 0x11b, 0x11c, 0x5, 0x14, 0xb, 0x2, 0x11c, 
    0x11d, 0x5, 0x14, 0xb, 0x2, 0x11d, 0x11e, 0x5, 0x14, 0xb, 0x2, 0x11e, 
    0x128, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x5, 0x14, 0xb, 0x2, 0x120, 
    0x121, 0x5, 0x14, 0xb, 0x2, 0x121, 0x122, 0x5, 0x14, 0xb, 0x2, 0x122, 
    0x128, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x5, 0x14, 0xb, 0x2, 0x124, 
    0x125, 0x5, 0x14, 0xb, 0x2, 0x125, 0x128, 0x3, 0x2, 0x2, 0x2, 0x126, 
    0x128, 0x5, 0x14, 0xb, 0x2, 0x127, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x127, 
    0x11f, 0x3, 0x2, 0x2, 0x2, 0x127, 0x123, 0x3, 0x2, 0x2, 0x2, 0x127, 
    0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 0x11, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 
    0x5, 0x10, 0x9, 0x2, 0x12a, 0x12b, 0x7, 0x2a, 0x2, 0x2, 0x12b, 0x12c, 
    0x5, 0x10, 0x9, 0x2, 0x12c, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12f, 
    0x5, 0xc, 0x7, 0x2, 0x12e, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12d, 
    0x3, 0x2, 0x2, 0x2, 0x12f, 0x13, 0x3, 0x2, 0x2, 0x2, 0x130, 0x133, 0x5, 
    0x18, 0xd, 0x2, 0x131, 0x133, 0x9, 0x2, 0x2, 0x2, 0x132, 0x130, 0x3, 
    0x2, 0x2, 0x2, 0x132, 0x131, 0x3, 0x2, 0x2, 0x2, 0x133, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x134, 0x143, 0x5, 0x18, 0xd, 0x2, 0x135, 0x136, 0x5, 0x1a, 
    0xe, 0x2, 0x136, 0x137, 0x5, 0x18, 0xd, 0x2, 0x137, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x138, 0x139, 0x7, 0x7, 0x2, 0x2, 0x139, 0x13a, 0x5, 0x18, 
    0xd, 0x2, 0x13a, 0x13b, 0x5, 0x18, 0xd, 0x2, 0x13b, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x13c, 0x13d, 0x7, 0x8, 0x2, 0x2, 0x13d, 0x13e, 0x9, 0x3, 
    0x2, 0x2, 0x13e, 0x143, 0x5, 0x18, 0xd, 0x2, 0x13f, 0x140, 0x7, 0x8, 
    0x2, 0x2, 0x140, 0x141, 0x7, 0xb, 0x2, 0x2, 0x141, 0x143, 0x9, 0x4, 
    0x2, 0x2, 0x142, 0x134, 0x3, 0x2, 0x2, 0x2, 0x142, 0x135, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0x138, 0x3, 0x2, 0x2, 0x2, 0x142, 0x13c, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x143, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x144, 0x147, 0x7, 0x6, 0x2, 0x2, 0x145, 0x147, 0x5, 0x1a, 0xe, 
    0x2, 0x146, 0x144, 0x3, 0x2, 0x2, 0x2, 0x146, 0x145, 0x3, 0x2, 0x2, 
    0x2, 0x147, 0x19, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x9, 0x5, 0x2, 0x2, 
    0x149, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x5, 0x22, 0x12, 0x2, 
    0x14b, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x155, 0x5, 0x20, 0x11, 0x2, 
    0x14d, 0x14f, 0x7, 0x4, 0x2, 0x2, 0x14e, 0x14d, 0x3, 0x2, 0x2, 0x2, 
    0x14f, 0x150, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14e, 0x3, 0x2, 0x2, 0x2, 
    0x150, 0x151, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x3, 0x2, 0x2, 0x2, 
    0x152, 0x154, 0x5, 0x20, 0x11, 0x2, 0x153, 0x14e, 0x3, 0x2, 0x2, 0x2, 
    0x154, 0x157, 0x3, 0x2, 0x2, 0x2, 0x155, 0x153, 0x3, 0x2, 0x2, 0x2, 
    0x155, 0x156, 0x3, 0x2, 0x2, 0x2, 0x156, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x157, 
    0x155, 0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 0x5, 0x22, 0x12, 0x2, 0x159, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15e, 0x5, 0x24, 0x13, 0x2, 0x15b, 
    0x15d, 0x5, 0x24, 0x13, 0x2, 0x15c, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15d, 
    0x160, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15e, 
    0x15f, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x23, 0x3, 0x2, 0x2, 0x2, 0x160, 0x15e, 
    0x3, 0x2, 0x2, 0x2, 0x161, 0x165, 0x5, 0x26, 0x14, 0x2, 0x162, 0x165, 
    0x5, 0x18, 0xd, 0x2, 0x163, 0x165, 0x9, 0x6, 0x2, 0x2, 0x164, 0x161, 
    0x3, 0x2, 0x2, 0x2, 0x164, 0x162, 0x3, 0x2, 0x2, 0x2, 0x164, 0x163, 
    0x3, 0x2, 0x2, 0x2, 0x165, 0x25, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x9, 
    0x7, 0x2, 0x2, 0x167, 0x27, 0x3, 0x2, 0x2, 0x2, 0x168, 0x16a, 0x7, 0x4, 
    0x2, 0x2, 0x169, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16d, 0x3, 0x2, 
    0x2, 0x2, 0x16b, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0x3, 0x2, 
    0x2, 0x2, 0x16c, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16b, 0x3, 0x2, 
    0x2, 0x2, 0x16e, 0x172, 0x7, 0x30, 0x2, 0x2, 0x16f, 0x171, 0xa, 0x8, 
    0x2, 0x2, 0x170, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x171, 0x174, 0x3, 0x2, 
    0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x3, 0x2, 
    0x2, 0x2, 0x173, 0x29, 0x3, 0x2, 0x2, 0x2, 0x174, 0x172, 0x3, 0x2, 0x2, 
    0x2, 0x31, 0x2d, 0x35, 0x3c, 0x43, 0x49, 0x4c, 0x50, 0x76, 0x86, 0x89, 
    0x97, 0x9c, 0x9f, 0xab, 0xb0, 0xb5, 0xb8, 0xc2, 0xc7, 0xcc, 0xd1, 0xd4, 
    0xdb, 0xe0, 0xe5, 0xea, 0xef, 0xf2, 0xf9, 0xfe, 0x103, 0x108, 0x10d, 
    0x112, 0x115, 0x118, 0x127, 0x12e, 0x132, 0x142, 0x146, 0x150, 0x155, 
    0x15e, 0x164, 0x16b, 0x172, 
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
