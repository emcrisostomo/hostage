
// Generated from /Users/enrico.m.crisostomo/repos/hostage/src/antlr4/hosts.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "hostsParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by hostsParser.
 */
class  hostsListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterHosts_file(hostsParser::Hosts_fileContext *ctx) = 0;
  virtual void exitHosts_file(hostsParser::Hosts_fileContext *ctx) = 0;

  virtual void enterLine(hostsParser::LineContext *ctx) = 0;
  virtual void exitLine(hostsParser::LineContext *ctx) = 0;

  virtual void enterEmpty_line(hostsParser::Empty_lineContext *ctx) = 0;
  virtual void exitEmpty_line(hostsParser::Empty_lineContext *ctx) = 0;

  virtual void enterTable_entry(hostsParser::Table_entryContext *ctx) = 0;
  virtual void exitTable_entry(hostsParser::Table_entryContext *ctx) = 0;

  virtual void enterAddress(hostsParser::AddressContext *ctx) = 0;
  virtual void exitAddress(hostsParser::AddressContext *ctx) = 0;

  virtual void enterIp_v4_address(hostsParser::Ip_v4_addressContext *ctx) = 0;
  virtual void exitIp_v4_address(hostsParser::Ip_v4_addressContext *ctx) = 0;

  virtual void enterIp_v6_address(hostsParser::Ip_v6_addressContext *ctx) = 0;
  virtual void exitIp_v6_address(hostsParser::Ip_v6_addressContext *ctx) = 0;

  virtual void enterH16(hostsParser::H16Context *ctx) = 0;
  virtual void exitH16(hostsParser::H16Context *ctx) = 0;

  virtual void enterLs32(hostsParser::Ls32Context *ctx) = 0;
  virtual void exitLs32(hostsParser::Ls32Context *ctx) = 0;

  virtual void enterHexdig(hostsParser::HexdigContext *ctx) = 0;
  virtual void exitHexdig(hostsParser::HexdigContext *ctx) = 0;

  virtual void enterDec_octet(hostsParser::Dec_octetContext *ctx) = 0;
  virtual void exitDec_octet(hostsParser::Dec_octetContext *ctx) = 0;

  virtual void enterDigit(hostsParser::DigitContext *ctx) = 0;
  virtual void exitDigit(hostsParser::DigitContext *ctx) = 0;

  virtual void enterNon_zero_digit(hostsParser::Non_zero_digitContext *ctx) = 0;
  virtual void exitNon_zero_digit(hostsParser::Non_zero_digitContext *ctx) = 0;

  virtual void enterHost_name(hostsParser::Host_nameContext *ctx) = 0;
  virtual void exitHost_name(hostsParser::Host_nameContext *ctx) = 0;

  virtual void enterAliases(hostsParser::AliasesContext *ctx) = 0;
  virtual void exitAliases(hostsParser::AliasesContext *ctx) = 0;

  virtual void enterAlias(hostsParser::AliasContext *ctx) = 0;
  virtual void exitAlias(hostsParser::AliasContext *ctx) = 0;

  virtual void enterIreg_name(hostsParser::Ireg_nameContext *ctx) = 0;
  virtual void exitIreg_name(hostsParser::Ireg_nameContext *ctx) = 0;

  virtual void enterIunreserved(hostsParser::IunreservedContext *ctx) = 0;
  virtual void exitIunreserved(hostsParser::IunreservedContext *ctx) = 0;

  virtual void enterAlpha(hostsParser::AlphaContext *ctx) = 0;
  virtual void exitAlpha(hostsParser::AlphaContext *ctx) = 0;

  virtual void enterComment(hostsParser::CommentContext *ctx) = 0;
  virtual void exitComment(hostsParser::CommentContext *ctx) = 0;


};

