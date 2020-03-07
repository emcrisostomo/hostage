
// Generated from /Users/enrico/CLionProjects/hostage/hosts.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "hostsListener.h"


/**
 * This class provides an empty implementation of hostsListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  hostsBaseListener : public hostsListener {
public:

  virtual void enterHosts_file(hostsParser::Hosts_fileContext * /*ctx*/) override { }
  virtual void exitHosts_file(hostsParser::Hosts_fileContext * /*ctx*/) override { }

  virtual void enterLine(hostsParser::LineContext * /*ctx*/) override { }
  virtual void exitLine(hostsParser::LineContext * /*ctx*/) override { }

  virtual void enterEmpty_line(hostsParser::Empty_lineContext * /*ctx*/) override { }
  virtual void exitEmpty_line(hostsParser::Empty_lineContext * /*ctx*/) override { }

  virtual void enterTable_entry(hostsParser::Table_entryContext * /*ctx*/) override { }
  virtual void exitTable_entry(hostsParser::Table_entryContext * /*ctx*/) override { }

  virtual void enterAddress(hostsParser::AddressContext * /*ctx*/) override { }
  virtual void exitAddress(hostsParser::AddressContext * /*ctx*/) override { }

  virtual void enterIp_v4_address(hostsParser::Ip_v4_addressContext * /*ctx*/) override { }
  virtual void exitIp_v4_address(hostsParser::Ip_v4_addressContext * /*ctx*/) override { }

  virtual void enterIp_v6_address(hostsParser::Ip_v6_addressContext * /*ctx*/) override { }
  virtual void exitIp_v6_address(hostsParser::Ip_v6_addressContext * /*ctx*/) override { }

  virtual void enterH16(hostsParser::H16Context * /*ctx*/) override { }
  virtual void exitH16(hostsParser::H16Context * /*ctx*/) override { }

  virtual void enterLs32(hostsParser::Ls32Context * /*ctx*/) override { }
  virtual void exitLs32(hostsParser::Ls32Context * /*ctx*/) override { }

  virtual void enterHexdig(hostsParser::HexdigContext * /*ctx*/) override { }
  virtual void exitHexdig(hostsParser::HexdigContext * /*ctx*/) override { }

  virtual void enterDec_octet(hostsParser::Dec_octetContext * /*ctx*/) override { }
  virtual void exitDec_octet(hostsParser::Dec_octetContext * /*ctx*/) override { }

  virtual void enterDigit(hostsParser::DigitContext * /*ctx*/) override { }
  virtual void exitDigit(hostsParser::DigitContext * /*ctx*/) override { }

  virtual void enterNon_zero_digit(hostsParser::Non_zero_digitContext * /*ctx*/) override { }
  virtual void exitNon_zero_digit(hostsParser::Non_zero_digitContext * /*ctx*/) override { }

  virtual void enterHost_name(hostsParser::Host_nameContext * /*ctx*/) override { }
  virtual void exitHost_name(hostsParser::Host_nameContext * /*ctx*/) override { }

  virtual void enterAliases(hostsParser::AliasesContext * /*ctx*/) override { }
  virtual void exitAliases(hostsParser::AliasesContext * /*ctx*/) override { }

  virtual void enterAlias(hostsParser::AliasContext * /*ctx*/) override { }
  virtual void exitAlias(hostsParser::AliasContext * /*ctx*/) override { }

  virtual void enterIreg_name(hostsParser::Ireg_nameContext * /*ctx*/) override { }
  virtual void exitIreg_name(hostsParser::Ireg_nameContext * /*ctx*/) override { }

  virtual void enterIunreserved(hostsParser::IunreservedContext * /*ctx*/) override { }
  virtual void exitIunreserved(hostsParser::IunreservedContext * /*ctx*/) override { }

  virtual void enterAlpha(hostsParser::AlphaContext * /*ctx*/) override { }
  virtual void exitAlpha(hostsParser::AlphaContext * /*ctx*/) override { }

  virtual void enterComment(hostsParser::CommentContext * /*ctx*/) override { }
  virtual void exitComment(hostsParser::CommentContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

