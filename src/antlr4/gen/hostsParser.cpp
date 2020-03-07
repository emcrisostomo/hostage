
// Generated from /Users/enrico/CLionProjects/hostage/hosts.g4 by ANTLR 4.8


#include "hostsListener.h"
#include "hostsVisitor.h"

#include "hostsParser.h"


using namespace antlrcpp;
using namespace antlr4;

hostsParser::hostsParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

hostsParser::~hostsParser() {
  delete _interpreter;
}

std::string hostsParser::getGrammarFileName() const {
  return "hosts.g4";
}

const std::vector<std::string>& hostsParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& hostsParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Hosts_fileContext ------------------------------------------------------------------

hostsParser::Hosts_fileContext::Hosts_fileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hostsParser::Hosts_fileContext::EOF() {
  return getToken(hostsParser::EOF, 0);
}

std::vector<hostsParser::LineContext *> hostsParser::Hosts_fileContext::line() {
  return getRuleContexts<hostsParser::LineContext>();
}

hostsParser::LineContext* hostsParser::Hosts_fileContext::line(size_t i) {
  return getRuleContext<hostsParser::LineContext>(i);
}


size_t hostsParser::Hosts_fileContext::getRuleIndex() const {
  return hostsParser::RuleHosts_file;
}

void hostsParser::Hosts_fileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHosts_file(this);
}

void hostsParser::Hosts_fileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHosts_file(this);
}


antlrcpp::Any hostsParser::Hosts_fileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitHosts_file(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::Hosts_fileContext* hostsParser::hosts_file() {
  Hosts_fileContext *_localctx = _tracker.createInstance<Hosts_fileContext>(_ctx, getState());
  enterRule(_localctx, 0, hostsParser::RuleHosts_file);
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
      ((1ULL << _la) & ((1ULL << hostsParser::T__2)
      | (1ULL << hostsParser::T__6)
      | (1ULL << hostsParser::NewLine)
      | (1ULL << hostsParser::Space)
      | (1ULL << hostsParser::D0)
      | (1ULL << hostsParser::D1)
      | (1ULL << hostsParser::D2)
      | (1ULL << hostsParser::D3)
      | (1ULL << hostsParser::D4)
      | (1ULL << hostsParser::D5)
      | (1ULL << hostsParser::D6)
      | (1ULL << hostsParser::D7)
      | (1ULL << hostsParser::D8)
      | (1ULL << hostsParser::D9)
      | (1ULL << hostsParser::A)
      | (1ULL << hostsParser::B)
      | (1ULL << hostsParser::C)
      | (1ULL << hostsParser::D)
      | (1ULL << hostsParser::E)
      | (1ULL << hostsParser::F))) != 0)) {
      setState(40);
      line();
      setState(45);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(46);
    match(hostsParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

hostsParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hostsParser::CommentContext* hostsParser::LineContext::comment() {
  return getRuleContext<hostsParser::CommentContext>(0);
}

hostsParser::Table_entryContext* hostsParser::LineContext::table_entry() {
  return getRuleContext<hostsParser::Table_entryContext>(0);
}

hostsParser::Empty_lineContext* hostsParser::LineContext::empty_line() {
  return getRuleContext<hostsParser::Empty_lineContext>(0);
}


size_t hostsParser::LineContext::getRuleIndex() const {
  return hostsParser::RuleLine;
}

void hostsParser::LineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine(this);
}

void hostsParser::LineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine(this);
}


antlrcpp::Any hostsParser::LineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitLine(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::LineContext* hostsParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 2, hostsParser::RuleLine);

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
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Empty_lineContext ------------------------------------------------------------------

hostsParser::Empty_lineContext::Empty_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hostsParser::Empty_lineContext::NewLine() {
  return getToken(hostsParser::NewLine, 0);
}

std::vector<tree::TerminalNode *> hostsParser::Empty_lineContext::Space() {
  return getTokens(hostsParser::Space);
}

tree::TerminalNode* hostsParser::Empty_lineContext::Space(size_t i) {
  return getToken(hostsParser::Space, i);
}


size_t hostsParser::Empty_lineContext::getRuleIndex() const {
  return hostsParser::RuleEmpty_line;
}

void hostsParser::Empty_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmpty_line(this);
}

void hostsParser::Empty_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmpty_line(this);
}


antlrcpp::Any hostsParser::Empty_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitEmpty_line(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::Empty_lineContext* hostsParser::empty_line() {
  Empty_lineContext *_localctx = _tracker.createInstance<Empty_lineContext>(_ctx, getState());
  enterRule(_localctx, 4, hostsParser::RuleEmpty_line);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hostsParser::Space) {
      setState(53);
      match(hostsParser::Space);
      setState(58);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(59);
    match(hostsParser::NewLine);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Table_entryContext ------------------------------------------------------------------

hostsParser::Table_entryContext::Table_entryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hostsParser::AddressContext* hostsParser::Table_entryContext::address() {
  return getRuleContext<hostsParser::AddressContext>(0);
}

hostsParser::Host_nameContext* hostsParser::Table_entryContext::host_name() {
  return getRuleContext<hostsParser::Host_nameContext>(0);
}

tree::TerminalNode* hostsParser::Table_entryContext::NewLine() {
  return getToken(hostsParser::NewLine, 0);
}

std::vector<tree::TerminalNode *> hostsParser::Table_entryContext::Space() {
  return getTokens(hostsParser::Space);
}

tree::TerminalNode* hostsParser::Table_entryContext::Space(size_t i) {
  return getToken(hostsParser::Space, i);
}

hostsParser::AliasesContext* hostsParser::Table_entryContext::aliases() {
  return getRuleContext<hostsParser::AliasesContext>(0);
}


size_t hostsParser::Table_entryContext::getRuleIndex() const {
  return hostsParser::RuleTable_entry;
}

void hostsParser::Table_entryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTable_entry(this);
}

void hostsParser::Table_entryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTable_entry(this);
}


antlrcpp::Any hostsParser::Table_entryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitTable_entry(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::Table_entryContext* hostsParser::table_entry() {
  Table_entryContext *_localctx = _tracker.createInstance<Table_entryContext>(_ctx, getState());
  enterRule(_localctx, 6, hostsParser::RuleTable_entry);
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
      match(hostsParser::Space);
      setState(65); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hostsParser::Space);
    setState(67);
    host_name();
    setState(69);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == hostsParser::Space) {
      setState(68);
      aliases();
    }
    setState(71);
    match(hostsParser::NewLine);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddressContext ------------------------------------------------------------------

hostsParser::AddressContext::AddressContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hostsParser::Ip_v4_addressContext* hostsParser::AddressContext::ip_v4_address() {
  return getRuleContext<hostsParser::Ip_v4_addressContext>(0);
}

hostsParser::Ip_v6_addressContext* hostsParser::AddressContext::ip_v6_address() {
  return getRuleContext<hostsParser::Ip_v6_addressContext>(0);
}


size_t hostsParser::AddressContext::getRuleIndex() const {
  return hostsParser::RuleAddress;
}

void hostsParser::AddressContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddress(this);
}

void hostsParser::AddressContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddress(this);
}


antlrcpp::Any hostsParser::AddressContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitAddress(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::AddressContext* hostsParser::address() {
  AddressContext *_localctx = _tracker.createInstance<AddressContext>(_ctx, getState());
  enterRule(_localctx, 8, hostsParser::RuleAddress);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(73);
      ip_v4_address();
      break;
    }

    case 2: {
      setState(74);
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

hostsParser::Ip_v4_addressContext::Ip_v4_addressContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hostsParser::Dec_octetContext *> hostsParser::Ip_v4_addressContext::dec_octet() {
  return getRuleContexts<hostsParser::Dec_octetContext>();
}

hostsParser::Dec_octetContext* hostsParser::Ip_v4_addressContext::dec_octet(size_t i) {
  return getRuleContext<hostsParser::Dec_octetContext>(i);
}


size_t hostsParser::Ip_v4_addressContext::getRuleIndex() const {
  return hostsParser::RuleIp_v4_address;
}

void hostsParser::Ip_v4_addressContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIp_v4_address(this);
}

void hostsParser::Ip_v4_addressContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIp_v4_address(this);
}


antlrcpp::Any hostsParser::Ip_v4_addressContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitIp_v4_address(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::Ip_v4_addressContext* hostsParser::ip_v4_address() {
  Ip_v4_addressContext *_localctx = _tracker.createInstance<Ip_v4_addressContext>(_ctx, getState());
  enterRule(_localctx, 10, hostsParser::RuleIp_v4_address);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    dec_octet();
    setState(78);
    match(hostsParser::T__0);
    setState(79);
    dec_octet();
    setState(80);
    match(hostsParser::T__0);
    setState(81);
    dec_octet();
    setState(82);
    match(hostsParser::T__0);
    setState(83);
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

hostsParser::Ip_v6_addressContext::Ip_v6_addressContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hostsParser::H16Context *> hostsParser::Ip_v6_addressContext::h16() {
  return getRuleContexts<hostsParser::H16Context>();
}

hostsParser::H16Context* hostsParser::Ip_v6_addressContext::h16(size_t i) {
  return getRuleContext<hostsParser::H16Context>(i);
}

hostsParser::Ls32Context* hostsParser::Ip_v6_addressContext::ls32() {
  return getRuleContext<hostsParser::Ls32Context>(0);
}


size_t hostsParser::Ip_v6_addressContext::getRuleIndex() const {
  return hostsParser::RuleIp_v6_address;
}

void hostsParser::Ip_v6_addressContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIp_v6_address(this);
}

void hostsParser::Ip_v6_addressContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIp_v6_address(this);
}


antlrcpp::Any hostsParser::Ip_v6_addressContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitIp_v6_address(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::Ip_v6_addressContext* hostsParser::ip_v6_address() {
  Ip_v6_addressContext *_localctx = _tracker.createInstance<Ip_v6_addressContext>(_ctx, getState());
  enterRule(_localctx, 12, hostsParser::RuleIp_v6_address);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(275);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(85);
      h16();
      setState(86);
      match(hostsParser::T__1);
      setState(87);
      h16();
      setState(88);
      match(hostsParser::T__1);
      setState(89);
      h16();
      setState(90);
      match(hostsParser::T__1);
      setState(91);
      h16();
      setState(92);
      match(hostsParser::T__1);
      setState(93);
      h16();
      setState(94);
      match(hostsParser::T__1);
      setState(95);
      h16();
      setState(96);
      match(hostsParser::T__1);
      setState(97);
      ls32();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(99);
      match(hostsParser::T__2);
      setState(100);
      h16();
      setState(101);
      match(hostsParser::T__1);
      setState(102);
      h16();
      setState(103);
      match(hostsParser::T__1);
      setState(104);
      h16();
      setState(105);
      match(hostsParser::T__1);
      setState(106);
      h16();
      setState(107);
      match(hostsParser::T__1);
      setState(108);
      h16();
      setState(109);
      match(hostsParser::T__1);
      setState(110);
      ls32();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(113);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hostsParser::D0)
        | (1ULL << hostsParser::D1)
        | (1ULL << hostsParser::D2)
        | (1ULL << hostsParser::D3)
        | (1ULL << hostsParser::D4)
        | (1ULL << hostsParser::D5)
        | (1ULL << hostsParser::D6)
        | (1ULL << hostsParser::D7)
        | (1ULL << hostsParser::D8)
        | (1ULL << hostsParser::D9)
        | (1ULL << hostsParser::A)
        | (1ULL << hostsParser::B)
        | (1ULL << hostsParser::C)
        | (1ULL << hostsParser::D)
        | (1ULL << hostsParser::E)
        | (1ULL << hostsParser::F))) != 0)) {
        setState(112);
        h16();
      }
      setState(115);
      match(hostsParser::T__2);
      setState(116);
      h16();
      setState(117);
      match(hostsParser::T__1);
      setState(118);
      h16();
      setState(119);
      match(hostsParser::T__1);
      setState(120);
      h16();
      setState(121);
      match(hostsParser::T__1);
      setState(122);
      h16();
      setState(123);
      match(hostsParser::T__1);
      setState(124);
      ls32();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(132);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hostsParser::D0)
        | (1ULL << hostsParser::D1)
        | (1ULL << hostsParser::D2)
        | (1ULL << hostsParser::D3)
        | (1ULL << hostsParser::D4)
        | (1ULL << hostsParser::D5)
        | (1ULL << hostsParser::D6)
        | (1ULL << hostsParser::D7)
        | (1ULL << hostsParser::D8)
        | (1ULL << hostsParser::D9)
        | (1ULL << hostsParser::A)
        | (1ULL << hostsParser::B)
        | (1ULL << hostsParser::C)
        | (1ULL << hostsParser::D)
        | (1ULL << hostsParser::E)
        | (1ULL << hostsParser::F))) != 0)) {
        setState(129);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          setState(126);
          h16();
          setState(127);
          match(hostsParser::T__1);
          break;
        }

        }
        setState(131);
        h16();
      }
      setState(134);
      match(hostsParser::T__2);
      setState(135);
      h16();
      setState(136);
      match(hostsParser::T__1);
      setState(137);
      h16();
      setState(138);
      match(hostsParser::T__1);
      setState(139);
      h16();
      setState(140);
      match(hostsParser::T__1);
      setState(141);
      ls32();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(154);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hostsParser::D0)
        | (1ULL << hostsParser::D1)
        | (1ULL << hostsParser::D2)
        | (1ULL << hostsParser::D3)
        | (1ULL << hostsParser::D4)
        | (1ULL << hostsParser::D5)
        | (1ULL << hostsParser::D6)
        | (1ULL << hostsParser::D7)
        | (1ULL << hostsParser::D8)
        | (1ULL << hostsParser::D9)
        | (1ULL << hostsParser::A)
        | (1ULL << hostsParser::B)
        | (1ULL << hostsParser::C)
        | (1ULL << hostsParser::D)
        | (1ULL << hostsParser::E)
        | (1ULL << hostsParser::F))) != 0)) {
        setState(151);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          setState(146);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
          case 1: {
            setState(143);
            h16();
            setState(144);
            match(hostsParser::T__1);
            break;
          }

          }
          setState(148);
          h16();
          setState(149);
          match(hostsParser::T__1);
          break;
        }

        }
        setState(153);
        h16();
      }
      setState(156);
      match(hostsParser::T__2);
      setState(157);
      h16();
      setState(158);
      match(hostsParser::T__1);
      setState(159);
      h16();
      setState(160);
      match(hostsParser::T__1);
      setState(161);
      ls32();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(179);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hostsParser::D0)
        | (1ULL << hostsParser::D1)
        | (1ULL << hostsParser::D2)
        | (1ULL << hostsParser::D3)
        | (1ULL << hostsParser::D4)
        | (1ULL << hostsParser::D5)
        | (1ULL << hostsParser::D6)
        | (1ULL << hostsParser::D7)
        | (1ULL << hostsParser::D8)
        | (1ULL << hostsParser::D9)
        | (1ULL << hostsParser::A)
        | (1ULL << hostsParser::B)
        | (1ULL << hostsParser::C)
        | (1ULL << hostsParser::D)
        | (1ULL << hostsParser::E)
        | (1ULL << hostsParser::F))) != 0)) {
        setState(176);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          setState(171);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
          case 1: {
            setState(166);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
            case 1: {
              setState(163);
              h16();
              setState(164);
              match(hostsParser::T__1);
              break;
            }

            }
            setState(168);
            h16();
            setState(169);
            match(hostsParser::T__1);
            break;
          }

          }
          setState(173);
          h16();
          setState(174);
          match(hostsParser::T__1);
          break;
        }

        }
        setState(178);
        h16();
      }
      setState(181);
      match(hostsParser::T__2);
      setState(182);
      h16();
      setState(183);
      match(hostsParser::T__1);
      setState(184);
      ls32();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(207);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hostsParser::D0)
        | (1ULL << hostsParser::D1)
        | (1ULL << hostsParser::D2)
        | (1ULL << hostsParser::D3)
        | (1ULL << hostsParser::D4)
        | (1ULL << hostsParser::D5)
        | (1ULL << hostsParser::D6)
        | (1ULL << hostsParser::D7)
        | (1ULL << hostsParser::D8)
        | (1ULL << hostsParser::D9)
        | (1ULL << hostsParser::A)
        | (1ULL << hostsParser::B)
        | (1ULL << hostsParser::C)
        | (1ULL << hostsParser::D)
        | (1ULL << hostsParser::E)
        | (1ULL << hostsParser::F))) != 0)) {
        setState(204);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          setState(199);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
          case 1: {
            setState(194);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
            case 1: {
              setState(189);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
              case 1: {
                setState(186);
                h16();
                setState(187);
                match(hostsParser::T__1);
                break;
              }

              }
              setState(191);
              h16();
              setState(192);
              match(hostsParser::T__1);
              break;
            }

            }
            setState(196);
            h16();
            setState(197);
            match(hostsParser::T__1);
            break;
          }

          }
          setState(201);
          h16();
          setState(202);
          match(hostsParser::T__1);
          break;
        }

        }
        setState(206);
        h16();
      }
      setState(209);
      match(hostsParser::T__2);
      setState(210);
      ls32();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(237);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hostsParser::D0)
        | (1ULL << hostsParser::D1)
        | (1ULL << hostsParser::D2)
        | (1ULL << hostsParser::D3)
        | (1ULL << hostsParser::D4)
        | (1ULL << hostsParser::D5)
        | (1ULL << hostsParser::D6)
        | (1ULL << hostsParser::D7)
        | (1ULL << hostsParser::D8)
        | (1ULL << hostsParser::D9)
        | (1ULL << hostsParser::A)
        | (1ULL << hostsParser::B)
        | (1ULL << hostsParser::C)
        | (1ULL << hostsParser::D)
        | (1ULL << hostsParser::E)
        | (1ULL << hostsParser::F))) != 0)) {
        setState(234);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          setState(229);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
          case 1: {
            setState(224);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
            case 1: {
              setState(219);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
              case 1: {
                setState(214);
                _errHandler->sync(this);

                switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
                case 1: {
                  setState(211);
                  h16();
                  setState(212);
                  match(hostsParser::T__1);
                  break;
                }

                }
                setState(216);
                h16();
                setState(217);
                match(hostsParser::T__1);
                break;
              }

              }
              setState(221);
              h16();
              setState(222);
              match(hostsParser::T__1);
              break;
            }

            }
            setState(226);
            h16();
            setState(227);
            match(hostsParser::T__1);
            break;
          }

          }
          setState(231);
          h16();
          setState(232);
          match(hostsParser::T__1);
          break;
        }

        }
        setState(236);
        h16();
      }
      setState(239);
      match(hostsParser::T__2);
      setState(240);
      h16();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(272);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hostsParser::D0)
        | (1ULL << hostsParser::D1)
        | (1ULL << hostsParser::D2)
        | (1ULL << hostsParser::D3)
        | (1ULL << hostsParser::D4)
        | (1ULL << hostsParser::D5)
        | (1ULL << hostsParser::D6)
        | (1ULL << hostsParser::D7)
        | (1ULL << hostsParser::D8)
        | (1ULL << hostsParser::D9)
        | (1ULL << hostsParser::A)
        | (1ULL << hostsParser::B)
        | (1ULL << hostsParser::C)
        | (1ULL << hostsParser::D)
        | (1ULL << hostsParser::E)
        | (1ULL << hostsParser::F))) != 0)) {
        setState(269);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
        case 1: {
          setState(264);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
          case 1: {
            setState(259);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
            case 1: {
              setState(254);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
              case 1: {
                setState(249);
                _errHandler->sync(this);

                switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
                case 1: {
                  setState(244);
                  _errHandler->sync(this);

                  switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
                  case 1: {
                    setState(241);
                    h16();
                    setState(242);
                    match(hostsParser::T__1);
                    break;
                  }

                  }
                  setState(246);
                  h16();
                  setState(247);
                  match(hostsParser::T__1);
                  break;
                }

                }
                setState(251);
                h16();
                setState(252);
                match(hostsParser::T__1);
                break;
              }

              }
              setState(256);
              h16();
              setState(257);
              match(hostsParser::T__1);
              break;
            }

            }
            setState(261);
            h16();
            setState(262);
            match(hostsParser::T__1);
            break;
          }

          }
          setState(266);
          h16();
          setState(267);
          match(hostsParser::T__1);
          break;
        }

        }
        setState(271);
        h16();
      }
      setState(274);
      match(hostsParser::T__2);
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

hostsParser::H16Context::H16Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hostsParser::HexdigContext *> hostsParser::H16Context::hexdig() {
  return getRuleContexts<hostsParser::HexdigContext>();
}

hostsParser::HexdigContext* hostsParser::H16Context::hexdig(size_t i) {
  return getRuleContext<hostsParser::HexdigContext>(i);
}


size_t hostsParser::H16Context::getRuleIndex() const {
  return hostsParser::RuleH16;
}

void hostsParser::H16Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterH16(this);
}

void hostsParser::H16Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitH16(this);
}


antlrcpp::Any hostsParser::H16Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitH16(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::H16Context* hostsParser::h16() {
  H16Context *_localctx = _tracker.createInstance<H16Context>(_ctx, getState());
  enterRule(_localctx, 14, hostsParser::RuleH16);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(290);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(277);
      hexdig();
      setState(278);
      hexdig();
      setState(279);
      hexdig();
      setState(280);
      hexdig();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(282);
      hexdig();
      setState(283);
      hexdig();
      setState(284);
      hexdig();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(286);
      hexdig();
      setState(287);
      hexdig();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(289);
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

hostsParser::Ls32Context::Ls32Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hostsParser::H16Context *> hostsParser::Ls32Context::h16() {
  return getRuleContexts<hostsParser::H16Context>();
}

hostsParser::H16Context* hostsParser::Ls32Context::h16(size_t i) {
  return getRuleContext<hostsParser::H16Context>(i);
}

hostsParser::Ip_v4_addressContext* hostsParser::Ls32Context::ip_v4_address() {
  return getRuleContext<hostsParser::Ip_v4_addressContext>(0);
}


size_t hostsParser::Ls32Context::getRuleIndex() const {
  return hostsParser::RuleLs32;
}

void hostsParser::Ls32Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLs32(this);
}

void hostsParser::Ls32Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLs32(this);
}


antlrcpp::Any hostsParser::Ls32Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitLs32(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::Ls32Context* hostsParser::ls32() {
  Ls32Context *_localctx = _tracker.createInstance<Ls32Context>(_ctx, getState());
  enterRule(_localctx, 16, hostsParser::RuleLs32);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(297);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(292);
      h16();
      setState(293);
      match(hostsParser::T__1);
      setState(294);
      h16();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(296);
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

hostsParser::HexdigContext::HexdigContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hostsParser::DigitContext* hostsParser::HexdigContext::digit() {
  return getRuleContext<hostsParser::DigitContext>(0);
}

tree::TerminalNode* hostsParser::HexdigContext::A() {
  return getToken(hostsParser::A, 0);
}

tree::TerminalNode* hostsParser::HexdigContext::B() {
  return getToken(hostsParser::B, 0);
}

tree::TerminalNode* hostsParser::HexdigContext::C() {
  return getToken(hostsParser::C, 0);
}

tree::TerminalNode* hostsParser::HexdigContext::D() {
  return getToken(hostsParser::D, 0);
}

tree::TerminalNode* hostsParser::HexdigContext::E() {
  return getToken(hostsParser::E, 0);
}

tree::TerminalNode* hostsParser::HexdigContext::F() {
  return getToken(hostsParser::F, 0);
}


size_t hostsParser::HexdigContext::getRuleIndex() const {
  return hostsParser::RuleHexdig;
}

void hostsParser::HexdigContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHexdig(this);
}

void hostsParser::HexdigContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHexdig(this);
}


antlrcpp::Any hostsParser::HexdigContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitHexdig(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::HexdigContext* hostsParser::hexdig() {
  HexdigContext *_localctx = _tracker.createInstance<HexdigContext>(_ctx, getState());
  enterRule(_localctx, 18, hostsParser::RuleHexdig);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(301);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hostsParser::D0:
      case hostsParser::D1:
      case hostsParser::D2:
      case hostsParser::D3:
      case hostsParser::D4:
      case hostsParser::D5:
      case hostsParser::D6:
      case hostsParser::D7:
      case hostsParser::D8:
      case hostsParser::D9: {
        enterOuterAlt(_localctx, 1);
        setState(299);
        digit();
        break;
      }

      case hostsParser::A:
      case hostsParser::B:
      case hostsParser::C:
      case hostsParser::D:
      case hostsParser::E:
      case hostsParser::F: {
        enterOuterAlt(_localctx, 2);
        setState(300);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << hostsParser::A)
          | (1ULL << hostsParser::B)
          | (1ULL << hostsParser::C)
          | (1ULL << hostsParser::D)
          | (1ULL << hostsParser::E)
          | (1ULL << hostsParser::F))) != 0))) {
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

hostsParser::Dec_octetContext::Dec_octetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hostsParser::DigitContext *> hostsParser::Dec_octetContext::digit() {
  return getRuleContexts<hostsParser::DigitContext>();
}

hostsParser::DigitContext* hostsParser::Dec_octetContext::digit(size_t i) {
  return getRuleContext<hostsParser::DigitContext>(i);
}

hostsParser::Non_zero_digitContext* hostsParser::Dec_octetContext::non_zero_digit() {
  return getRuleContext<hostsParser::Non_zero_digitContext>(0);
}

tree::TerminalNode* hostsParser::Dec_octetContext::D1() {
  return getToken(hostsParser::D1, 0);
}

std::vector<tree::TerminalNode *> hostsParser::Dec_octetContext::D2() {
  return getTokens(hostsParser::D2);
}

tree::TerminalNode* hostsParser::Dec_octetContext::D2(size_t i) {
  return getToken(hostsParser::D2, i);
}

tree::TerminalNode* hostsParser::Dec_octetContext::D0() {
  return getToken(hostsParser::D0, 0);
}

tree::TerminalNode* hostsParser::Dec_octetContext::D3() {
  return getToken(hostsParser::D3, 0);
}

tree::TerminalNode* hostsParser::Dec_octetContext::D4() {
  return getToken(hostsParser::D4, 0);
}

std::vector<tree::TerminalNode *> hostsParser::Dec_octetContext::D5() {
  return getTokens(hostsParser::D5);
}

tree::TerminalNode* hostsParser::Dec_octetContext::D5(size_t i) {
  return getToken(hostsParser::D5, i);
}


size_t hostsParser::Dec_octetContext::getRuleIndex() const {
  return hostsParser::RuleDec_octet;
}

void hostsParser::Dec_octetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDec_octet(this);
}

void hostsParser::Dec_octetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDec_octet(this);
}


antlrcpp::Any hostsParser::Dec_octetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitDec_octet(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::Dec_octetContext* hostsParser::dec_octet() {
  Dec_octetContext *_localctx = _tracker.createInstance<Dec_octetContext>(_ctx, getState());
  enterRule(_localctx, 20, hostsParser::RuleDec_octet);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(317);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(303);
      digit();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(304);
      non_zero_digit();
      setState(305);
      digit();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(307);
      match(hostsParser::D1);
      setState(308);
      digit();
      setState(309);
      digit();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(311);
      match(hostsParser::D2);
      setState(312);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hostsParser::D0)
        | (1ULL << hostsParser::D1)
        | (1ULL << hostsParser::D2)
        | (1ULL << hostsParser::D3)
        | (1ULL << hostsParser::D4))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(313);
      digit();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(314);
      match(hostsParser::D2);
      setState(315);
      match(hostsParser::D5);
      setState(316);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << hostsParser::D0)
        | (1ULL << hostsParser::D1)
        | (1ULL << hostsParser::D2)
        | (1ULL << hostsParser::D3)
        | (1ULL << hostsParser::D4)
        | (1ULL << hostsParser::D5))) != 0))) {
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

hostsParser::DigitContext::DigitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hostsParser::DigitContext::D0() {
  return getToken(hostsParser::D0, 0);
}

hostsParser::Non_zero_digitContext* hostsParser::DigitContext::non_zero_digit() {
  return getRuleContext<hostsParser::Non_zero_digitContext>(0);
}


size_t hostsParser::DigitContext::getRuleIndex() const {
  return hostsParser::RuleDigit;
}

void hostsParser::DigitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDigit(this);
}

void hostsParser::DigitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDigit(this);
}


antlrcpp::Any hostsParser::DigitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitDigit(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::DigitContext* hostsParser::digit() {
  DigitContext *_localctx = _tracker.createInstance<DigitContext>(_ctx, getState());
  enterRule(_localctx, 22, hostsParser::RuleDigit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(321);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hostsParser::D0: {
        enterOuterAlt(_localctx, 1);
        setState(319);
        match(hostsParser::D0);
        break;
      }

      case hostsParser::D1:
      case hostsParser::D2:
      case hostsParser::D3:
      case hostsParser::D4:
      case hostsParser::D5:
      case hostsParser::D6:
      case hostsParser::D7:
      case hostsParser::D8:
      case hostsParser::D9: {
        enterOuterAlt(_localctx, 2);
        setState(320);
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

hostsParser::Non_zero_digitContext::Non_zero_digitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hostsParser::Non_zero_digitContext::D1() {
  return getToken(hostsParser::D1, 0);
}

tree::TerminalNode* hostsParser::Non_zero_digitContext::D2() {
  return getToken(hostsParser::D2, 0);
}

tree::TerminalNode* hostsParser::Non_zero_digitContext::D3() {
  return getToken(hostsParser::D3, 0);
}

tree::TerminalNode* hostsParser::Non_zero_digitContext::D4() {
  return getToken(hostsParser::D4, 0);
}

tree::TerminalNode* hostsParser::Non_zero_digitContext::D5() {
  return getToken(hostsParser::D5, 0);
}

tree::TerminalNode* hostsParser::Non_zero_digitContext::D6() {
  return getToken(hostsParser::D6, 0);
}

tree::TerminalNode* hostsParser::Non_zero_digitContext::D7() {
  return getToken(hostsParser::D7, 0);
}

tree::TerminalNode* hostsParser::Non_zero_digitContext::D8() {
  return getToken(hostsParser::D8, 0);
}

tree::TerminalNode* hostsParser::Non_zero_digitContext::D9() {
  return getToken(hostsParser::D9, 0);
}


size_t hostsParser::Non_zero_digitContext::getRuleIndex() const {
  return hostsParser::RuleNon_zero_digit;
}

void hostsParser::Non_zero_digitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNon_zero_digit(this);
}

void hostsParser::Non_zero_digitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNon_zero_digit(this);
}


antlrcpp::Any hostsParser::Non_zero_digitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitNon_zero_digit(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::Non_zero_digitContext* hostsParser::non_zero_digit() {
  Non_zero_digitContext *_localctx = _tracker.createInstance<Non_zero_digitContext>(_ctx, getState());
  enterRule(_localctx, 24, hostsParser::RuleNon_zero_digit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << hostsParser::D1)
      | (1ULL << hostsParser::D2)
      | (1ULL << hostsParser::D3)
      | (1ULL << hostsParser::D4)
      | (1ULL << hostsParser::D5)
      | (1ULL << hostsParser::D6)
      | (1ULL << hostsParser::D7)
      | (1ULL << hostsParser::D8)
      | (1ULL << hostsParser::D9))) != 0))) {
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

hostsParser::Host_nameContext::Host_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hostsParser::Ireg_nameContext* hostsParser::Host_nameContext::ireg_name() {
  return getRuleContext<hostsParser::Ireg_nameContext>(0);
}


size_t hostsParser::Host_nameContext::getRuleIndex() const {
  return hostsParser::RuleHost_name;
}

void hostsParser::Host_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHost_name(this);
}

void hostsParser::Host_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHost_name(this);
}


antlrcpp::Any hostsParser::Host_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitHost_name(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::Host_nameContext* hostsParser::host_name() {
  Host_nameContext *_localctx = _tracker.createInstance<Host_nameContext>(_ctx, getState());
  enterRule(_localctx, 26, hostsParser::RuleHost_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
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

hostsParser::AliasesContext::AliasesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hostsParser::AliasContext *> hostsParser::AliasesContext::alias() {
  return getRuleContexts<hostsParser::AliasContext>();
}

hostsParser::AliasContext* hostsParser::AliasesContext::alias(size_t i) {
  return getRuleContext<hostsParser::AliasContext>(i);
}

std::vector<tree::TerminalNode *> hostsParser::AliasesContext::Space() {
  return getTokens(hostsParser::Space);
}

tree::TerminalNode* hostsParser::AliasesContext::Space(size_t i) {
  return getToken(hostsParser::Space, i);
}


size_t hostsParser::AliasesContext::getRuleIndex() const {
  return hostsParser::RuleAliases;
}

void hostsParser::AliasesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAliases(this);
}

void hostsParser::AliasesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAliases(this);
}


antlrcpp::Any hostsParser::AliasesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitAliases(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::AliasesContext* hostsParser::aliases() {
  AliasesContext *_localctx = _tracker.createInstance<AliasesContext>(_ctx, getState());
  enterRule(_localctx, 28, hostsParser::RuleAliases);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(327);
      match(hostsParser::Space);
      setState(330); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hostsParser::Space);
    setState(332);
    alias();
    setState(341);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hostsParser::Space) {
      setState(334); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(333);
        match(hostsParser::Space);
        setState(336); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == hostsParser::Space);
      setState(338);
      alias();
      setState(343);
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

hostsParser::AliasContext::AliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hostsParser::Ireg_nameContext* hostsParser::AliasContext::ireg_name() {
  return getRuleContext<hostsParser::Ireg_nameContext>(0);
}


size_t hostsParser::AliasContext::getRuleIndex() const {
  return hostsParser::RuleAlias;
}

void hostsParser::AliasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlias(this);
}

void hostsParser::AliasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlias(this);
}


antlrcpp::Any hostsParser::AliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitAlias(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::AliasContext* hostsParser::alias() {
  AliasContext *_localctx = _tracker.createInstance<AliasContext>(_ctx, getState());
  enterRule(_localctx, 30, hostsParser::RuleAlias);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(344);
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

hostsParser::Ireg_nameContext::Ireg_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hostsParser::IunreservedContext *> hostsParser::Ireg_nameContext::iunreserved() {
  return getRuleContexts<hostsParser::IunreservedContext>();
}

hostsParser::IunreservedContext* hostsParser::Ireg_nameContext::iunreserved(size_t i) {
  return getRuleContext<hostsParser::IunreservedContext>(i);
}


size_t hostsParser::Ireg_nameContext::getRuleIndex() const {
  return hostsParser::RuleIreg_name;
}

void hostsParser::Ireg_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIreg_name(this);
}

void hostsParser::Ireg_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIreg_name(this);
}


antlrcpp::Any hostsParser::Ireg_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitIreg_name(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::Ireg_nameContext* hostsParser::ireg_name() {
  Ireg_nameContext *_localctx = _tracker.createInstance<Ireg_nameContext>(_ctx, getState());
  enterRule(_localctx, 32, hostsParser::RuleIreg_name);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    iunreserved();
    setState(350);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << hostsParser::T__0)
      | (1ULL << hostsParser::T__3)
      | (1ULL << hostsParser::T__4)
      | (1ULL << hostsParser::T__5)
      | (1ULL << hostsParser::UCSCHAR)
      | (1ULL << hostsParser::D0)
      | (1ULL << hostsParser::D1)
      | (1ULL << hostsParser::D2)
      | (1ULL << hostsParser::D3)
      | (1ULL << hostsParser::D4)
      | (1ULL << hostsParser::D5)
      | (1ULL << hostsParser::D6)
      | (1ULL << hostsParser::D7)
      | (1ULL << hostsParser::D8)
      | (1ULL << hostsParser::D9)
      | (1ULL << hostsParser::A)
      | (1ULL << hostsParser::B)
      | (1ULL << hostsParser::C)
      | (1ULL << hostsParser::D)
      | (1ULL << hostsParser::E)
      | (1ULL << hostsParser::F)
      | (1ULL << hostsParser::G)
      | (1ULL << hostsParser::H)
      | (1ULL << hostsParser::I)
      | (1ULL << hostsParser::J)
      | (1ULL << hostsParser::K)
      | (1ULL << hostsParser::L)
      | (1ULL << hostsParser::M)
      | (1ULL << hostsParser::N)
      | (1ULL << hostsParser::O)
      | (1ULL << hostsParser::P)
      | (1ULL << hostsParser::Q)
      | (1ULL << hostsParser::R)
      | (1ULL << hostsParser::S)
      | (1ULL << hostsParser::T)
      | (1ULL << hostsParser::U)
      | (1ULL << hostsParser::V)
      | (1ULL << hostsParser::W)
      | (1ULL << hostsParser::X)
      | (1ULL << hostsParser::Y)
      | (1ULL << hostsParser::Z))) != 0)) {
      setState(347);
      iunreserved();
      setState(352);
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

hostsParser::IunreservedContext::IunreservedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hostsParser::AlphaContext* hostsParser::IunreservedContext::alpha() {
  return getRuleContext<hostsParser::AlphaContext>(0);
}

hostsParser::DigitContext* hostsParser::IunreservedContext::digit() {
  return getRuleContext<hostsParser::DigitContext>(0);
}

tree::TerminalNode* hostsParser::IunreservedContext::UCSCHAR() {
  return getToken(hostsParser::UCSCHAR, 0);
}


size_t hostsParser::IunreservedContext::getRuleIndex() const {
  return hostsParser::RuleIunreserved;
}

void hostsParser::IunreservedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIunreserved(this);
}

void hostsParser::IunreservedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIunreserved(this);
}


antlrcpp::Any hostsParser::IunreservedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitIunreserved(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::IunreservedContext* hostsParser::iunreserved() {
  IunreservedContext *_localctx = _tracker.createInstance<IunreservedContext>(_ctx, getState());
  enterRule(_localctx, 34, hostsParser::RuleIunreserved);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(356);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hostsParser::A:
      case hostsParser::B:
      case hostsParser::C:
      case hostsParser::D:
      case hostsParser::E:
      case hostsParser::F:
      case hostsParser::G:
      case hostsParser::H:
      case hostsParser::I:
      case hostsParser::J:
      case hostsParser::K:
      case hostsParser::L:
      case hostsParser::M:
      case hostsParser::N:
      case hostsParser::O:
      case hostsParser::P:
      case hostsParser::Q:
      case hostsParser::R:
      case hostsParser::S:
      case hostsParser::T:
      case hostsParser::U:
      case hostsParser::V:
      case hostsParser::W:
      case hostsParser::X:
      case hostsParser::Y:
      case hostsParser::Z: {
        enterOuterAlt(_localctx, 1);
        setState(353);
        alpha();
        break;
      }

      case hostsParser::D0:
      case hostsParser::D1:
      case hostsParser::D2:
      case hostsParser::D3:
      case hostsParser::D4:
      case hostsParser::D5:
      case hostsParser::D6:
      case hostsParser::D7:
      case hostsParser::D8:
      case hostsParser::D9: {
        enterOuterAlt(_localctx, 2);
        setState(354);
        digit();
        break;
      }

      case hostsParser::T__0:
      case hostsParser::T__3:
      case hostsParser::T__4:
      case hostsParser::T__5:
      case hostsParser::UCSCHAR: {
        enterOuterAlt(_localctx, 3);
        setState(355);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << hostsParser::T__0)
          | (1ULL << hostsParser::T__3)
          | (1ULL << hostsParser::T__4)
          | (1ULL << hostsParser::T__5)
          | (1ULL << hostsParser::UCSCHAR))) != 0))) {
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

hostsParser::AlphaContext::AlphaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hostsParser::AlphaContext::A() {
  return getToken(hostsParser::A, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::B() {
  return getToken(hostsParser::B, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::C() {
  return getToken(hostsParser::C, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::D() {
  return getToken(hostsParser::D, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::E() {
  return getToken(hostsParser::E, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::F() {
  return getToken(hostsParser::F, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::G() {
  return getToken(hostsParser::G, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::H() {
  return getToken(hostsParser::H, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::I() {
  return getToken(hostsParser::I, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::J() {
  return getToken(hostsParser::J, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::K() {
  return getToken(hostsParser::K, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::L() {
  return getToken(hostsParser::L, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::M() {
  return getToken(hostsParser::M, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::N() {
  return getToken(hostsParser::N, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::O() {
  return getToken(hostsParser::O, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::P() {
  return getToken(hostsParser::P, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::Q() {
  return getToken(hostsParser::Q, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::R() {
  return getToken(hostsParser::R, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::S() {
  return getToken(hostsParser::S, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::T() {
  return getToken(hostsParser::T, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::U() {
  return getToken(hostsParser::U, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::V() {
  return getToken(hostsParser::V, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::W() {
  return getToken(hostsParser::W, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::X() {
  return getToken(hostsParser::X, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::Y() {
  return getToken(hostsParser::Y, 0);
}

tree::TerminalNode* hostsParser::AlphaContext::Z() {
  return getToken(hostsParser::Z, 0);
}


size_t hostsParser::AlphaContext::getRuleIndex() const {
  return hostsParser::RuleAlpha;
}

void hostsParser::AlphaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlpha(this);
}

void hostsParser::AlphaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlpha(this);
}


antlrcpp::Any hostsParser::AlphaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitAlpha(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::AlphaContext* hostsParser::alpha() {
  AlphaContext *_localctx = _tracker.createInstance<AlphaContext>(_ctx, getState());
  enterRule(_localctx, 36, hostsParser::RuleAlpha);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << hostsParser::A)
      | (1ULL << hostsParser::B)
      | (1ULL << hostsParser::C)
      | (1ULL << hostsParser::D)
      | (1ULL << hostsParser::E)
      | (1ULL << hostsParser::F)
      | (1ULL << hostsParser::G)
      | (1ULL << hostsParser::H)
      | (1ULL << hostsParser::I)
      | (1ULL << hostsParser::J)
      | (1ULL << hostsParser::K)
      | (1ULL << hostsParser::L)
      | (1ULL << hostsParser::M)
      | (1ULL << hostsParser::N)
      | (1ULL << hostsParser::O)
      | (1ULL << hostsParser::P)
      | (1ULL << hostsParser::Q)
      | (1ULL << hostsParser::R)
      | (1ULL << hostsParser::S)
      | (1ULL << hostsParser::T)
      | (1ULL << hostsParser::U)
      | (1ULL << hostsParser::V)
      | (1ULL << hostsParser::W)
      | (1ULL << hostsParser::X)
      | (1ULL << hostsParser::Y)
      | (1ULL << hostsParser::Z))) != 0))) {
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

hostsParser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> hostsParser::CommentContext::Space() {
  return getTokens(hostsParser::Space);
}

tree::TerminalNode* hostsParser::CommentContext::Space(size_t i) {
  return getToken(hostsParser::Space, i);
}

std::vector<tree::TerminalNode *> hostsParser::CommentContext::NewLine() {
  return getTokens(hostsParser::NewLine);
}

tree::TerminalNode* hostsParser::CommentContext::NewLine(size_t i) {
  return getToken(hostsParser::NewLine, i);
}


size_t hostsParser::CommentContext::getRuleIndex() const {
  return hostsParser::RuleComment;
}

void hostsParser::CommentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComment(this);
}

void hostsParser::CommentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hostsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComment(this);
}


antlrcpp::Any hostsParser::CommentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitComment(this);
  else
    return visitor->visitChildren(this);
}

hostsParser::CommentContext* hostsParser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 38, hostsParser::RuleComment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(363);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hostsParser::Space) {
      setState(360);
      match(hostsParser::Space);
      setState(365);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(366);
    match(hostsParser::T__6);
    setState(370);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(367);
        _la = _input->LA(1);
        if (_la == 0 || _la == Token::EOF || (_la == hostsParser::NewLine)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(372);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
    setState(376);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(373);
        match(hostsParser::NewLine); 
      }
      setState(378);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
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
std::vector<dfa::DFA> hostsParser::_decisionToDFA;
atn::PredictionContextCache hostsParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN hostsParser::_atn;
std::vector<uint16_t> hostsParser::_serializedATN;

std::vector<std::string> hostsParser::_ruleNames = {
  "hosts_file", "line", "empty_line", "table_entry", "address", "ip_v4_address", 
  "ip_v6_address", "h16", "ls32", "hexdig", "dec_octet", "digit", "non_zero_digit", 
  "host_name", "aliases", "alias", "ireg_name", "iunreserved", "alpha", 
  "comment"
};

std::vector<std::string> hostsParser::_literalNames = {
  "", "'.'", "':'", "'::'", "'-'", "'_'", "'~'", "'#'", "", "", "", "'0'", 
  "'1'", "'2'", "'3'", "'4'", "'5'", "'6'", "'7'", "'8'", "'9'"
};

std::vector<std::string> hostsParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "NewLine", "Space", "UCSCHAR", "D0", "D1", 
  "D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "A", "B", "C", "D", "E", 
  "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", 
  "T", "U", "V", "W", "X", "Y", "Z"
};

dfa::Vocabulary hostsParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> hostsParser::_tokenNames;

hostsParser::Initializer::Initializer() {
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
    0x3, 0x30, 0x17e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x3, 0x2, 0x7, 0x2, 0x2c, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x2f, 
    0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x36, 0xa, 0x3, 0x3, 0x4, 0x7, 0x4, 0x39, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 
    0x3c, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 0x42, 
    0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x43, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x48, 
    0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x4e, 0xa, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0x74, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x84, 0xa, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0x87, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x95, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0x9a, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0x9d, 0xa, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0xa9, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0xae, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xb3, 
    0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0xb6, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xc0, 
    0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xc5, 0xa, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xca, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0xcf, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0xd2, 0xa, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xd9, 0xa, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xde, 0xa, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xe3, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0xe8, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0xed, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0xf0, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xf7, 0xa, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0xfc, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x101, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x106, 
    0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x10b, 0xa, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x110, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0x113, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0x116, 0xa, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x125, 0xa, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x12c, 0xa, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x130, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x140, 0xa, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x144, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x6, 0x10, 0x14b, 0xa, 0x10, 0xd, 0x10, 
    0xe, 0x10, 0x14c, 0x3, 0x10, 0x3, 0x10, 0x6, 0x10, 0x151, 0xa, 0x10, 
    0xd, 0x10, 0xe, 0x10, 0x152, 0x3, 0x10, 0x7, 0x10, 0x156, 0xa, 0x10, 
    0xc, 0x10, 0xe, 0x10, 0x159, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x7, 0x12, 0x15f, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x162, 
    0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x167, 0xa, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x7, 0x15, 0x16c, 0xa, 0x15, 0xc, 0x15, 
    0xe, 0x15, 0x16f, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x173, 
    0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x176, 0xb, 0x15, 0x3, 0x15, 0x7, 0x15, 
    0x179, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x17c, 0xb, 0x15, 0x3, 0x15, 
    0x2, 0x2, 0x16, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2, 0x9, 
    0x3, 0x2, 0x17, 0x1c, 0x3, 0x2, 0xd, 0x11, 0x3, 0x2, 0xd, 0x12, 0x3, 
    0x2, 0xe, 0x16, 0x5, 0x2, 0x3, 0x3, 0x6, 0x8, 0xc, 0xc, 0x3, 0x2, 0x17, 
    0x30, 0x3, 0x2, 0xa, 0xa, 0x2, 0x1a7, 0x2, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x35, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x4d, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x115, 0x3, 0x2, 0x2, 0x2, 0x10, 0x124, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x14, 0x12f, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x18, 0x143, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x145, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x147, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x14a, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x22, 0x15c, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x166, 0x3, 0x2, 0x2, 0x2, 0x26, 0x168, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2c, 0x5, 0x4, 0x3, 
    0x2, 0x2b, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x30, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 
    0x7, 0x2, 0x2, 0x3, 0x31, 0x3, 0x3, 0x2, 0x2, 0x2, 0x32, 0x36, 0x5, 
    0x28, 0x15, 0x2, 0x33, 0x36, 0x5, 0x8, 0x5, 0x2, 0x34, 0x36, 0x5, 0x6, 
    0x4, 0x2, 0x35, 0x32, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x37, 0x39, 0x7, 0xb, 0x2, 0x2, 0x38, 0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 
    0x3, 0x2, 0x2, 0x2, 0x3b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 
    0x2, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0xa, 0x2, 0x2, 0x3e, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x3f, 0x41, 0x5, 0xa, 0x6, 0x2, 0x40, 0x42, 0x7, 0xb, 0x2, 
    0x2, 0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x47, 0x5, 0x1c, 0xf, 0x2, 0x46, 0x48, 
    0x5, 0x1e, 0x10, 0x2, 0x47, 0x46, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 0xa, 
    0x2, 0x2, 0x4a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4e, 0x5, 0xc, 0x7, 
    0x2, 0x4c, 0x4e, 0x5, 0xe, 0x8, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x4d, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4f, 
    0x50, 0x5, 0x16, 0xc, 0x2, 0x50, 0x51, 0x7, 0x3, 0x2, 0x2, 0x51, 0x52, 
    0x5, 0x16, 0xc, 0x2, 0x52, 0x53, 0x7, 0x3, 0x2, 0x2, 0x53, 0x54, 0x5, 
    0x16, 0xc, 0x2, 0x54, 0x55, 0x7, 0x3, 0x2, 0x2, 0x55, 0x56, 0x5, 0x16, 
    0xc, 0x2, 0x56, 0xd, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x5, 0x10, 0x9, 
    0x2, 0x58, 0x59, 0x7, 0x4, 0x2, 0x2, 0x59, 0x5a, 0x5, 0x10, 0x9, 0x2, 
    0x5a, 0x5b, 0x7, 0x4, 0x2, 0x2, 0x5b, 0x5c, 0x5, 0x10, 0x9, 0x2, 0x5c, 
    0x5d, 0x7, 0x4, 0x2, 0x2, 0x5d, 0x5e, 0x5, 0x10, 0x9, 0x2, 0x5e, 0x5f, 
    0x7, 0x4, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x10, 0x9, 0x2, 0x60, 0x61, 0x7, 
    0x4, 0x2, 0x2, 0x61, 0x62, 0x5, 0x10, 0x9, 0x2, 0x62, 0x63, 0x7, 0x4, 
    0x2, 0x2, 0x63, 0x64, 0x5, 0x12, 0xa, 0x2, 0x64, 0x116, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x66, 0x7, 0x5, 0x2, 0x2, 0x66, 0x67, 0x5, 0x10, 0x9, 0x2, 
    0x67, 0x68, 0x7, 0x4, 0x2, 0x2, 0x68, 0x69, 0x5, 0x10, 0x9, 0x2, 0x69, 
    0x6a, 0x7, 0x4, 0x2, 0x2, 0x6a, 0x6b, 0x5, 0x10, 0x9, 0x2, 0x6b, 0x6c, 
    0x7, 0x4, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0x10, 0x9, 0x2, 0x6d, 0x6e, 0x7, 
    0x4, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x10, 0x9, 0x2, 0x6f, 0x70, 0x7, 0x4, 
    0x2, 0x2, 0x70, 0x71, 0x5, 0x12, 0xa, 0x2, 0x71, 0x116, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x74, 0x5, 0x10, 0x9, 0x2, 0x73, 0x72, 0x3, 0x2, 0x2, 0x2, 
    0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0x76, 0x7, 0x5, 0x2, 0x2, 0x76, 0x77, 0x5, 0x10, 0x9, 0x2, 0x77, 0x78, 
    0x7, 0x4, 0x2, 0x2, 0x78, 0x79, 0x5, 0x10, 0x9, 0x2, 0x79, 0x7a, 0x7, 
    0x4, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0x10, 0x9, 0x2, 0x7b, 0x7c, 0x7, 0x4, 
    0x2, 0x2, 0x7c, 0x7d, 0x5, 0x10, 0x9, 0x2, 0x7d, 0x7e, 0x7, 0x4, 0x2, 
    0x2, 0x7e, 0x7f, 0x5, 0x12, 0xa, 0x2, 0x7f, 0x116, 0x3, 0x2, 0x2, 0x2, 
    0x80, 0x81, 0x5, 0x10, 0x9, 0x2, 0x81, 0x82, 0x7, 0x4, 0x2, 0x2, 0x82, 
    0x84, 0x3, 0x2, 0x2, 0x2, 0x83, 0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 
    0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x3, 0x2, 0x2, 0x2, 0x85, 0x87, 0x5, 
    0x10, 0x9, 0x2, 0x86, 0x83, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x7, 0x5, 0x2, 
    0x2, 0x89, 0x8a, 0x5, 0x10, 0x9, 0x2, 0x8a, 0x8b, 0x7, 0x4, 0x2, 0x2, 
    0x8b, 0x8c, 0x5, 0x10, 0x9, 0x2, 0x8c, 0x8d, 0x7, 0x4, 0x2, 0x2, 0x8d, 
    0x8e, 0x5, 0x10, 0x9, 0x2, 0x8e, 0x8f, 0x7, 0x4, 0x2, 0x2, 0x8f, 0x90, 
    0x5, 0x12, 0xa, 0x2, 0x90, 0x116, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x5, 
    0x10, 0x9, 0x2, 0x92, 0x93, 0x7, 0x4, 0x2, 0x2, 0x93, 0x95, 0x3, 0x2, 
    0x2, 0x2, 0x94, 0x91, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x5, 0x10, 0x9, 0x2, 
    0x97, 0x98, 0x7, 0x4, 0x2, 0x2, 0x98, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x99, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 
    0x3, 0x2, 0x2, 0x2, 0x9b, 0x9d, 0x5, 0x10, 0x9, 0x2, 0x9c, 0x99, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 
    0x2, 0x2, 0x9e, 0x9f, 0x7, 0x5, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0x10, 0x9, 
    0x2, 0xa0, 0xa1, 0x7, 0x4, 0x2, 0x2, 0xa1, 0xa2, 0x5, 0x10, 0x9, 0x2, 
    0xa2, 0xa3, 0x7, 0x4, 0x2, 0x2, 0xa3, 0xa4, 0x5, 0x12, 0xa, 0x2, 0xa4, 
    0x116, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x5, 0x10, 0x9, 0x2, 0xa6, 0xa7, 
    0x7, 0x4, 0x2, 0x2, 0xa7, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa5, 0x3, 
    0x2, 0x2, 0x2, 0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 
    0x2, 0x2, 0xaa, 0xab, 0x5, 0x10, 0x9, 0x2, 0xab, 0xac, 0x7, 0x4, 0x2, 
    0x2, 0xac, 0xae, 0x3, 0x2, 0x2, 0x2, 0xad, 0xa8, 0x3, 0x2, 0x2, 0x2, 
    0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0xb0, 0x5, 0x10, 0x9, 0x2, 0xb0, 0xb1, 0x7, 0x4, 0x2, 0x2, 0xb1, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0xb2, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb6, 0x5, 0x10, 
    0x9, 0x2, 0xb5, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 
    0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x5, 0x2, 0x2, 
    0xb8, 0xb9, 0x5, 0x10, 0x9, 0x2, 0xb9, 0xba, 0x7, 0x4, 0x2, 0x2, 0xba, 
    0xbb, 0x5, 0x12, 0xa, 0x2, 0xbb, 0x116, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 
    0x5, 0x10, 0x9, 0x2, 0xbd, 0xbe, 0x7, 0x4, 0x2, 0x2, 0xbe, 0xc0, 0x3, 
    0x2, 0x2, 0x2, 0xbf, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 
    0x2, 0x2, 0xc0, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0x10, 0x9, 
    0x2, 0xc2, 0xc3, 0x7, 0x4, 0x2, 0x2, 0xc3, 0xc5, 0x3, 0x2, 0x2, 0x2, 
    0xc4, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc5, 
    0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0x10, 0x9, 0x2, 0xc7, 0xc8, 
    0x7, 0x4, 0x2, 0x2, 0xc8, 0xca, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc4, 0x3, 
    0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 
    0x2, 0x2, 0xcb, 0xcc, 0x5, 0x10, 0x9, 0x2, 0xcc, 0xcd, 0x7, 0x4, 0x2, 
    0x2, 0xcd, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xce, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 
    0xd2, 0x5, 0x10, 0x9, 0x2, 0xd1, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 
    0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x7, 
    0x5, 0x2, 0x2, 0xd4, 0x116, 0x5, 0x12, 0xa, 0x2, 0xd5, 0xd6, 0x5, 0x10, 
    0x9, 0x2, 0xd6, 0xd7, 0x7, 0x4, 0x2, 0x2, 0xd7, 0xd9, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 
    0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x10, 0x9, 0x2, 0xdb, 
    0xdc, 0x7, 0x4, 0x2, 0x2, 0xdc, 0xde, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xd8, 
    0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 
    0x2, 0x2, 0x2, 0xdf, 0xe0, 0x5, 0x10, 0x9, 0x2, 0xe0, 0xe1, 0x7, 0x4, 
    0x2, 0x2, 0xe1, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 
    0xe4, 0xe5, 0x5, 0x10, 0x9, 0x2, 0xe5, 0xe6, 0x7, 0x4, 0x2, 0x2, 0xe6, 
    0xe8, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x5, 
    0x10, 0x9, 0x2, 0xea, 0xeb, 0x7, 0x4, 0x2, 0x2, 0xeb, 0xed, 0x3, 0x2, 
    0x2, 0x2, 0xec, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 
    0x2, 0xed, 0xee, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf0, 0x5, 0x10, 0x9, 0x2, 
    0xef, 0xec, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 
    0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x5, 0x2, 0x2, 0xf2, 0x116, 
    0x5, 0x10, 0x9, 0x2, 0xf3, 0xf4, 0x5, 0x10, 0x9, 0x2, 0xf4, 0xf5, 0x7, 
    0x4, 0x2, 0x2, 0xf5, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf3, 0x3, 0x2, 
    0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 
    0x2, 0xf8, 0xf9, 0x5, 0x10, 0x9, 0x2, 0xf9, 0xfa, 0x7, 0x4, 0x2, 0x2, 
    0xfa, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xfb, 
    0xfc, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 
    0x5, 0x10, 0x9, 0x2, 0xfe, 0xff, 0x7, 0x4, 0x2, 0x2, 0xff, 0x101, 0x3, 
    0x2, 0x2, 0x2, 0x100, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 0x2, 
    0x2, 0x2, 0x101, 0x102, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x5, 0x10, 
    0x9, 0x2, 0x103, 0x104, 0x7, 0x4, 0x2, 0x2, 0x104, 0x106, 0x3, 0x2, 
    0x2, 0x2, 0x105, 0x100, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 
    0x2, 0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x5, 0x10, 
    0x9, 0x2, 0x108, 0x109, 0x7, 0x4, 0x2, 0x2, 0x109, 0x10b, 0x3, 0x2, 
    0x2, 0x2, 0x10a, 0x105, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 0x2, 
    0x2, 0x2, 0x10b, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x5, 0x10, 
    0x9, 0x2, 0x10d, 0x10e, 0x7, 0x4, 0x2, 0x2, 0x10e, 0x110, 0x3, 0x2, 
    0x2, 0x2, 0x10f, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x3, 0x2, 
    0x2, 0x2, 0x110, 0x111, 0x3, 0x2, 0x2, 0x2, 0x111, 0x113, 0x5, 0x10, 
    0x9, 0x2, 0x112, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x113, 0x114, 0x3, 0x2, 0x2, 0x2, 0x114, 0x116, 0x7, 0x5, 
    0x2, 0x2, 0x115, 0x57, 0x3, 0x2, 0x2, 0x2, 0x115, 0x65, 0x3, 0x2, 0x2, 
    0x2, 0x115, 0x73, 0x3, 0x2, 0x2, 0x2, 0x115, 0x86, 0x3, 0x2, 0x2, 0x2, 
    0x115, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x115, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x115, 
    0xd1, 0x3, 0x2, 0x2, 0x2, 0x115, 0xef, 0x3, 0x2, 0x2, 0x2, 0x115, 0x112, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0xf, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x5, 
    0x14, 0xb, 0x2, 0x118, 0x119, 0x5, 0x14, 0xb, 0x2, 0x119, 0x11a, 0x5, 
    0x14, 0xb, 0x2, 0x11a, 0x11b, 0x5, 0x14, 0xb, 0x2, 0x11b, 0x125, 0x3, 
    0x2, 0x2, 0x2, 0x11c, 0x11d, 0x5, 0x14, 0xb, 0x2, 0x11d, 0x11e, 0x5, 
    0x14, 0xb, 0x2, 0x11e, 0x11f, 0x5, 0x14, 0xb, 0x2, 0x11f, 0x125, 0x3, 
    0x2, 0x2, 0x2, 0x120, 0x121, 0x5, 0x14, 0xb, 0x2, 0x121, 0x122, 0x5, 
    0x14, 0xb, 0x2, 0x122, 0x125, 0x3, 0x2, 0x2, 0x2, 0x123, 0x125, 0x5, 
    0x14, 0xb, 0x2, 0x124, 0x117, 0x3, 0x2, 0x2, 0x2, 0x124, 0x11c, 0x3, 
    0x2, 0x2, 0x2, 0x124, 0x120, 0x3, 0x2, 0x2, 0x2, 0x124, 0x123, 0x3, 
    0x2, 0x2, 0x2, 0x125, 0x11, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x5, 0x10, 
    0x9, 0x2, 0x127, 0x128, 0x7, 0x4, 0x2, 0x2, 0x128, 0x129, 0x5, 0x10, 
    0x9, 0x2, 0x129, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12c, 0x5, 0xc, 
    0x7, 0x2, 0x12b, 0x126, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12a, 0x3, 0x2, 
    0x2, 0x2, 0x12c, 0x13, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x130, 0x5, 0x18, 
    0xd, 0x2, 0x12e, 0x130, 0x9, 0x2, 0x2, 0x2, 0x12f, 0x12d, 0x3, 0x2, 
    0x2, 0x2, 0x12f, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x131, 0x140, 0x5, 0x18, 0xd, 0x2, 0x132, 0x133, 0x5, 0x1a, 0xe, 
    0x2, 0x133, 0x134, 0x5, 0x18, 0xd, 0x2, 0x134, 0x140, 0x3, 0x2, 0x2, 
    0x2, 0x135, 0x136, 0x7, 0xe, 0x2, 0x2, 0x136, 0x137, 0x5, 0x18, 0xd, 
    0x2, 0x137, 0x138, 0x5, 0x18, 0xd, 0x2, 0x138, 0x140, 0x3, 0x2, 0x2, 
    0x2, 0x139, 0x13a, 0x7, 0xf, 0x2, 0x2, 0x13a, 0x13b, 0x9, 0x3, 0x2, 
    0x2, 0x13b, 0x140, 0x5, 0x18, 0xd, 0x2, 0x13c, 0x13d, 0x7, 0xf, 0x2, 
    0x2, 0x13d, 0x13e, 0x7, 0x12, 0x2, 0x2, 0x13e, 0x140, 0x9, 0x4, 0x2, 
    0x2, 0x13f, 0x131, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x132, 0x3, 0x2, 0x2, 
    0x2, 0x13f, 0x135, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x139, 0x3, 0x2, 0x2, 
    0x2, 0x13f, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x140, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x141, 0x144, 0x7, 0xd, 0x2, 0x2, 0x142, 0x144, 0x5, 0x1a, 0xe, 0x2, 
    0x143, 0x141, 0x3, 0x2, 0x2, 0x2, 0x143, 0x142, 0x3, 0x2, 0x2, 0x2, 
    0x144, 0x19, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x9, 0x5, 0x2, 0x2, 0x146, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x5, 0x22, 0x12, 0x2, 0x148, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14b, 0x7, 0xb, 0x2, 0x2, 0x14a, 0x149, 
    0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14a, 
    0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 
    0x3, 0x2, 0x2, 0x2, 0x14e, 0x157, 0x5, 0x20, 0x11, 0x2, 0x14f, 0x151, 
    0x7, 0xb, 0x2, 0x2, 0x150, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 
    0x3, 0x2, 0x2, 0x2, 0x152, 0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 
    0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x3, 0x2, 0x2, 0x2, 0x154, 0x156, 
    0x5, 0x20, 0x11, 0x2, 0x155, 0x150, 0x3, 0x2, 0x2, 0x2, 0x156, 0x159, 
    0x3, 0x2, 0x2, 0x2, 0x157, 0x155, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 
    0x3, 0x2, 0x2, 0x2, 0x158, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x159, 0x157, 0x3, 
    0x2, 0x2, 0x2, 0x15a, 0x15b, 0x5, 0x22, 0x12, 0x2, 0x15b, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x15c, 0x160, 0x5, 0x24, 0x13, 0x2, 0x15d, 0x15f, 0x5, 
    0x24, 0x13, 0x2, 0x15e, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x162, 0x3, 
    0x2, 0x2, 0x2, 0x160, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x3, 
    0x2, 0x2, 0x2, 0x161, 0x23, 0x3, 0x2, 0x2, 0x2, 0x162, 0x160, 0x3, 0x2, 
    0x2, 0x2, 0x163, 0x167, 0x5, 0x26, 0x14, 0x2, 0x164, 0x167, 0x5, 0x18, 
    0xd, 0x2, 0x165, 0x167, 0x9, 0x6, 0x2, 0x2, 0x166, 0x163, 0x3, 0x2, 
    0x2, 0x2, 0x166, 0x164, 0x3, 0x2, 0x2, 0x2, 0x166, 0x165, 0x3, 0x2, 
    0x2, 0x2, 0x167, 0x25, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0x9, 0x7, 0x2, 
    0x2, 0x169, 0x27, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16c, 0x7, 0xb, 0x2, 0x2, 
    0x16b, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16f, 0x3, 0x2, 0x2, 0x2, 
    0x16d, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x3, 0x2, 0x2, 0x2, 
    0x16e, 0x170, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x16d, 0x3, 0x2, 0x2, 0x2, 
    0x170, 0x174, 0x7, 0x9, 0x2, 0x2, 0x171, 0x173, 0xa, 0x8, 0x2, 0x2, 
    0x172, 0x171, 0x3, 0x2, 0x2, 0x2, 0x173, 0x176, 0x3, 0x2, 0x2, 0x2, 
    0x174, 0x172, 0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x3, 0x2, 0x2, 0x2, 
    0x175, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x176, 0x174, 0x3, 0x2, 0x2, 0x2, 
    0x177, 0x179, 0x7, 0xa, 0x2, 0x2, 0x178, 0x177, 0x3, 0x2, 0x2, 0x2, 
    0x179, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x178, 0x3, 0x2, 0x2, 0x2, 
    0x17a, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x17c, 
    0x17a, 0x3, 0x2, 0x2, 0x2, 0x32, 0x2d, 0x35, 0x3a, 0x43, 0x47, 0x4d, 
    0x73, 0x83, 0x86, 0x94, 0x99, 0x9c, 0xa8, 0xad, 0xb2, 0xb5, 0xbf, 0xc4, 
    0xc9, 0xce, 0xd1, 0xd8, 0xdd, 0xe2, 0xe7, 0xec, 0xef, 0xf6, 0xfb, 0x100, 
    0x105, 0x10a, 0x10f, 0x112, 0x115, 0x124, 0x12b, 0x12f, 0x13f, 0x143, 
    0x14c, 0x152, 0x157, 0x160, 0x166, 0x16d, 0x174, 0x17a, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

hostsParser::Initializer hostsParser::_init;