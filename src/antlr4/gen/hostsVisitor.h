
// Generated from /Users/enrico.m.crisostomo/repos/hostage/src/antlr4/hosts.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "hostsParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by hostsParser.
 */
class  hostsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by hostsParser.
   */
    virtual antlrcpp::Any visitHosts_file(hostsParser::Hosts_fileContext *context) = 0;

    virtual antlrcpp::Any visitLine(hostsParser::LineContext *context) = 0;

    virtual antlrcpp::Any visitEmpty_line(hostsParser::Empty_lineContext *context) = 0;

    virtual antlrcpp::Any visitTable_entry(hostsParser::Table_entryContext *context) = 0;

    virtual antlrcpp::Any visitAddress(hostsParser::AddressContext *context) = 0;

    virtual antlrcpp::Any visitIp_v4_address(hostsParser::Ip_v4_addressContext *context) = 0;

    virtual antlrcpp::Any visitIp_v6_address(hostsParser::Ip_v6_addressContext *context) = 0;

    virtual antlrcpp::Any visitH16(hostsParser::H16Context *context) = 0;

    virtual antlrcpp::Any visitLs32(hostsParser::Ls32Context *context) = 0;

    virtual antlrcpp::Any visitHexdig(hostsParser::HexdigContext *context) = 0;

    virtual antlrcpp::Any visitDec_octet(hostsParser::Dec_octetContext *context) = 0;

    virtual antlrcpp::Any visitDigit(hostsParser::DigitContext *context) = 0;

    virtual antlrcpp::Any visitNon_zero_digit(hostsParser::Non_zero_digitContext *context) = 0;

    virtual antlrcpp::Any visitHost_name(hostsParser::Host_nameContext *context) = 0;

    virtual antlrcpp::Any visitAliases(hostsParser::AliasesContext *context) = 0;

    virtual antlrcpp::Any visitAlias(hostsParser::AliasContext *context) = 0;

    virtual antlrcpp::Any visitIreg_name(hostsParser::Ireg_nameContext *context) = 0;

    virtual antlrcpp::Any visitIunreserved(hostsParser::IunreservedContext *context) = 0;

    virtual antlrcpp::Any visitAlpha(hostsParser::AlphaContext *context) = 0;

    virtual antlrcpp::Any visitComment(hostsParser::CommentContext *context) = 0;


};

