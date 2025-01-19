
// Generated from ../src/antlr4/hosts.g4 by ANTLR 4.13.2


#include "hostsListener.h"
#include "hostsVisitor.h"

#include "hosts.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct HostsStaticData final {
  HostsStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  HostsStaticData(const HostsStaticData&) = delete;
  HostsStaticData(HostsStaticData&&) = delete;
  HostsStaticData& operator=(const HostsStaticData&) = delete;
  HostsStaticData& operator=(HostsStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag hostsParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<HostsStaticData> hostsParserStaticData = nullptr;

void hostsParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (hostsParserStaticData != nullptr) {
    return;
  }
#else
  assert(hostsParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<HostsStaticData>(
    std::vector<std::string>{
      "hosts_file", "line", "comment_line", "empty_line", "table_entry", 
      "address", "ip_v4_address", "ip_v6_address", "h16", "ls32", "hexdig", 
      "dec_octet", "digit", "non_zero_digit", "host_name", "ireg_name", 
      "iunreserved", "alpha", "comment", "command_line", "list_command", 
      "set_command", "get_command", "purge_command", "rm_command", "cmd_list", 
      "cmd_purge", "cmd_rm", "cmd_set", "cmd_get"
    },
    std::vector<std::string>{
      "", "", "", "", "'0'", "'1'", "'2'", "'3'", "'4'", "'5'", "'6'", "'7'", 
      "'8'", "'9'", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "':'", "'::'", 
      "'-'", "'.'", "'_'", "'~'", "'#'"
    },
    std::vector<std::string>{
      "", "NewLine", "Space", "UCSCHAR", "D0", "D1", "D2", "D3", "D4", "D5", 
      "D6", "D7", "D8", "D9", "A", "B", "C", "D", "E", "F", "G", "H", "I", 
      "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", 
      "X", "Y", "Z", "COLON", "DCOLON", "DASH", "DOT", "UNDERSCORE", "TILDE", 
      "SHARP"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,46,481,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,1,0,5,0,62,8,0,10,0,12,0,65,9,0,1,0,1,0,1,1,1,1,1,1,3,1,
  	72,8,1,1,1,1,1,1,2,1,2,1,3,5,3,79,8,3,10,3,12,3,82,9,3,1,4,1,4,4,4,86,
  	8,4,11,4,12,4,87,1,4,1,4,4,4,92,8,4,11,4,12,4,93,1,4,5,4,97,8,4,10,4,
  	12,4,100,9,4,1,4,5,4,103,8,4,10,4,12,4,106,9,4,1,4,3,4,109,8,4,1,5,1,
  	5,3,5,113,8,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,3,7,151,8,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,7,1,7,3,7,167,8,7,1,7,3,7,170,8,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,3,7,184,8,7,1,7,1,7,1,7,3,7,189,8,7,1,7,3,7,192,
  	8,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,204,8,7,1,7,1,7,1,7,3,
  	7,209,8,7,1,7,1,7,1,7,3,7,214,8,7,1,7,3,7,217,8,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,7,3,7,227,8,7,1,7,1,7,1,7,3,7,232,8,7,1,7,1,7,1,7,3,7,237,8,
  	7,1,7,1,7,1,7,3,7,242,8,7,1,7,3,7,245,8,7,1,7,1,7,1,7,1,7,1,7,3,7,252,
  	8,7,1,7,1,7,1,7,3,7,257,8,7,1,7,1,7,1,7,3,7,262,8,7,1,7,1,7,1,7,3,7,267,
  	8,7,1,7,1,7,1,7,3,7,272,8,7,1,7,3,7,275,8,7,1,7,1,7,1,7,1,7,1,7,3,7,282,
  	8,7,1,7,1,7,1,7,3,7,287,8,7,1,7,1,7,1,7,3,7,292,8,7,1,7,1,7,1,7,3,7,297,
  	8,7,1,7,1,7,1,7,3,7,302,8,7,1,7,1,7,1,7,3,7,307,8,7,1,7,3,7,310,8,7,1,
  	7,3,7,313,8,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,
  	328,8,8,1,9,1,9,1,9,1,9,1,9,3,9,335,8,9,1,10,1,10,3,10,339,8,10,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,
  	355,8,11,1,12,1,12,3,12,359,8,12,1,13,1,13,1,14,1,14,1,15,1,15,5,15,367,
  	8,15,10,15,12,15,370,9,15,1,16,1,16,1,16,3,16,375,8,16,1,17,1,17,1,18,
  	5,18,380,8,18,10,18,12,18,383,9,18,1,18,1,18,5,18,387,8,18,10,18,12,18,
  	390,9,18,1,19,1,19,1,19,1,19,1,19,3,19,397,8,19,1,19,1,19,1,20,1,20,1,
  	21,1,21,4,21,405,8,21,11,21,12,21,406,1,21,1,21,4,21,411,8,21,11,21,12,
  	21,412,1,21,4,21,416,8,21,11,21,12,21,417,1,22,1,22,4,22,422,8,22,11,
  	22,12,22,423,1,22,1,22,1,23,1,23,4,23,430,8,23,11,23,12,23,431,1,23,1,
  	23,3,23,436,8,23,4,23,438,8,23,11,23,12,23,439,1,24,1,24,4,24,444,8,24,
  	11,24,12,24,445,1,24,1,24,4,24,450,8,24,11,24,12,24,451,1,24,4,24,455,
  	8,24,11,24,12,24,456,1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,27,1,27,1,27,1,28,1,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,0,0,
  	30,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,
  	48,50,52,54,56,58,0,7,1,0,14,19,1,0,4,8,1,0,4,9,1,0,5,13,2,0,3,3,42,45,
  	1,0,14,39,1,0,1,1,525,0,63,1,0,0,0,2,71,1,0,0,0,4,75,1,0,0,0,6,80,1,0,
  	0,0,8,83,1,0,0,0,10,112,1,0,0,0,12,114,1,0,0,0,14,312,1,0,0,0,16,327,
  	1,0,0,0,18,334,1,0,0,0,20,338,1,0,0,0,22,354,1,0,0,0,24,358,1,0,0,0,26,
  	360,1,0,0,0,28,362,1,0,0,0,30,364,1,0,0,0,32,374,1,0,0,0,34,376,1,0,0,
  	0,36,381,1,0,0,0,38,396,1,0,0,0,40,400,1,0,0,0,42,402,1,0,0,0,44,419,
  	1,0,0,0,46,427,1,0,0,0,48,441,1,0,0,0,50,458,1,0,0,0,52,463,1,0,0,0,54,
  	469,1,0,0,0,56,472,1,0,0,0,58,476,1,0,0,0,60,62,3,2,1,0,61,60,1,0,0,0,
  	62,65,1,0,0,0,63,61,1,0,0,0,63,64,1,0,0,0,64,66,1,0,0,0,65,63,1,0,0,0,
  	66,67,5,0,0,1,67,1,1,0,0,0,68,72,3,4,2,0,69,72,3,8,4,0,70,72,3,6,3,0,
  	71,68,1,0,0,0,71,69,1,0,0,0,71,70,1,0,0,0,72,73,1,0,0,0,73,74,5,1,0,0,
  	74,3,1,0,0,0,75,76,3,36,18,0,76,5,1,0,0,0,77,79,5,2,0,0,78,77,1,0,0,0,
  	79,82,1,0,0,0,80,78,1,0,0,0,80,81,1,0,0,0,81,7,1,0,0,0,82,80,1,0,0,0,
  	83,85,3,10,5,0,84,86,5,2,0,0,85,84,1,0,0,0,86,87,1,0,0,0,87,85,1,0,0,
  	0,87,88,1,0,0,0,88,89,1,0,0,0,89,98,3,28,14,0,90,92,5,2,0,0,91,90,1,0,
  	0,0,92,93,1,0,0,0,93,91,1,0,0,0,93,94,1,0,0,0,94,95,1,0,0,0,95,97,3,28,
  	14,0,96,91,1,0,0,0,97,100,1,0,0,0,98,96,1,0,0,0,98,99,1,0,0,0,99,104,
  	1,0,0,0,100,98,1,0,0,0,101,103,5,2,0,0,102,101,1,0,0,0,103,106,1,0,0,
  	0,104,102,1,0,0,0,104,105,1,0,0,0,105,108,1,0,0,0,106,104,1,0,0,0,107,
  	109,3,36,18,0,108,107,1,0,0,0,108,109,1,0,0,0,109,9,1,0,0,0,110,113,3,
  	12,6,0,111,113,3,14,7,0,112,110,1,0,0,0,112,111,1,0,0,0,113,11,1,0,0,
  	0,114,115,3,22,11,0,115,116,5,43,0,0,116,117,3,22,11,0,117,118,5,43,0,
  	0,118,119,3,22,11,0,119,120,5,43,0,0,120,121,3,22,11,0,121,13,1,0,0,0,
  	122,123,3,16,8,0,123,124,5,40,0,0,124,125,3,16,8,0,125,126,5,40,0,0,126,
  	127,3,16,8,0,127,128,5,40,0,0,128,129,3,16,8,0,129,130,5,40,0,0,130,131,
  	3,16,8,0,131,132,5,40,0,0,132,133,3,16,8,0,133,134,5,40,0,0,134,135,3,
  	18,9,0,135,313,1,0,0,0,136,137,5,41,0,0,137,138,3,16,8,0,138,139,5,40,
  	0,0,139,140,3,16,8,0,140,141,5,40,0,0,141,142,3,16,8,0,142,143,5,40,0,
  	0,143,144,3,16,8,0,144,145,5,40,0,0,145,146,3,16,8,0,146,147,5,40,0,0,
  	147,148,3,18,9,0,148,313,1,0,0,0,149,151,3,16,8,0,150,149,1,0,0,0,150,
  	151,1,0,0,0,151,152,1,0,0,0,152,153,5,41,0,0,153,154,3,16,8,0,154,155,
  	5,40,0,0,155,156,3,16,8,0,156,157,5,40,0,0,157,158,3,16,8,0,158,159,5,
  	40,0,0,159,160,3,16,8,0,160,161,5,40,0,0,161,162,3,18,9,0,162,313,1,0,
  	0,0,163,164,3,16,8,0,164,165,5,40,0,0,165,167,1,0,0,0,166,163,1,0,0,0,
  	166,167,1,0,0,0,167,168,1,0,0,0,168,170,3,16,8,0,169,166,1,0,0,0,169,
  	170,1,0,0,0,170,171,1,0,0,0,171,172,5,41,0,0,172,173,3,16,8,0,173,174,
  	5,40,0,0,174,175,3,16,8,0,175,176,5,40,0,0,176,177,3,16,8,0,177,178,5,
  	40,0,0,178,179,3,18,9,0,179,313,1,0,0,0,180,181,3,16,8,0,181,182,5,40,
  	0,0,182,184,1,0,0,0,183,180,1,0,0,0,183,184,1,0,0,0,184,185,1,0,0,0,185,
  	186,3,16,8,0,186,187,5,40,0,0,187,189,1,0,0,0,188,183,1,0,0,0,188,189,
  	1,0,0,0,189,190,1,0,0,0,190,192,3,16,8,0,191,188,1,0,0,0,191,192,1,0,
  	0,0,192,193,1,0,0,0,193,194,5,41,0,0,194,195,3,16,8,0,195,196,5,40,0,
  	0,196,197,3,16,8,0,197,198,5,40,0,0,198,199,3,18,9,0,199,313,1,0,0,0,
  	200,201,3,16,8,0,201,202,5,40,0,0,202,204,1,0,0,0,203,200,1,0,0,0,203,
  	204,1,0,0,0,204,205,1,0,0,0,205,206,3,16,8,0,206,207,5,40,0,0,207,209,
  	1,0,0,0,208,203,1,0,0,0,208,209,1,0,0,0,209,210,1,0,0,0,210,211,3,16,
  	8,0,211,212,5,40,0,0,212,214,1,0,0,0,213,208,1,0,0,0,213,214,1,0,0,0,
  	214,215,1,0,0,0,215,217,3,16,8,0,216,213,1,0,0,0,216,217,1,0,0,0,217,
  	218,1,0,0,0,218,219,5,41,0,0,219,220,3,16,8,0,220,221,5,40,0,0,221,222,
  	3,18,9,0,222,313,1,0,0,0,223,224,3,16,8,0,224,225,5,40,0,0,225,227,1,
  	0,0,0,226,223,1,0,0,0,226,227,1,0,0,0,227,228,1,0,0,0,228,229,3,16,8,
  	0,229,230,5,40,0,0,230,232,1,0,0,0,231,226,1,0,0,0,231,232,1,0,0,0,232,
  	233,1,0,0,0,233,234,3,16,8,0,234,235,5,40,0,0,235,237,1,0,0,0,236,231,
  	1,0,0,0,236,237,1,0,0,0,237,238,1,0,0,0,238,239,3,16,8,0,239,240,5,40,
  	0,0,240,242,1,0,0,0,241,236,1,0,0,0,241,242,1,0,0,0,242,243,1,0,0,0,243,
  	245,3,16,8,0,244,241,1,0,0,0,244,245,1,0,0,0,245,246,1,0,0,0,246,247,
  	5,41,0,0,247,313,3,18,9,0,248,249,3,16,8,0,249,250,5,40,0,0,250,252,1,
  	0,0,0,251,248,1,0,0,0,251,252,1,0,0,0,252,253,1,0,0,0,253,254,3,16,8,
  	0,254,255,5,40,0,0,255,257,1,0,0,0,256,251,1,0,0,0,256,257,1,0,0,0,257,
  	258,1,0,0,0,258,259,3,16,8,0,259,260,5,40,0,0,260,262,1,0,0,0,261,256,
  	1,0,0,0,261,262,1,0,0,0,262,263,1,0,0,0,263,264,3,16,8,0,264,265,5,40,
  	0,0,265,267,1,0,0,0,266,261,1,0,0,0,266,267,1,0,0,0,267,268,1,0,0,0,268,
  	269,3,16,8,0,269,270,5,40,0,0,270,272,1,0,0,0,271,266,1,0,0,0,271,272,
  	1,0,0,0,272,273,1,0,0,0,273,275,3,16,8,0,274,271,1,0,0,0,274,275,1,0,
  	0,0,275,276,1,0,0,0,276,277,5,41,0,0,277,313,3,16,8,0,278,279,3,16,8,
  	0,279,280,5,40,0,0,280,282,1,0,0,0,281,278,1,0,0,0,281,282,1,0,0,0,282,
  	283,1,0,0,0,283,284,3,16,8,0,284,285,5,40,0,0,285,287,1,0,0,0,286,281,
  	1,0,0,0,286,287,1,0,0,0,287,288,1,0,0,0,288,289,3,16,8,0,289,290,5,40,
  	0,0,290,292,1,0,0,0,291,286,1,0,0,0,291,292,1,0,0,0,292,293,1,0,0,0,293,
  	294,3,16,8,0,294,295,5,40,0,0,295,297,1,0,0,0,296,291,1,0,0,0,296,297,
  	1,0,0,0,297,298,1,0,0,0,298,299,3,16,8,0,299,300,5,40,0,0,300,302,1,0,
  	0,0,301,296,1,0,0,0,301,302,1,0,0,0,302,303,1,0,0,0,303,304,3,16,8,0,
  	304,305,5,40,0,0,305,307,1,0,0,0,306,301,1,0,0,0,306,307,1,0,0,0,307,
  	308,1,0,0,0,308,310,3,16,8,0,309,306,1,0,0,0,309,310,1,0,0,0,310,311,
  	1,0,0,0,311,313,5,41,0,0,312,122,1,0,0,0,312,136,1,0,0,0,312,150,1,0,
  	0,0,312,169,1,0,0,0,312,191,1,0,0,0,312,216,1,0,0,0,312,244,1,0,0,0,312,
  	274,1,0,0,0,312,309,1,0,0,0,313,15,1,0,0,0,314,315,3,20,10,0,315,316,
  	3,20,10,0,316,317,3,20,10,0,317,318,3,20,10,0,318,328,1,0,0,0,319,320,
  	3,20,10,0,320,321,3,20,10,0,321,322,3,20,10,0,322,328,1,0,0,0,323,324,
  	3,20,10,0,324,325,3,20,10,0,325,328,1,0,0,0,326,328,3,20,10,0,327,314,
  	1,0,0,0,327,319,1,0,0,0,327,323,1,0,0,0,327,326,1,0,0,0,328,17,1,0,0,
  	0,329,330,3,16,8,0,330,331,5,40,0,0,331,332,3,16,8,0,332,335,1,0,0,0,
  	333,335,3,12,6,0,334,329,1,0,0,0,334,333,1,0,0,0,335,19,1,0,0,0,336,339,
  	3,24,12,0,337,339,7,0,0,0,338,336,1,0,0,0,338,337,1,0,0,0,339,21,1,0,
  	0,0,340,355,3,24,12,0,341,342,3,26,13,0,342,343,3,24,12,0,343,355,1,0,
  	0,0,344,345,5,5,0,0,345,346,3,24,12,0,346,347,3,24,12,0,347,355,1,0,0,
  	0,348,349,5,6,0,0,349,350,7,1,0,0,350,355,3,24,12,0,351,352,5,6,0,0,352,
  	353,5,9,0,0,353,355,7,2,0,0,354,340,1,0,0,0,354,341,1,0,0,0,354,344,1,
  	0,0,0,354,348,1,0,0,0,354,351,1,0,0,0,355,23,1,0,0,0,356,359,5,4,0,0,
  	357,359,3,26,13,0,358,356,1,0,0,0,358,357,1,0,0,0,359,25,1,0,0,0,360,
  	361,7,3,0,0,361,27,1,0,0,0,362,363,3,30,15,0,363,29,1,0,0,0,364,368,3,
  	32,16,0,365,367,3,32,16,0,366,365,1,0,0,0,367,370,1,0,0,0,368,366,1,0,
  	0,0,368,369,1,0,0,0,369,31,1,0,0,0,370,368,1,0,0,0,371,375,3,34,17,0,
  	372,375,3,24,12,0,373,375,7,4,0,0,374,371,1,0,0,0,374,372,1,0,0,0,374,
  	373,1,0,0,0,375,33,1,0,0,0,376,377,7,5,0,0,377,35,1,0,0,0,378,380,5,2,
  	0,0,379,378,1,0,0,0,380,383,1,0,0,0,381,379,1,0,0,0,381,382,1,0,0,0,382,
  	384,1,0,0,0,383,381,1,0,0,0,384,388,5,46,0,0,385,387,8,6,0,0,386,385,
  	1,0,0,0,387,390,1,0,0,0,388,386,1,0,0,0,388,389,1,0,0,0,389,37,1,0,0,
  	0,390,388,1,0,0,0,391,397,3,40,20,0,392,397,3,46,23,0,393,397,3,42,21,
  	0,394,397,3,44,22,0,395,397,3,48,24,0,396,391,1,0,0,0,396,392,1,0,0,0,
  	396,393,1,0,0,0,396,394,1,0,0,0,396,395,1,0,0,0,397,398,1,0,0,0,398,399,
  	5,0,0,1,399,39,1,0,0,0,400,401,3,50,25,0,401,41,1,0,0,0,402,404,3,56,
  	28,0,403,405,5,2,0,0,404,403,1,0,0,0,405,406,1,0,0,0,406,404,1,0,0,0,
  	406,407,1,0,0,0,407,408,1,0,0,0,408,415,3,10,5,0,409,411,5,2,0,0,410,
  	409,1,0,0,0,411,412,1,0,0,0,412,410,1,0,0,0,412,413,1,0,0,0,413,414,1,
  	0,0,0,414,416,3,28,14,0,415,410,1,0,0,0,416,417,1,0,0,0,417,415,1,0,0,
  	0,417,418,1,0,0,0,418,43,1,0,0,0,419,421,3,58,29,0,420,422,5,2,0,0,421,
  	420,1,0,0,0,422,423,1,0,0,0,423,421,1,0,0,0,423,424,1,0,0,0,424,425,1,
  	0,0,0,425,426,3,10,5,0,426,45,1,0,0,0,427,437,3,52,26,0,428,430,5,2,0,
  	0,429,428,1,0,0,0,430,431,1,0,0,0,431,429,1,0,0,0,431,432,1,0,0,0,432,
  	435,1,0,0,0,433,436,3,10,5,0,434,436,3,28,14,0,435,433,1,0,0,0,435,434,
  	1,0,0,0,436,438,1,0,0,0,437,429,1,0,0,0,438,439,1,0,0,0,439,437,1,0,0,
  	0,439,440,1,0,0,0,440,47,1,0,0,0,441,443,3,54,27,0,442,444,5,2,0,0,443,
  	442,1,0,0,0,444,445,1,0,0,0,445,443,1,0,0,0,445,446,1,0,0,0,446,447,1,
  	0,0,0,447,454,3,10,5,0,448,450,5,2,0,0,449,448,1,0,0,0,450,451,1,0,0,
  	0,451,449,1,0,0,0,451,452,1,0,0,0,452,453,1,0,0,0,453,455,3,28,14,0,454,
  	449,1,0,0,0,455,456,1,0,0,0,456,454,1,0,0,0,456,457,1,0,0,0,457,49,1,
  	0,0,0,458,459,5,25,0,0,459,460,5,22,0,0,460,461,5,32,0,0,461,462,5,33,
  	0,0,462,51,1,0,0,0,463,464,5,29,0,0,464,465,5,34,0,0,465,466,5,31,0,0,
  	466,467,5,20,0,0,467,468,5,18,0,0,468,53,1,0,0,0,469,470,5,31,0,0,470,
  	471,5,26,0,0,471,55,1,0,0,0,472,473,5,32,0,0,473,474,5,18,0,0,474,475,
  	5,33,0,0,475,57,1,0,0,0,476,477,5,20,0,0,477,478,5,18,0,0,478,479,5,33,
  	0,0,479,59,1,0,0,0,58,63,71,80,87,93,98,104,108,112,150,166,169,183,188,
  	191,203,208,213,216,226,231,236,241,244,251,256,261,266,271,274,281,286,
  	291,296,301,306,309,312,327,334,338,354,358,368,374,381,388,396,406,412,
  	417,423,431,435,439,445,451,456
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  hostsParserStaticData = std::move(staticData);
}

}

hosts::hosts(TokenStream *input) : hosts(input, antlr4::atn::ParserATNSimulatorOptions()) {}

hosts::hosts(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  hosts::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *hostsParserStaticData->atn, hostsParserStaticData->decisionToDFA, hostsParserStaticData->sharedContextCache, options);
}

hosts::~hosts() {
  delete _interpreter;
}

const atn::ATN& hosts::getATN() const {
  return *hostsParserStaticData->atn;
}

std::string hosts::getGrammarFileName() const {
  return "hosts.g4";
}

const std::vector<std::string>& hosts::getRuleNames() const {
  return hostsParserStaticData->ruleNames;
}

const dfa::Vocabulary& hosts::getVocabulary() const {
  return hostsParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView hosts::getSerializedATN() const {
  return hostsParserStaticData->serializedATN;
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


std::any hosts::Hosts_fileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitHosts_file(this);
  else
    return visitor->visitChildren(this);
}

hosts::Hosts_fileContext* hosts::hosts_file() {
  Hosts_fileContext *_localctx = _tracker.createInstance<Hosts_fileContext>(_ctx, getState());
  enterRule(_localctx, 0, hosts::RuleHosts_file);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 72567768481782) != 0)) {
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


std::any hosts::LineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitLine(this);
  else
    return visitor->visitChildren(this);
}

hosts::LineContext* hosts::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 2, hosts::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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

    default:
      break;
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


std::any hosts::Comment_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitComment_line(this);
  else
    return visitor->visitChildren(this);
}

hosts::Comment_lineContext* hosts::comment_line() {
  Comment_lineContext *_localctx = _tracker.createInstance<Comment_lineContext>(_ctx, getState());
  enterRule(_localctx, 4, hosts::RuleComment_line);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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


std::any hosts::Empty_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitEmpty_line(this);
  else
    return visitor->visitChildren(this);
}

hosts::Empty_lineContext* hosts::empty_line() {
  Empty_lineContext *_localctx = _tracker.createInstance<Empty_lineContext>(_ctx, getState());
  enterRule(_localctx, 6, hosts::RuleEmpty_line);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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


std::any hosts::Table_entryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitTable_entry(this);
  else
    return visitor->visitChildren(this);
}

hosts::Table_entryContext* hosts::table_entry() {
  Table_entryContext *_localctx = _tracker.createInstance<Table_entryContext>(_ctx, getState());
  enterRule(_localctx, 8, hosts::RuleTable_entry);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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


std::any hosts::AddressContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitAddress(this);
  else
    return visitor->visitChildren(this);
}

hosts::AddressContext* hosts::address() {
  AddressContext *_localctx = _tracker.createInstance<AddressContext>(_ctx, getState());
  enterRule(_localctx, 10, hosts::RuleAddress);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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

    default:
      break;
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


std::any hosts::Ip_v4_addressContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitIp_v4_address(this);
  else
    return visitor->visitChildren(this);
}

hosts::Ip_v4_addressContext* hosts::ip_v4_address() {
  Ip_v4_addressContext *_localctx = _tracker.createInstance<Ip_v4_addressContext>(_ctx, getState());
  enterRule(_localctx, 12, hosts::RuleIp_v4_address);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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


std::any hosts::Ip_v6_addressContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitIp_v6_address(this);
  else
    return visitor->visitChildren(this);
}

hosts::Ip_v6_addressContext* hosts::ip_v6_address() {
  Ip_v6_addressContext *_localctx = _tracker.createInstance<Ip_v6_addressContext>(_ctx, getState());
  enterRule(_localctx, 14, hosts::RuleIp_v6_address);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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
        ((1ULL << _la) & 1048560) != 0)) {
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
        ((1ULL << _la) & 1048560) != 0)) {
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

        default:
          break;
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
        ((1ULL << _la) & 1048560) != 0)) {
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

          default:
            break;
          }
          setState(185);
          h16();
          setState(186);
          match(hosts::COLON);
          break;
        }

        default:
          break;
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
        ((1ULL << _la) & 1048560) != 0)) {
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

            default:
              break;
            }
            setState(205);
            h16();
            setState(206);
            match(hosts::COLON);
            break;
          }

          default:
            break;
          }
          setState(210);
          h16();
          setState(211);
          match(hosts::COLON);
          break;
        }

        default:
          break;
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
        ((1ULL << _la) & 1048560) != 0)) {
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

              default:
                break;
              }
              setState(228);
              h16();
              setState(229);
              match(hosts::COLON);
              break;
            }

            default:
              break;
            }
            setState(233);
            h16();
            setState(234);
            match(hosts::COLON);
            break;
          }

          default:
            break;
          }
          setState(238);
          h16();
          setState(239);
          match(hosts::COLON);
          break;
        }

        default:
          break;
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
        ((1ULL << _la) & 1048560) != 0)) {
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

                default:
                  break;
                }
                setState(253);
                h16();
                setState(254);
                match(hosts::COLON);
                break;
              }

              default:
                break;
              }
              setState(258);
              h16();
              setState(259);
              match(hosts::COLON);
              break;
            }

            default:
              break;
            }
            setState(263);
            h16();
            setState(264);
            match(hosts::COLON);
            break;
          }

          default:
            break;
          }
          setState(268);
          h16();
          setState(269);
          match(hosts::COLON);
          break;
        }

        default:
          break;
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
        ((1ULL << _la) & 1048560) != 0)) {
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

                  default:
                    break;
                  }
                  setState(283);
                  h16();
                  setState(284);
                  match(hosts::COLON);
                  break;
                }

                default:
                  break;
                }
                setState(288);
                h16();
                setState(289);
                match(hosts::COLON);
                break;
              }

              default:
                break;
              }
              setState(293);
              h16();
              setState(294);
              match(hosts::COLON);
              break;
            }

            default:
              break;
            }
            setState(298);
            h16();
            setState(299);
            match(hosts::COLON);
            break;
          }

          default:
            break;
          }
          setState(303);
          h16();
          setState(304);
          match(hosts::COLON);
          break;
        }

        default:
          break;
        }
        setState(308);
        h16();
      }
      setState(311);
      match(hosts::DCOLON);
      break;
    }

    default:
      break;
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


std::any hosts::H16Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitH16(this);
  else
    return visitor->visitChildren(this);
}

hosts::H16Context* hosts::h16() {
  H16Context *_localctx = _tracker.createInstance<H16Context>(_ctx, getState());
  enterRule(_localctx, 16, hosts::RuleH16);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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

    default:
      break;
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


std::any hosts::Ls32Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitLs32(this);
  else
    return visitor->visitChildren(this);
}

hosts::Ls32Context* hosts::ls32() {
  Ls32Context *_localctx = _tracker.createInstance<Ls32Context>(_ctx, getState());
  enterRule(_localctx, 18, hosts::RuleLs32);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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

    default:
      break;
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


std::any hosts::HexdigContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitHexdig(this);
  else
    return visitor->visitChildren(this);
}

hosts::HexdigContext* hosts::hexdig() {
  HexdigContext *_localctx = _tracker.createInstance<HexdigContext>(_ctx, getState());
  enterRule(_localctx, 20, hosts::RuleHexdig);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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
          ((1ULL << _la) & 1032192) != 0))) {
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


std::any hosts::Dec_octetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitDec_octet(this);
  else
    return visitor->visitChildren(this);
}

hosts::Dec_octetContext* hosts::dec_octet() {
  Dec_octetContext *_localctx = _tracker.createInstance<Dec_octetContext>(_ctx, getState());
  enterRule(_localctx, 22, hosts::RuleDec_octet);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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
        ((1ULL << _la) & 496) != 0))) {
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
        ((1ULL << _la) & 1008) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
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


std::any hosts::DigitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitDigit(this);
  else
    return visitor->visitChildren(this);
}

hosts::DigitContext* hosts::digit() {
  DigitContext *_localctx = _tracker.createInstance<DigitContext>(_ctx, getState());
  enterRule(_localctx, 24, hosts::RuleDigit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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


std::any hosts::Non_zero_digitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitNon_zero_digit(this);
  else
    return visitor->visitChildren(this);
}

hosts::Non_zero_digitContext* hosts::non_zero_digit() {
  Non_zero_digitContext *_localctx = _tracker.createInstance<Non_zero_digitContext>(_ctx, getState());
  enterRule(_localctx, 26, hosts::RuleNon_zero_digit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16352) != 0))) {
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


std::any hosts::Host_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitHost_name(this);
  else
    return visitor->visitChildren(this);
}

hosts::Host_nameContext* hosts::host_name() {
  Host_nameContext *_localctx = _tracker.createInstance<Host_nameContext>(_ctx, getState());
  enterRule(_localctx, 28, hosts::RuleHost_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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


std::any hosts::Ireg_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitIreg_name(this);
  else
    return visitor->visitChildren(this);
}

hosts::Ireg_nameContext* hosts::ireg_name() {
  Ireg_nameContext *_localctx = _tracker.createInstance<Ireg_nameContext>(_ctx, getState());
  enterRule(_localctx, 30, hosts::RuleIreg_name);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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
      ((1ULL << _la) & 67070209294328) != 0)) {
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


std::any hosts::IunreservedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitIunreserved(this);
  else
    return visitor->visitChildren(this);
}

hosts::IunreservedContext* hosts::iunreserved() {
  IunreservedContext *_localctx = _tracker.createInstance<IunreservedContext>(_ctx, getState());
  enterRule(_localctx, 32, hosts::RuleIunreserved);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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
          ((1ULL << _la) & 65970697666568) != 0))) {
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


std::any hosts::AlphaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitAlpha(this);
  else
    return visitor->visitChildren(this);
}

hosts::AlphaContext* hosts::alpha() {
  AlphaContext *_localctx = _tracker.createInstance<AlphaContext>(_ctx, getState());
  enterRule(_localctx, 34, hosts::RuleAlpha);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1099511611392) != 0))) {
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


std::any hosts::CommentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitComment(this);
  else
    return visitor->visitChildren(this);
}

hosts::CommentContext* hosts::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 36, hosts::RuleComment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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
      ((1ULL << _la) & 140737488355324) != 0)) {
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


std::any hosts::Command_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitCommand_line(this);
  else
    return visitor->visitChildren(this);
}

hosts::Command_lineContext* hosts::command_line() {
  Command_lineContext *_localctx = _tracker.createInstance<Command_lineContext>(_ctx, getState());
  enterRule(_localctx, 38, hosts::RuleCommand_line);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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


std::any hosts::List_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitList_command(this);
  else
    return visitor->visitChildren(this);
}

hosts::List_commandContext* hosts::list_command() {
  List_commandContext *_localctx = _tracker.createInstance<List_commandContext>(_ctx, getState());
  enterRule(_localctx, 40, hosts::RuleList_command);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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


std::any hosts::Set_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitSet_command(this);
  else
    return visitor->visitChildren(this);
}

hosts::Set_commandContext* hosts::set_command() {
  Set_commandContext *_localctx = _tracker.createInstance<Set_commandContext>(_ctx, getState());
  enterRule(_localctx, 42, hosts::RuleSet_command);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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


std::any hosts::Get_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitGet_command(this);
  else
    return visitor->visitChildren(this);
}

hosts::Get_commandContext* hosts::get_command() {
  Get_commandContext *_localctx = _tracker.createInstance<Get_commandContext>(_ctx, getState());
  enterRule(_localctx, 44, hosts::RuleGet_command);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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


std::any hosts::Purge_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitPurge_command(this);
  else
    return visitor->visitChildren(this);
}

hosts::Purge_commandContext* hosts::purge_command() {
  Purge_commandContext *_localctx = _tracker.createInstance<Purge_commandContext>(_ctx, getState());
  enterRule(_localctx, 46, hosts::RulePurge_command);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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

      default:
        break;
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


std::any hosts::Rm_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitRm_command(this);
  else
    return visitor->visitChildren(this);
}

hosts::Rm_commandContext* hosts::rm_command() {
  Rm_commandContext *_localctx = _tracker.createInstance<Rm_commandContext>(_ctx, getState());
  enterRule(_localctx, 48, hosts::RuleRm_command);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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


std::any hosts::Cmd_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitCmd_list(this);
  else
    return visitor->visitChildren(this);
}

hosts::Cmd_listContext* hosts::cmd_list() {
  Cmd_listContext *_localctx = _tracker.createInstance<Cmd_listContext>(_ctx, getState());
  enterRule(_localctx, 50, hosts::RuleCmd_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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


std::any hosts::Cmd_purgeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitCmd_purge(this);
  else
    return visitor->visitChildren(this);
}

hosts::Cmd_purgeContext* hosts::cmd_purge() {
  Cmd_purgeContext *_localctx = _tracker.createInstance<Cmd_purgeContext>(_ctx, getState());
  enterRule(_localctx, 52, hosts::RuleCmd_purge);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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


std::any hosts::Cmd_rmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitCmd_rm(this);
  else
    return visitor->visitChildren(this);
}

hosts::Cmd_rmContext* hosts::cmd_rm() {
  Cmd_rmContext *_localctx = _tracker.createInstance<Cmd_rmContext>(_ctx, getState());
  enterRule(_localctx, 54, hosts::RuleCmd_rm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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


std::any hosts::Cmd_setContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitCmd_set(this);
  else
    return visitor->visitChildren(this);
}

hosts::Cmd_setContext* hosts::cmd_set() {
  Cmd_setContext *_localctx = _tracker.createInstance<Cmd_setContext>(_ctx, getState());
  enterRule(_localctx, 56, hosts::RuleCmd_set);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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


std::any hosts::Cmd_getContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hostsVisitor*>(visitor))
    return parserVisitor->visitCmd_get(this);
  else
    return visitor->visitChildren(this);
}

hosts::Cmd_getContext* hosts::cmd_get() {
  Cmd_getContext *_localctx = _tracker.createInstance<Cmd_getContext>(_ctx, getState());
  enterRule(_localctx, 58, hosts::RuleCmd_get);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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

void hosts::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  hostsParserInitialize();
#else
  ::antlr4::internal::call_once(hostsParserOnceFlag, hostsParserInitialize);
#endif
}
