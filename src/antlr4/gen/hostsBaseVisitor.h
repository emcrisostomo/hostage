
// Generated from /Users/enrico.m.crisostomo/repos/hostage/src/antlr4/hosts.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "hostsVisitor.h"


/**
 * This class provides an empty implementation of hostsVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  hostsBaseVisitor : public hostsVisitor {
public:

  virtual antlrcpp::Any visitHosts_file(hostsParser::Hosts_fileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLine(hostsParser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmpty_line(hostsParser::Empty_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_entry(hostsParser::Table_entryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddress(hostsParser::AddressContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIp_v4_address(hostsParser::Ip_v4_addressContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIp_v6_address(hostsParser::Ip_v6_addressContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitH16(hostsParser::H16Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLs32(hostsParser::Ls32Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHexdig(hostsParser::HexdigContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDec_octet(hostsParser::Dec_octetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDigit(hostsParser::DigitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNon_zero_digit(hostsParser::Non_zero_digitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHost_name(hostsParser::Host_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAliases(hostsParser::AliasesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlias(hostsParser::AliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIreg_name(hostsParser::Ireg_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIunreserved(hostsParser::IunreservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlpha(hostsParser::AlphaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComment(hostsParser::CommentContext *ctx) override {
    return visitChildren(ctx);
  }


};

