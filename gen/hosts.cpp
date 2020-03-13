
// Generated from /Users/enrico/repos/github/hostage/src/antlr4/hosts.g4 by ANTLR 4.8


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
    setState(59);
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
      setState(56);
      line();
      setState(61);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(62);
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
    setState(67);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(64);
      comment();
      break;
    }

    case 2: {
      setState(65);
      table_entry();
      break;
    }

    case 3: {
      setState(66);
      empty_line();
      break;
    }

    }
    setState(69);
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
    setState(74);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hosts::Space) {
      setState(71);
      match(hosts::Space);
      setState(76);
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
    setState(77);
    address();
    setState(79); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(78);
      match(hosts::Space);
      setState(81); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hosts::Space);
    setState(83);
    host_name();
    setState(92);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hosts::Space) {
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
      setState(94);
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
    setState(97);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(95);
      ip_v4_address();
      break;
    }

    case 2: {
      setState(96);
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
    setState(99);
    dec_octet();
    setState(100);
    match(hosts::DOT);
    setState(101);
    dec_octet();
    setState(102);
    match(hosts::DOT);
    setState(103);
    dec_octet();
    setState(104);
    match(hosts::DOT);
    setState(105);
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
    setState(297);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
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
      h16();
      setState(114);
      match(hosts::COLON);
      setState(115);
      h16();
      setState(116);
      match(hosts::COLON);
      setState(117);
      h16();
      setState(118);
      match(hosts::COLON);
      setState(119);
      ls32();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(121);
      match(hosts::DCOLON);
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
      ls32();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
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
      h16();
      setState(145);
      match(hosts::COLON);
      setState(146);
      ls32();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(154);
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
        setState(151);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          setState(148);
          h16();
          setState(149);
          match(hosts::COLON);
          break;
        }

        }
        setState(153);
        h16();
      }
      setState(156);
      match(hosts::DCOLON);
      setState(157);
      h16();
      setState(158);
      match(hosts::COLON);
      setState(159);
      h16();
      setState(160);
      match(hosts::COLON);
      setState(161);
      h16();
      setState(162);
      match(hosts::COLON);
      setState(163);
      ls32();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(176);
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
        setState(173);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          setState(168);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
          case 1: {
            setState(165);
            h16();
            setState(166);
            match(hosts::COLON);
            break;
          }

          }
          setState(170);
          h16();
          setState(171);
          match(hosts::COLON);
          break;
        }

        }
        setState(175);
        h16();
      }
      setState(178);
      match(hosts::DCOLON);
      setState(179);
      h16();
      setState(180);
      match(hosts::COLON);
      setState(181);
      h16();
      setState(182);
      match(hosts::COLON);
      setState(183);
      ls32();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(201);
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
        setState(198);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          setState(193);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
          case 1: {
            setState(188);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
            case 1: {
              setState(185);
              h16();
              setState(186);
              match(hosts::COLON);
              break;
            }

            }
            setState(190);
            h16();
            setState(191);
            match(hosts::COLON);
            break;
          }

          }
          setState(195);
          h16();
          setState(196);
          match(hosts::COLON);
          break;
        }

        }
        setState(200);
        h16();
      }
      setState(203);
      match(hosts::DCOLON);
      setState(204);
      h16();
      setState(205);
      match(hosts::COLON);
      setState(206);
      ls32();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(229);
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
        setState(226);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          setState(221);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
          case 1: {
            setState(216);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
            case 1: {
              setState(211);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
              case 1: {
                setState(208);
                h16();
                setState(209);
                match(hosts::COLON);
                break;
              }

              }
              setState(213);
              h16();
              setState(214);
              match(hosts::COLON);
              break;
            }

            }
            setState(218);
            h16();
            setState(219);
            match(hosts::COLON);
            break;
          }

          }
          setState(223);
          h16();
          setState(224);
          match(hosts::COLON);
          break;
        }

        }
        setState(228);
        h16();
      }
      setState(231);
      match(hosts::DCOLON);
      setState(232);
      ls32();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(259);
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
        setState(256);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
        case 1: {
          setState(251);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
          case 1: {
            setState(246);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
            case 1: {
              setState(241);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
              case 1: {
                setState(236);
                _errHandler->sync(this);

                switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
                case 1: {
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
              setState(244);
              match(hosts::COLON);
              break;
            }

            }
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
      }
      setState(261);
      match(hosts::DCOLON);
      setState(262);
      h16();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(294);
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
        setState(291);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
        case 1: {
          setState(286);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
          case 1: {
            setState(281);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
            case 1: {
              setState(276);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
              case 1: {
                setState(271);
                _errHandler->sync(this);

                switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
                case 1: {
                  setState(266);
                  _errHandler->sync(this);

                  switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
                  case 1: {
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
                setState(274);
                match(hosts::COLON);
                break;
              }

              }
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
      }
      setState(296);
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
    setState(312);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(299);
      hexdig();
      setState(300);
      hexdig();
      setState(301);
      hexdig();
      setState(302);
      hexdig();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(304);
      hexdig();
      setState(305);
      hexdig();
      setState(306);
      hexdig();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(308);
      hexdig();
      setState(309);
      hexdig();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(311);
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
    setState(319);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(314);
      h16();
      setState(315);
      match(hosts::COLON);
      setState(316);
      h16();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(318);
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
    setState(323);
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
        setState(321);
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
        setState(322);
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
    setState(339);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(325);
      digit();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(326);
      non_zero_digit();
      setState(327);
      digit();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(329);
      match(hosts::D1);
      setState(330);
      digit();
      setState(331);
      digit();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(333);
      match(hosts::D2);
      setState(334);
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
      setState(335);
      digit();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(336);
      match(hosts::D2);
      setState(337);
      match(hosts::D5);
      setState(338);
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
    setState(343);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hosts::D0: {
        enterOuterAlt(_localctx, 1);
        setState(341);
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
        setState(342);
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
    setState(345);
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
    setState(347);
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
  enterRule(_localctx, 28, hosts::RuleIreg_name);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    iunreserved();
    setState(353);
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
      setState(350);
      iunreserved();
      setState(355);
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
  enterRule(_localctx, 30, hosts::RuleIunreserved);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(359);
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
        setState(356);
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
        setState(357);
        digit();
        break;
      }

      case hosts::UCSCHAR:
      case hosts::DASH:
      case hosts::DOT:
      case hosts::UNDERSCORE:
      case hosts::TILDE: {
        enterOuterAlt(_localctx, 3);
        setState(358);
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
  enterRule(_localctx, 32, hosts::RuleAlpha);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(361);
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
  enterRule(_localctx, 34, hosts::RuleComment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(366);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hosts::Space) {
      setState(363);
      match(hosts::Space);
      setState(368);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(369);
    match(hosts::SHARP);
    setState(373);
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
      setState(370);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == hosts::NewLine)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(375);
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

hosts::List_commandContext* hosts::Command_lineContext::list_command() {
  return getRuleContext<hosts::List_commandContext>(0);
}

hosts::Set_commandContext* hosts::Command_lineContext::set_command() {
  return getRuleContext<hosts::Set_commandContext>(0);
}

hosts::Rm_host_commandContext* hosts::Command_lineContext::rm_host_command() {
  return getRuleContext<hosts::Rm_host_commandContext>(0);
}

hosts::Rm_address_commandContext* hosts::Command_lineContext::rm_address_command() {
  return getRuleContext<hosts::Rm_address_commandContext>(0);
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
  enterRule(_localctx, 36, hosts::RuleCommand_line);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(380);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(376);
      list_command();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(377);
      set_command();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(378);
      rm_host_command();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(379);
      rm_address_command();
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
  enterRule(_localctx, 38, hosts::RuleList_command);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
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

hosts::Host_nameContext* hosts::Set_commandContext::host_name() {
  return getRuleContext<hosts::Host_nameContext>(0);
}

std::vector<tree::TerminalNode *> hosts::Set_commandContext::Space() {
  return getTokens(hosts::Space);
}

tree::TerminalNode* hosts::Set_commandContext::Space(size_t i) {
  return getToken(hosts::Space, i);
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
  enterRule(_localctx, 40, hosts::RuleSet_command);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(384);
    cmd_set();
    setState(386); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(385);
      match(hosts::Space);
      setState(388); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hosts::Space);

    setState(390);
    address();
    setState(392); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(391);
      match(hosts::Space);
      setState(394); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hosts::Space);

    setState(396);
    host_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rm_host_commandContext ------------------------------------------------------------------

hosts::Rm_host_commandContext::Rm_host_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hosts::Cmd_rmContext* hosts::Rm_host_commandContext::cmd_rm() {
  return getRuleContext<hosts::Cmd_rmContext>(0);
}

hosts::Cmd_hostContext* hosts::Rm_host_commandContext::cmd_host() {
  return getRuleContext<hosts::Cmd_hostContext>(0);
}

std::vector<tree::TerminalNode *> hosts::Rm_host_commandContext::Space() {
  return getTokens(hosts::Space);
}

tree::TerminalNode* hosts::Rm_host_commandContext::Space(size_t i) {
  return getToken(hosts::Space, i);
}

std::vector<hosts::Host_nameContext *> hosts::Rm_host_commandContext::host_name() {
  return getRuleContexts<hosts::Host_nameContext>();
}

hosts::Host_nameContext* hosts::Rm_host_commandContext::host_name(size_t i) {
  return getRuleContext<hosts::Host_nameContext>(i);
}


size_t hosts::Rm_host_commandContext::getRuleIndex() const {
  return hosts::RuleRm_host_command;
}

void hosts::Rm_host_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRm_host_command(this);
}

void hosts::Rm_host_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRm_host_command(this);
}


antlrcpp::Any hosts::Rm_host_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitRm_host_command(this);
  else
    return visitor->visitChildren(this);
}

hosts::Rm_host_commandContext* hosts::rm_host_command() {
  Rm_host_commandContext *_localctx = _tracker.createInstance<Rm_host_commandContext>(_ctx, getState());
  enterRule(_localctx, 42, hosts::RuleRm_host_command);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(398);
    cmd_rm();
    setState(400); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(399);
      match(hosts::Space);
      setState(402); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hosts::Space);
    setState(404);
    cmd_host();
    setState(411); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(406); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(405);
        match(hosts::Space);
        setState(408); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == hosts::Space);
      setState(410);
      host_name();
      setState(413); 
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

//----------------- Rm_address_commandContext ------------------------------------------------------------------

hosts::Rm_address_commandContext::Rm_address_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hosts::Cmd_rmContext* hosts::Rm_address_commandContext::cmd_rm() {
  return getRuleContext<hosts::Cmd_rmContext>(0);
}

hosts::Cmd_addressContext* hosts::Rm_address_commandContext::cmd_address() {
  return getRuleContext<hosts::Cmd_addressContext>(0);
}

std::vector<tree::TerminalNode *> hosts::Rm_address_commandContext::Space() {
  return getTokens(hosts::Space);
}

tree::TerminalNode* hosts::Rm_address_commandContext::Space(size_t i) {
  return getToken(hosts::Space, i);
}

std::vector<hosts::AddressContext *> hosts::Rm_address_commandContext::address() {
  return getRuleContexts<hosts::AddressContext>();
}

hosts::AddressContext* hosts::Rm_address_commandContext::address(size_t i) {
  return getRuleContext<hosts::AddressContext>(i);
}


size_t hosts::Rm_address_commandContext::getRuleIndex() const {
  return hosts::RuleRm_address_command;
}

void hosts::Rm_address_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRm_address_command(this);
}

void hosts::Rm_address_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRm_address_command(this);
}


antlrcpp::Any hosts::Rm_address_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitRm_address_command(this);
  else
    return visitor->visitChildren(this);
}

hosts::Rm_address_commandContext* hosts::rm_address_command() {
  Rm_address_commandContext *_localctx = _tracker.createInstance<Rm_address_commandContext>(_ctx, getState());
  enterRule(_localctx, 44, hosts::RuleRm_address_command);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(415);
    cmd_rm();
    setState(417); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(416);
      match(hosts::Space);
      setState(419); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hosts::Space);
    setState(421);
    cmd_address();
    setState(428); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(423); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(422);
        match(hosts::Space);
        setState(425); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == hosts::Space);
      setState(427);
      address();
      setState(430); 
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
  enterRule(_localctx, 46, hosts::RuleCmd_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(432);
    match(hosts::L);
    setState(433);
    match(hosts::I);
    setState(434);
    match(hosts::S);
    setState(435);
    match(hosts::T);
   
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
  enterRule(_localctx, 48, hosts::RuleCmd_rm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(437);
    match(hosts::R);
    setState(438);
    match(hosts::M);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cmd_hostContext ------------------------------------------------------------------

hosts::Cmd_hostContext::Cmd_hostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hosts::Cmd_hostContext::H() {
  return getToken(hosts::H, 0);
}

tree::TerminalNode* hosts::Cmd_hostContext::O() {
  return getToken(hosts::O, 0);
}

tree::TerminalNode* hosts::Cmd_hostContext::S() {
  return getToken(hosts::S, 0);
}

tree::TerminalNode* hosts::Cmd_hostContext::T() {
  return getToken(hosts::T, 0);
}


size_t hosts::Cmd_hostContext::getRuleIndex() const {
  return hosts::RuleCmd_host;
}

void hosts::Cmd_hostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCmd_host(this);
}

void hosts::Cmd_hostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCmd_host(this);
}


antlrcpp::Any hosts::Cmd_hostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitCmd_host(this);
  else
    return visitor->visitChildren(this);
}

hosts::Cmd_hostContext* hosts::cmd_host() {
  Cmd_hostContext *_localctx = _tracker.createInstance<Cmd_hostContext>(_ctx, getState());
  enterRule(_localctx, 50, hosts::RuleCmd_host);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(440);
    match(hosts::H);
    setState(441);
    match(hosts::O);
    setState(442);
    match(hosts::S);
    setState(443);
    match(hosts::T);
   
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
  enterRule(_localctx, 52, hosts::RuleCmd_set);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(445);
    match(hosts::S);
    setState(446);
    match(hosts::E);
    setState(447);
    match(hosts::T);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cmd_addressContext ------------------------------------------------------------------

hosts::Cmd_addressContext::Cmd_addressContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hosts::Cmd_addressContext::A() {
  return getToken(hosts::A, 0);
}

std::vector<tree::TerminalNode *> hosts::Cmd_addressContext::D() {
  return getTokens(hosts::D);
}

tree::TerminalNode* hosts::Cmd_addressContext::D(size_t i) {
  return getToken(hosts::D, i);
}

tree::TerminalNode* hosts::Cmd_addressContext::R() {
  return getToken(hosts::R, 0);
}

tree::TerminalNode* hosts::Cmd_addressContext::E() {
  return getToken(hosts::E, 0);
}

std::vector<tree::TerminalNode *> hosts::Cmd_addressContext::S() {
  return getTokens(hosts::S);
}

tree::TerminalNode* hosts::Cmd_addressContext::S(size_t i) {
  return getToken(hosts::S, i);
}


size_t hosts::Cmd_addressContext::getRuleIndex() const {
  return hosts::RuleCmd_address;
}

void hosts::Cmd_addressContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCmd_address(this);
}

void hosts::Cmd_addressContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCmd_address(this);
}


antlrcpp::Any hosts::Cmd_addressContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitCmd_address(this);
  else
    return visitor->visitChildren(this);
}

hosts::Cmd_addressContext* hosts::cmd_address() {
  Cmd_addressContext *_localctx = _tracker.createInstance<Cmd_addressContext>(_ctx, getState());
  enterRule(_localctx, 54, hosts::RuleCmd_address);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(449);
    match(hosts::A);
    setState(450);
    match(hosts::D);
    setState(451);
    match(hosts::D);
    setState(452);
    match(hosts::R);
    setState(453);
    match(hosts::E);
    setState(454);
    match(hosts::S);
    setState(455);
    match(hosts::S);
   
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
  "host_name", "ireg_name", "iunreserved", "alpha", "comment", "command_line", 
  "list_command", "set_command", "rm_host_command", "rm_address_command", 
  "cmd_list", "cmd_rm", "cmd_host", "cmd_set", "cmd_address"
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
    0x3, 0x30, 0x1cc, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x3, 0x2, 0x7, 0x2, 0x3c, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x3f, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x46, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x4, 0x7, 0x4, 0x4b, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x4e, 0xb, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 0x52, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x53, 
    0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 0x58, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x59, 
    0x3, 0x5, 0x7, 0x5, 0x5d, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x60, 0xb, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x64, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x8a, 
    0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x9a, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0x9d, 0xa, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xab, 0xa, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xb0, 0xa, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0xb3, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xbf, 
    0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xc4, 0xa, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xc9, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0xcc, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xd6, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0xdb, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0xe0, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xe5, 0xa, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0xe8, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xef, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0xf4, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0xf9, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xfe, 0xa, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x103, 0xa, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0x106, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x10d, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x112, 
    0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x117, 0xa, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x11c, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x121, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0x126, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0x129, 0xa, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x12c, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0x13b, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x142, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 
    0xb, 0x146, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x156, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 
    0xd, 0x15a, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x7, 0x10, 0x162, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x165, 
    0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x16a, 0xa, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x7, 0x13, 0x16f, 0xa, 0x13, 0xc, 0x13, 
    0xe, 0x13, 0x172, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x176, 
    0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x179, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x17f, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x6, 0x16, 0x185, 0xa, 0x16, 0xd, 0x16, 0xe, 0x16, 
    0x186, 0x3, 0x16, 0x3, 0x16, 0x6, 0x16, 0x18b, 0xa, 0x16, 0xd, 0x16, 
    0xe, 0x16, 0x18c, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x6, 0x17, 
    0x193, 0xa, 0x17, 0xd, 0x17, 0xe, 0x17, 0x194, 0x3, 0x17, 0x3, 0x17, 
    0x6, 0x17, 0x199, 0xa, 0x17, 0xd, 0x17, 0xe, 0x17, 0x19a, 0x3, 0x17, 
    0x6, 0x17, 0x19e, 0xa, 0x17, 0xd, 0x17, 0xe, 0x17, 0x19f, 0x3, 0x18, 
    0x3, 0x18, 0x6, 0x18, 0x1a4, 0xa, 0x18, 0xd, 0x18, 0xe, 0x18, 0x1a5, 
    0x3, 0x18, 0x3, 0x18, 0x6, 0x18, 0x1aa, 0xa, 0x18, 0xd, 0x18, 0xe, 0x18, 
    0x1ab, 0x3, 0x18, 0x6, 0x18, 0x1af, 0xa, 0x18, 0xd, 0x18, 0xe, 0x18, 
    0x1b0, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x2, 0x2, 0x1e, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
    0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x2, 0x9, 0x3, 0x2, 0x10, 
    0x15, 0x3, 0x2, 0x6, 0xa, 0x3, 0x2, 0x6, 0xb, 0x3, 0x2, 0x7, 0xf, 0x4, 
    0x2, 0x5, 0x5, 0x2c, 0x2f, 0x3, 0x2, 0x10, 0x29, 0x3, 0x2, 0x3, 0x3, 
    0x2, 0x1f5, 0x2, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x4, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x4f, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0xc, 0x65, 0x3, 0x2, 0x2, 0x2, 0xe, 0x12b, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x12, 0x141, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x145, 0x3, 0x2, 0x2, 0x2, 0x16, 0x155, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x159, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x15b, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x15f, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x169, 0x3, 0x2, 0x2, 0x2, 0x22, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x170, 0x3, 0x2, 0x2, 0x2, 0x26, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x28, 0x180, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x182, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x190, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x30, 0x1b2, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x34, 0x1ba, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x38, 0x1c3, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x3c, 0x5, 0x4, 0x3, 0x2, 0x3b, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0x2, 0x2, 0x3, 0x41, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x46, 0x5, 0x24, 0x13, 0x2, 0x43, 0x46, 0x5, 0x8, 0x5, 
    0x2, 0x44, 0x46, 0x5, 0x6, 0x4, 0x2, 0x45, 0x42, 0x3, 0x2, 0x2, 0x2, 
    0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x7, 0x3, 0x2, 0x2, 0x48, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 0x7, 0x4, 0x2, 0x2, 0x4a, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x4b, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x51, 0x5, 0xa, 0x6, 0x2, 
    0x50, 0x52, 0x7, 0x4, 0x2, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x55, 0x5e, 0x5, 
    0x1c, 0xf, 0x2, 0x56, 0x58, 0x7, 0x4, 0x2, 0x2, 0x57, 0x56, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x5d, 0x5, 0x1c, 0xf, 0x2, 0x5c, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x60, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0x9, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5e, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x64, 0x5, 0xc, 0x7, 0x2, 0x62, 0x64, 0x5, 0xe, 
    0x8, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x62, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0xb, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x5, 0x16, 0xc, 0x2, 
    0x66, 0x67, 0x7, 0x2d, 0x2, 0x2, 0x67, 0x68, 0x5, 0x16, 0xc, 0x2, 0x68, 
    0x69, 0x7, 0x2d, 0x2, 0x2, 0x69, 0x6a, 0x5, 0x16, 0xc, 0x2, 0x6a, 0x6b, 
    0x7, 0x2d, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0x16, 0xc, 0x2, 0x6c, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0x10, 0x9, 0x2, 0x6e, 0x6f, 0x7, 0x2a, 
    0x2, 0x2, 0x6f, 0x70, 0x5, 0x10, 0x9, 0x2, 0x70, 0x71, 0x7, 0x2a, 0x2, 
    0x2, 0x71, 0x72, 0x5, 0x10, 0x9, 0x2, 0x72, 0x73, 0x7, 0x2a, 0x2, 0x2, 
    0x73, 0x74, 0x5, 0x10, 0x9, 0x2, 0x74, 0x75, 0x7, 0x2a, 0x2, 0x2, 0x75, 
    0x76, 0x5, 0x10, 0x9, 0x2, 0x76, 0x77, 0x7, 0x2a, 0x2, 0x2, 0x77, 0x78, 
    0x5, 0x10, 0x9, 0x2, 0x78, 0x79, 0x7, 0x2a, 0x2, 0x2, 0x79, 0x7a, 0x5, 
    0x12, 0xa, 0x2, 0x7a, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x2b, 
    0x2, 0x2, 0x7c, 0x7d, 0x5, 0x10, 0x9, 0x2, 0x7d, 0x7e, 0x7, 0x2a, 0x2, 
    0x2, 0x7e, 0x7f, 0x5, 0x10, 0x9, 0x2, 0x7f, 0x80, 0x7, 0x2a, 0x2, 0x2, 
    0x80, 0x81, 0x5, 0x10, 0x9, 0x2, 0x81, 0x82, 0x7, 0x2a, 0x2, 0x2, 0x82, 
    0x83, 0x5, 0x10, 0x9, 0x2, 0x83, 0x84, 0x7, 0x2a, 0x2, 0x2, 0x84, 0x85, 
    0x5, 0x10, 0x9, 0x2, 0x85, 0x86, 0x7, 0x2a, 0x2, 0x2, 0x86, 0x87, 0x5, 
    0x12, 0xa, 0x2, 0x87, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8a, 0x5, 0x10, 
    0x9, 0x2, 0x89, 0x88, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x2b, 0x2, 0x2, 
    0x8c, 0x8d, 0x5, 0x10, 0x9, 0x2, 0x8d, 0x8e, 0x7, 0x2a, 0x2, 0x2, 0x8e, 
    0x8f, 0x5, 0x10, 0x9, 0x2, 0x8f, 0x90, 0x7, 0x2a, 0x2, 0x2, 0x90, 0x91, 
    0x5, 0x10, 0x9, 0x2, 0x91, 0x92, 0x7, 0x2a, 0x2, 0x2, 0x92, 0x93, 0x5, 
    0x10, 0x9, 0x2, 0x93, 0x94, 0x7, 0x2a, 0x2, 0x2, 0x94, 0x95, 0x5, 0x12, 
    0xa, 0x2, 0x95, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x5, 0x10, 0x9, 
    0x2, 0x97, 0x98, 0x7, 0x2a, 0x2, 0x2, 0x98, 0x9a, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x96, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9d, 0x5, 0x10, 0x9, 0x2, 0x9c, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 
    0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x2b, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0x10, 
    0x9, 0x2, 0xa0, 0xa1, 0x7, 0x2a, 0x2, 0x2, 0xa1, 0xa2, 0x5, 0x10, 0x9, 
    0x2, 0xa2, 0xa3, 0x7, 0x2a, 0x2, 0x2, 0xa3, 0xa4, 0x5, 0x10, 0x9, 0x2, 
    0xa4, 0xa5, 0x7, 0x2a, 0x2, 0x2, 0xa5, 0xa6, 0x5, 0x12, 0xa, 0x2, 0xa6, 
    0x12c, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x5, 0x10, 0x9, 0x2, 0xa8, 0xa9, 
    0x7, 0x2a, 0x2, 0x2, 0xa9, 0xab, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa7, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 
    0x2, 0x2, 0xac, 0xad, 0x5, 0x10, 0x9, 0x2, 0xad, 0xae, 0x7, 0x2a, 0x2, 
    0x2, 0xae, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xaa, 0x3, 0x2, 0x2, 0x2, 
    0xaf, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0xb3, 0x5, 0x10, 0x9, 0x2, 0xb2, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x7, 
    0x2b, 0x2, 0x2, 0xb5, 0xb6, 0x5, 0x10, 0x9, 0x2, 0xb6, 0xb7, 0x7, 0x2a, 
    0x2, 0x2, 0xb7, 0xb8, 0x5, 0x10, 0x9, 0x2, 0xb8, 0xb9, 0x7, 0x2a, 0x2, 
    0x2, 0xb9, 0xba, 0x5, 0x12, 0xa, 0x2, 0xba, 0x12c, 0x3, 0x2, 0x2, 0x2, 
    0xbb, 0xbc, 0x5, 0x10, 0x9, 0x2, 0xbc, 0xbd, 0x7, 0x2a, 0x2, 0x2, 0xbd, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 
    0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x5, 
    0x10, 0x9, 0x2, 0xc1, 0xc2, 0x7, 0x2a, 0x2, 0x2, 0xc2, 0xc4, 0x3, 0x2, 
    0x2, 0x2, 0xc3, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 
    0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0x10, 0x9, 0x2, 
    0xc6, 0xc7, 0x7, 0x2a, 0x2, 0x2, 0xc7, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 
    0x3, 0x2, 0x2, 0x2, 0xca, 0xcc, 0x5, 0x10, 0x9, 0x2, 0xcb, 0xc8, 0x3, 
    0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0xcd, 0xce, 0x7, 0x2b, 0x2, 0x2, 0xce, 0xcf, 0x5, 0x10, 0x9, 
    0x2, 0xcf, 0xd0, 0x7, 0x2a, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x12, 0xa, 0x2, 
    0xd1, 0x12c, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x5, 0x10, 0x9, 0x2, 0xd3, 
    0xd4, 0x7, 0x2a, 0x2, 0x2, 0xd4, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd2, 
    0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 
    0x2, 0x2, 0x2, 0xd7, 0xd8, 0x5, 0x10, 0x9, 0x2, 0xd8, 0xd9, 0x7, 0x2a, 
    0x2, 0x2, 0xd9, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd5, 0x3, 0x2, 0x2, 
    0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 
    0xdc, 0xdd, 0x5, 0x10, 0x9, 0x2, 0xdd, 0xde, 0x7, 0x2a, 0x2, 0x2, 0xde, 
    0xe0, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 
    0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x5, 
    0x10, 0x9, 0x2, 0xe2, 0xe3, 0x7, 0x2a, 0x2, 0x2, 0xe3, 0xe5, 0x3, 0x2, 
    0x2, 0x2, 0xe4, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 
    0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe8, 0x5, 0x10, 0x9, 0x2, 
    0xe7, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 
    0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x2b, 0x2, 0x2, 0xea, 0x12c, 
    0x5, 0x12, 0xa, 0x2, 0xeb, 0xec, 0x5, 0x10, 0x9, 0x2, 0xec, 0xed, 0x7, 
    0x2a, 0x2, 0x2, 0xed, 0xef, 0x3, 0x2, 0x2, 0x2, 0xee, 0xeb, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 
    0x2, 0xf0, 0xf1, 0x5, 0x10, 0x9, 0x2, 0xf1, 0xf2, 0x7, 0x2a, 0x2, 0x2, 
    0xf2, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf3, 
    0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 
    0x5, 0x10, 0x9, 0x2, 0xf6, 0xf7, 0x7, 0x2a, 0x2, 0x2, 0xf7, 0xf9, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x3, 0x2, 
    0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x10, 0x9, 
    0x2, 0xfb, 0xfc, 0x7, 0x2a, 0x2, 0x2, 0xfc, 0xfe, 0x3, 0x2, 0x2, 0x2, 
    0xfd, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 
    0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x5, 0x10, 0x9, 0x2, 0x100, 0x101, 
    0x7, 0x2a, 0x2, 0x2, 0x101, 0x103, 0x3, 0x2, 0x2, 0x2, 0x102, 0xfd, 
    0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x106, 0x5, 0x10, 0x9, 0x2, 0x105, 0x102, 
    0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 
    0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x7, 0x2b, 0x2, 0x2, 0x108, 0x12c, 
    0x5, 0x10, 0x9, 0x2, 0x109, 0x10a, 0x5, 0x10, 0x9, 0x2, 0x10a, 0x10b, 
    0x7, 0x2a, 0x2, 0x2, 0x10b, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x109, 
    0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 
    0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x5, 0x10, 0x9, 0x2, 0x10f, 0x110, 
    0x7, 0x2a, 0x2, 0x2, 0x110, 0x112, 0x3, 0x2, 0x2, 0x2, 0x111, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 
    0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x5, 0x10, 0x9, 0x2, 0x114, 0x115, 
    0x7, 0x2a, 0x2, 0x2, 0x115, 0x117, 0x3, 0x2, 0x2, 0x2, 0x116, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 
    0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x5, 0x10, 0x9, 0x2, 0x119, 0x11a, 
    0x7, 0x2a, 0x2, 0x2, 0x11a, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x116, 
    0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 
    0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x5, 0x10, 0x9, 0x2, 0x11e, 0x11f, 
    0x7, 0x2a, 0x2, 0x2, 0x11f, 0x121, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11b, 
    0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 
    0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x5, 0x10, 0x9, 0x2, 0x123, 0x124, 
    0x7, 0x2a, 0x2, 0x2, 0x124, 0x126, 0x3, 0x2, 0x2, 0x2, 0x125, 0x120, 
    0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 
    0x3, 0x2, 0x2, 0x2, 0x127, 0x129, 0x5, 0x10, 0x9, 0x2, 0x128, 0x125, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 
    0x3, 0x2, 0x2, 0x2, 0x12a, 0x12c, 0x7, 0x2b, 0x2, 0x2, 0x12b, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x12b, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x12b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x12b, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0x12b, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x12b, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0x12b, 0x105, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x128, 0x3, 0x2, 0x2, 
    0x2, 0x12c, 0xf, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x5, 0x14, 0xb, 0x2, 
    0x12e, 0x12f, 0x5, 0x14, 0xb, 0x2, 0x12f, 0x130, 0x5, 0x14, 0xb, 0x2, 
    0x130, 0x131, 0x5, 0x14, 0xb, 0x2, 0x131, 0x13b, 0x3, 0x2, 0x2, 0x2, 
    0x132, 0x133, 0x5, 0x14, 0xb, 0x2, 0x133, 0x134, 0x5, 0x14, 0xb, 0x2, 
    0x134, 0x135, 0x5, 0x14, 0xb, 0x2, 0x135, 0x13b, 0x3, 0x2, 0x2, 0x2, 
    0x136, 0x137, 0x5, 0x14, 0xb, 0x2, 0x137, 0x138, 0x5, 0x14, 0xb, 0x2, 
    0x138, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13b, 0x5, 0x14, 0xb, 0x2, 
    0x13a, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x132, 0x3, 0x2, 0x2, 0x2, 
    0x13a, 0x136, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x139, 0x3, 0x2, 0x2, 0x2, 
    0x13b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x5, 0x10, 0x9, 0x2, 
    0x13d, 0x13e, 0x7, 0x2a, 0x2, 0x2, 0x13e, 0x13f, 0x5, 0x10, 0x9, 0x2, 
    0x13f, 0x142, 0x3, 0x2, 0x2, 0x2, 0x140, 0x142, 0x5, 0xc, 0x7, 0x2, 
    0x141, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x141, 0x140, 0x3, 0x2, 0x2, 0x2, 
    0x142, 0x13, 0x3, 0x2, 0x2, 0x2, 0x143, 0x146, 0x5, 0x18, 0xd, 0x2, 
    0x144, 0x146, 0x9, 0x2, 0x2, 0x2, 0x145, 0x143, 0x3, 0x2, 0x2, 0x2, 
    0x145, 0x144, 0x3, 0x2, 0x2, 0x2, 0x146, 0x15, 0x3, 0x2, 0x2, 0x2, 0x147, 
    0x156, 0x5, 0x18, 0xd, 0x2, 0x148, 0x149, 0x5, 0x1a, 0xe, 0x2, 0x149, 
    0x14a, 0x5, 0x18, 0xd, 0x2, 0x14a, 0x156, 0x3, 0x2, 0x2, 0x2, 0x14b, 
    0x14c, 0x7, 0x7, 0x2, 0x2, 0x14c, 0x14d, 0x5, 0x18, 0xd, 0x2, 0x14d, 
    0x14e, 0x5, 0x18, 0xd, 0x2, 0x14e, 0x156, 0x3, 0x2, 0x2, 0x2, 0x14f, 
    0x150, 0x7, 0x8, 0x2, 0x2, 0x150, 0x151, 0x9, 0x3, 0x2, 0x2, 0x151, 
    0x156, 0x5, 0x18, 0xd, 0x2, 0x152, 0x153, 0x7, 0x8, 0x2, 0x2, 0x153, 
    0x154, 0x7, 0xb, 0x2, 0x2, 0x154, 0x156, 0x9, 0x4, 0x2, 0x2, 0x155, 
    0x147, 0x3, 0x2, 0x2, 0x2, 0x155, 0x148, 0x3, 0x2, 0x2, 0x2, 0x155, 
    0x14b, 0x3, 0x2, 0x2, 0x2, 0x155, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x155, 
    0x152, 0x3, 0x2, 0x2, 0x2, 0x156, 0x17, 0x3, 0x2, 0x2, 0x2, 0x157, 0x15a, 
    0x7, 0x6, 0x2, 0x2, 0x158, 0x15a, 0x5, 0x1a, 0xe, 0x2, 0x159, 0x157, 
    0x3, 0x2, 0x2, 0x2, 0x159, 0x158, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x15b, 0x15c, 0x9, 0x5, 0x2, 0x2, 0x15c, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x15d, 0x15e, 0x5, 0x1e, 0x10, 0x2, 0x15e, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x15f, 0x163, 0x5, 0x20, 0x11, 0x2, 0x160, 0x162, 0x5, 0x20, 
    0x11, 0x2, 0x161, 0x160, 0x3, 0x2, 0x2, 0x2, 0x162, 0x165, 0x3, 0x2, 
    0x2, 0x2, 0x163, 0x161, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 
    0x2, 0x2, 0x164, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x165, 0x163, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x16a, 0x5, 0x22, 0x12, 0x2, 0x167, 0x16a, 0x5, 0x18, 0xd, 
    0x2, 0x168, 0x16a, 0x9, 0x6, 0x2, 0x2, 0x169, 0x166, 0x3, 0x2, 0x2, 
    0x2, 0x169, 0x167, 0x3, 0x2, 0x2, 0x2, 0x169, 0x168, 0x3, 0x2, 0x2, 
    0x2, 0x16a, 0x21, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0x9, 0x7, 0x2, 0x2, 
    0x16c, 0x23, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16f, 0x7, 0x4, 0x2, 0x2, 0x16e, 
    0x16d, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x172, 0x3, 0x2, 0x2, 0x2, 0x170, 
    0x16e, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x3, 0x2, 0x2, 0x2, 0x171, 
    0x173, 0x3, 0x2, 0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 0x2, 0x2, 0x173, 
    0x177, 0x7, 0x30, 0x2, 0x2, 0x174, 0x176, 0xa, 0x8, 0x2, 0x2, 0x175, 
    0x174, 0x3, 0x2, 0x2, 0x2, 0x176, 0x179, 0x3, 0x2, 0x2, 0x2, 0x177, 
    0x175, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x3, 0x2, 0x2, 0x2, 0x178, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x179, 0x177, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17f, 
    0x5, 0x28, 0x15, 0x2, 0x17b, 0x17f, 0x5, 0x2a, 0x16, 0x2, 0x17c, 0x17f, 
    0x5, 0x2c, 0x17, 0x2, 0x17d, 0x17f, 0x5, 0x2e, 0x18, 0x2, 0x17e, 0x17a, 
    0x3, 0x2, 0x2, 0x2, 0x17e, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17c, 
    0x3, 0x2, 0x2, 0x2, 0x17e, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x180, 0x181, 0x5, 0x30, 0x19, 0x2, 0x181, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x182, 0x184, 0x5, 0x36, 0x1c, 0x2, 0x183, 0x185, 0x7, 
    0x4, 0x2, 0x2, 0x184, 0x183, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 
    0x2, 0x2, 0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x3, 
    0x2, 0x2, 0x2, 0x187, 0x188, 0x3, 0x2, 0x2, 0x2, 0x188, 0x18a, 0x5, 
    0xa, 0x6, 0x2, 0x189, 0x18b, 0x7, 0x4, 0x2, 0x2, 0x18a, 0x189, 0x3, 
    0x2, 0x2, 0x2, 0x18b, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18a, 0x3, 
    0x2, 0x2, 0x2, 0x18c, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x3, 
    0x2, 0x2, 0x2, 0x18e, 0x18f, 0x5, 0x1c, 0xf, 0x2, 0x18f, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x190, 0x192, 0x5, 0x32, 0x1a, 0x2, 0x191, 0x193, 0x7, 
    0x4, 0x2, 0x2, 0x192, 0x191, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 
    0x2, 0x2, 0x2, 0x194, 0x192, 0x3, 0x2, 0x2, 0x2, 0x194, 0x195, 0x3, 
    0x2, 0x2, 0x2, 0x195, 0x196, 0x3, 0x2, 0x2, 0x2, 0x196, 0x19d, 0x5, 
    0x34, 0x1b, 0x2, 0x197, 0x199, 0x7, 0x4, 0x2, 0x2, 0x198, 0x197, 0x3, 
    0x2, 0x2, 0x2, 0x199, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x198, 0x3, 
    0x2, 0x2, 0x2, 0x19a, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 0x3, 
    0x2, 0x2, 0x2, 0x19c, 0x19e, 0x5, 0x1c, 0xf, 0x2, 0x19d, 0x198, 0x3, 
    0x2, 0x2, 0x2, 0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x19d, 0x3, 
    0x2, 0x2, 0x2, 0x19f, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x1a1, 0x1a3, 0x5, 0x32, 0x1a, 0x2, 0x1a2, 0x1a4, 0x7, 0x4, 
    0x2, 0x2, 0x1a3, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x3, 0x2, 
    0x2, 0x2, 0x1a5, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x3, 0x2, 
    0x2, 0x2, 0x1a6, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1ae, 0x5, 0x38, 
    0x1d, 0x2, 0x1a8, 0x1aa, 0x7, 0x4, 0x2, 0x2, 0x1a9, 0x1a8, 0x3, 0x2, 
    0x2, 0x2, 0x1aa, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1a9, 0x3, 0x2, 
    0x2, 0x2, 0x1ab, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ad, 0x3, 0x2, 
    0x2, 0x2, 0x1ad, 0x1af, 0x5, 0xa, 0x6, 0x2, 0x1ae, 0x1a9, 0x3, 0x2, 
    0x2, 0x2, 0x1af, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1ae, 0x3, 0x2, 
    0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x1b2, 0x1b3, 0x7, 0x1b, 0x2, 0x2, 0x1b3, 0x1b4, 0x7, 0x18, 0x2, 
    0x2, 0x1b4, 0x1b5, 0x7, 0x22, 0x2, 0x2, 0x1b5, 0x1b6, 0x7, 0x23, 0x2, 
    0x2, 0x1b6, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b8, 0x7, 0x21, 0x2, 
    0x2, 0x1b8, 0x1b9, 0x7, 0x1c, 0x2, 0x2, 0x1b9, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x1ba, 0x1bb, 0x7, 0x17, 0x2, 0x2, 0x1bb, 0x1bc, 0x7, 0x1e, 0x2, 
    0x2, 0x1bc, 0x1bd, 0x7, 0x22, 0x2, 0x2, 0x1bd, 0x1be, 0x7, 0x23, 0x2, 
    0x2, 0x1be, 0x35, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c0, 0x7, 0x22, 0x2, 
    0x2, 0x1c0, 0x1c1, 0x7, 0x14, 0x2, 0x2, 0x1c1, 0x1c2, 0x7, 0x23, 0x2, 
    0x2, 0x1c2, 0x37, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x7, 0x10, 0x2, 
    0x2, 0x1c4, 0x1c5, 0x7, 0x13, 0x2, 0x2, 0x1c5, 0x1c6, 0x7, 0x13, 0x2, 
    0x2, 0x1c6, 0x1c7, 0x7, 0x21, 0x2, 0x2, 0x1c7, 0x1c8, 0x7, 0x14, 0x2, 
    0x2, 0x1c8, 0x1c9, 0x7, 0x22, 0x2, 0x2, 0x1c9, 0x1ca, 0x7, 0x22, 0x2, 
    0x2, 0x1ca, 0x39, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3d, 0x45, 0x4c, 0x53, 
    0x59, 0x5e, 0x63, 0x89, 0x99, 0x9c, 0xaa, 0xaf, 0xb2, 0xbe, 0xc3, 0xc8, 
    0xcb, 0xd5, 0xda, 0xdf, 0xe4, 0xe7, 0xee, 0xf3, 0xf8, 0xfd, 0x102, 0x105, 
    0x10c, 0x111, 0x116, 0x11b, 0x120, 0x125, 0x128, 0x12b, 0x13a, 0x141, 
    0x145, 0x155, 0x159, 0x163, 0x169, 0x170, 0x177, 0x17e, 0x186, 0x18c, 
    0x194, 0x19a, 0x19f, 0x1a5, 0x1ab, 0x1b0, 
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
