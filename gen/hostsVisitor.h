
// Generated from /Users/enrico.m.crisostomo/repos/hostage/src/antlr4/hosts.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "hosts.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by hosts.
 */
class  hostsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by hosts.
   */
    virtual antlrcpp::Any visitHosts_file(hosts::Hosts_fileContext *context) = 0;

    virtual antlrcpp::Any visitLine(hosts::LineContext *context) = 0;

    virtual antlrcpp::Any visitEmpty_line(hosts::Empty_lineContext *context) = 0;

    virtual antlrcpp::Any visitTable_entry(hosts::Table_entryContext *context) = 0;

    virtual antlrcpp::Any visitAddress(hosts::AddressContext *context) = 0;

    virtual antlrcpp::Any visitIp_v4_address(hosts::Ip_v4_addressContext *context) = 0;

    virtual antlrcpp::Any visitIp_v6_address(hosts::Ip_v6_addressContext *context) = 0;

    virtual antlrcpp::Any visitH16(hosts::H16Context *context) = 0;

    virtual antlrcpp::Any visitLs32(hosts::Ls32Context *context) = 0;

    virtual antlrcpp::Any visitHexdig(hosts::HexdigContext *context) = 0;

    virtual antlrcpp::Any visitDec_octet(hosts::Dec_octetContext *context) = 0;

    virtual antlrcpp::Any visitDigit(hosts::DigitContext *context) = 0;

    virtual antlrcpp::Any visitNon_zero_digit(hosts::Non_zero_digitContext *context) = 0;

    virtual antlrcpp::Any visitHost_name(hosts::Host_nameContext *context) = 0;

    virtual antlrcpp::Any visitIreg_name(hosts::Ireg_nameContext *context) = 0;

    virtual antlrcpp::Any visitIunreserved(hosts::IunreservedContext *context) = 0;

    virtual antlrcpp::Any visitAlpha(hosts::AlphaContext *context) = 0;

    virtual antlrcpp::Any visitComment(hosts::CommentContext *context) = 0;

    virtual antlrcpp::Any visitCommand_line(hosts::Command_lineContext *context) = 0;

    virtual antlrcpp::Any visitList_command(hosts::List_commandContext *context) = 0;

    virtual antlrcpp::Any visitSet_command(hosts::Set_commandContext *context) = 0;

    virtual antlrcpp::Any visitGet_command(hosts::Get_commandContext *context) = 0;

    virtual antlrcpp::Any visitPurge_command(hosts::Purge_commandContext *context) = 0;

    virtual antlrcpp::Any visitRm_command(hosts::Rm_commandContext *context) = 0;

    virtual antlrcpp::Any visitCmd_list(hosts::Cmd_listContext *context) = 0;

    virtual antlrcpp::Any visitCmd_purge(hosts::Cmd_purgeContext *context) = 0;

    virtual antlrcpp::Any visitCmd_rm(hosts::Cmd_rmContext *context) = 0;

    virtual antlrcpp::Any visitCmd_set(hosts::Cmd_setContext *context) = 0;

    virtual antlrcpp::Any visitCmd_get(hosts::Cmd_getContext *context) = 0;


};

