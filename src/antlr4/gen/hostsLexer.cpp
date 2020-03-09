
// Generated from /Users/enrico.m.crisostomo/repos/hostage/src/antlr4/hosts.g4 by ANTLR 4.8


#include "hostsLexer.h"


using namespace antlr4;


hostsLexer::hostsLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

hostsLexer::~hostsLexer() {
  delete _interpreter;
}

std::string hostsLexer::getGrammarFileName() const {
  return "hosts.g4";
}

const std::vector<std::string>& hostsLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& hostsLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& hostsLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& hostsLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& hostsLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> hostsLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& hostsLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> hostsLexer::_decisionToDFA;
atn::PredictionContextCache hostsLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN hostsLexer::_atn;
std::vector<uint16_t> hostsLexer::_serializedATN;

std::vector<std::string> hostsLexer::_ruleNames = {
  u8"T__0", u8"T__1", u8"T__2", u8"T__3", u8"T__4", u8"T__5", u8"T__6", 
  u8"NewLine", u8"Space", u8"UCSCHAR", u8"D0", u8"D1", u8"D2", u8"D3", u8"D4", 
  u8"D5", u8"D6", u8"D7", u8"D8", u8"D9", u8"A", u8"B", u8"C", u8"D", u8"E", 
  u8"F", u8"G", u8"H", u8"I", u8"J", u8"K", u8"L", u8"M", u8"N", u8"O", 
  u8"P", u8"Q", u8"R", u8"S", u8"T", u8"U", u8"V", u8"W", u8"X", u8"Y", 
  u8"Z"
};

std::vector<std::string> hostsLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> hostsLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> hostsLexer::_literalNames = {
  "", u8"'.'", u8"':'", u8"'::'", u8"'-'", u8"'_'", u8"'~'", u8"'#'", "", 
  "", "", u8"'0'", u8"'1'", u8"'2'", u8"'3'", u8"'4'", u8"'5'", u8"'6'", 
  u8"'7'", u8"'8'", u8"'9'"
};

std::vector<std::string> hostsLexer::_symbolicNames = {
  "", "", "", "", "", "", "", "", u8"NewLine", u8"Space", u8"UCSCHAR", u8"D0", 
  u8"D1", u8"D2", u8"D3", u8"D4", u8"D5", u8"D6", u8"D7", u8"D8", u8"D9", 
  u8"A", u8"B", u8"C", u8"D", u8"E", u8"F", u8"G", u8"H", u8"I", u8"J", 
  u8"K", u8"L", u8"M", u8"N", u8"O", u8"P", u8"Q", u8"R", u8"S", u8"T", 
  u8"U", u8"V", u8"W", u8"X", u8"Y", u8"Z"
};

dfa::Vocabulary hostsLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> hostsLexer::_tokenNames;

hostsLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
    0x2, 0x30, 0xc0, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 
    0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 
    0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 
    0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 
    0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 
    0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 
    0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 
    0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 
    0x22, 0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 
    0x9, 0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 
    0x28, 0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 
    0x4, 0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 
    0x2f, 0x9, 0x2f, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x5, 0x9, 0x70, 0xa, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x5, 0xb, 0x77, 0xa, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x2, 
    0x2, 0x30, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 
    0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 0x17, 0xd, 0x19, 0xe, 0x1b, 
    0xf, 0x1d, 0x10, 0x1f, 0x11, 0x21, 0x12, 0x23, 0x13, 0x25, 0x14, 0x27, 
    0x15, 0x29, 0x16, 0x2b, 0x17, 0x2d, 0x18, 0x2f, 0x19, 0x31, 0x1a, 0x33, 
    0x1b, 0x35, 0x1c, 0x37, 0x1d, 0x39, 0x1e, 0x3b, 0x1f, 0x3d, 0x20, 0x3f, 
    0x21, 0x41, 0x22, 0x43, 0x23, 0x45, 0x24, 0x47, 0x25, 0x49, 0x26, 0x4b, 
    0x27, 0x4d, 0x28, 0x4f, 0x29, 0x51, 0x2a, 0x53, 0x2b, 0x55, 0x2c, 0x57, 
    0x2d, 0x59, 0x2e, 0x5b, 0x2f, 0x5d, 0x30, 0x3, 0x2, 0x1d, 0x5, 0x2, 
    0xb, 0xb, 0xf, 0xf, 0x22, 0x22, 0x4, 0x2, 0x43, 0x43, 0x63, 0x63, 0x4, 
    0x2, 0x44, 0x44, 0x64, 0x64, 0x4, 0x2, 0x45, 0x45, 0x65, 0x65, 0x4, 
    0x2, 0x46, 0x46, 0x66, 0x66, 0x4, 0x2, 0x47, 0x47, 0x67, 0x67, 0x4, 
    0x2, 0x48, 0x48, 0x68, 0x68, 0x4, 0x2, 0x49, 0x49, 0x69, 0x69, 0x4, 
    0x2, 0x4a, 0x4a, 0x6a, 0x6a, 0x4, 0x2, 0x4b, 0x4b, 0x6b, 0x6b, 0x4, 
    0x2, 0x4c, 0x4c, 0x6c, 0x6c, 0x4, 0x2, 0x4d, 0x4d, 0x6d, 0x6d, 0x4, 
    0x2, 0x4e, 0x4e, 0x6e, 0x6e, 0x4, 0x2, 0x4f, 0x4f, 0x6f, 0x6f, 0x4, 
    0x2, 0x50, 0x50, 0x70, 0x70, 0x4, 0x2, 0x51, 0x51, 0x71, 0x71, 0x4, 
    0x2, 0x52, 0x52, 0x72, 0x72, 0x4, 0x2, 0x53, 0x53, 0x73, 0x73, 0x4, 
    0x2, 0x54, 0x54, 0x74, 0x74, 0x4, 0x2, 0x55, 0x55, 0x75, 0x75, 0x4, 
    0x2, 0x56, 0x56, 0x76, 0x76, 0x4, 0x2, 0x57, 0x57, 0x77, 0x77, 0x4, 
    0x2, 0x58, 0x58, 0x78, 0x78, 0x4, 0x2, 0x59, 0x59, 0x79, 0x79, 0x4, 
    0x2, 0x5a, 0x5a, 0x7a, 0x7a, 0x4, 0x2, 0x5b, 0x5b, 0x7b, 0x7b, 0x4, 
    0x2, 0x5c, 0x5c, 0x7c, 0x7c, 0x3, 0x13, 0x2, 0xa2, 0x2, 0xd801, 0x2, 
    0xf902, 0x2, 0xfdd1, 0x2, 0xfdf2, 0x2, 0xfff1, 0x2, 0x2, 0x3, 0xffff, 
    0x3, 0x2, 0x4, 0xffff, 0x4, 0x2, 0x5, 0xffff, 0x5, 0x2, 0x6, 0xffff, 
    0x6, 0x2, 0x7, 0xffff, 0x7, 0x2, 0x8, 0xffff, 0x8, 0x2, 0x9, 0xffff, 
    0x9, 0x2, 0xa, 0xffff, 0xa, 0x2, 0xb, 0xffff, 0xb, 0x2, 0xc, 0xffff, 
    0xc, 0x2, 0xd, 0xffff, 0xd, 0x2, 0xe, 0xffff, 0xe, 0x2, 0xf, 0xffff, 
    0xf, 0x1002, 0x10, 0xffff, 0x10, 0xc0, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x2, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 0x2, 0x23, 0x3, 0x2, 0x2, 0x2, 0x2, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x35, 0x3, 0x2, 0x2, 0x2, 0x2, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x39, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x43, 0x3, 0x2, 0x2, 0x2, 0x2, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x47, 0x3, 0x2, 0x2, 0x2, 0x2, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x4f, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x51, 0x3, 0x2, 0x2, 0x2, 0x2, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x55, 0x3, 0x2, 0x2, 0x2, 0x2, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x59, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0x3, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x7, 0x63, 0x3, 0x2, 0x2, 0x2, 0x9, 0x66, 0x3, 0x2, 0x2, 0x2, 
    0xb, 0x68, 0x3, 0x2, 0x2, 0x2, 0xd, 0x6a, 0x3, 0x2, 0x2, 0x2, 0xf, 0x6c, 
    0x3, 0x2, 0x2, 0x2, 0x11, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x13, 0x73, 0x3, 
    0x2, 0x2, 0x2, 0x15, 0x76, 0x3, 0x2, 0x2, 0x2, 0x17, 0x78, 0x3, 0x2, 
    0x2, 0x2, 0x19, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x7c, 0x3, 0x2, 0x2, 
    0x2, 0x1d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0x21, 0x82, 0x3, 0x2, 0x2, 0x2, 0x23, 0x84, 0x3, 0x2, 0x2, 0x2, 0x25, 
    0x86, 0x3, 0x2, 0x2, 0x2, 0x27, 0x88, 0x3, 0x2, 0x2, 0x2, 0x29, 0x8a, 
    0x3, 0x2, 0x2, 0x2, 0x2b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x8e, 0x3, 
    0x2, 0x2, 0x2, 0x2f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x31, 0x92, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x94, 0x3, 0x2, 0x2, 0x2, 0x35, 0x96, 0x3, 0x2, 0x2, 
    0x2, 0x37, 0x98, 0x3, 0x2, 0x2, 0x2, 0x39, 0x9a, 0x3, 0x2, 0x2, 0x2, 
    0x3b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0xa0, 0x3, 0x2, 0x2, 0x2, 0x41, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x43, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x47, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0x49, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x4b, 0xac, 0x3, 0x2, 
    0x2, 0x2, 0x4d, 0xae, 0x3, 0x2, 0x2, 0x2, 0x4f, 0xb0, 0x3, 0x2, 0x2, 
    0x2, 0x51, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x53, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0x55, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x57, 0xb8, 0x3, 0x2, 0x2, 0x2, 0x59, 
    0xba, 0x3, 0x2, 0x2, 0x2, 0x5b, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x5d, 0xbe, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x30, 0x2, 0x2, 0x60, 0x4, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 0x3c, 0x2, 0x2, 0x62, 0x6, 0x3, 0x2, 
    0x2, 0x2, 0x63, 0x64, 0x7, 0x3c, 0x2, 0x2, 0x64, 0x65, 0x7, 0x3c, 0x2, 
    0x2, 0x65, 0x8, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x7, 0x2f, 0x2, 0x2, 
    0x67, 0xa, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x7, 0x61, 0x2, 0x2, 0x69, 
    0xc, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x80, 0x2, 0x2, 0x6b, 0xe, 
    0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x25, 0x2, 0x2, 0x6d, 0x10, 0x3, 
    0x2, 0x2, 0x2, 0x6e, 0x70, 0x7, 0xf, 0x2, 0x2, 0x6f, 0x6e, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x71, 0x72, 0x7, 0xc, 0x2, 0x2, 0x72, 0x12, 0x3, 0x2, 0x2, 0x2, 
    0x73, 0x74, 0x9, 0x2, 0x2, 0x2, 0x74, 0x14, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0x77, 0x9, 0x1d, 0x2, 0x2, 0x76, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 0x16, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 0x32, 0x2, 0x2, 0x79, 0x18, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x33, 0x2, 0x2, 0x7b, 0x1a, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x7d, 0x7, 0x34, 0x2, 0x2, 0x7d, 0x1c, 0x3, 0x2, 0x2, 
    0x2, 0x7e, 0x7f, 0x7, 0x35, 0x2, 0x2, 0x7f, 0x1e, 0x3, 0x2, 0x2, 0x2, 
    0x80, 0x81, 0x7, 0x36, 0x2, 0x2, 0x81, 0x20, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x83, 0x7, 0x37, 0x2, 0x2, 0x83, 0x22, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 
    0x7, 0x38, 0x2, 0x2, 0x85, 0x24, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x7, 
    0x39, 0x2, 0x2, 0x87, 0x26, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x7, 0x3a, 
    0x2, 0x2, 0x89, 0x28, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x3b, 0x2, 
    0x2, 0x8b, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x9, 0x3, 0x2, 0x2, 
    0x8d, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x9, 0x4, 0x2, 0x2, 0x8f, 
    0x2e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x9, 0x5, 0x2, 0x2, 0x91, 0x30, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x9, 0x6, 0x2, 0x2, 0x93, 0x32, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x95, 0x9, 0x7, 0x2, 0x2, 0x95, 0x34, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0x97, 0x9, 0x8, 0x2, 0x2, 0x97, 0x36, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x99, 0x9, 0x9, 0x2, 0x2, 0x99, 0x38, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x9b, 0x9, 0xa, 0x2, 0x2, 0x9b, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x9c, 
    0x9d, 0x9, 0xb, 0x2, 0x2, 0x9d, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 
    0x9, 0xc, 0x2, 0x2, 0x9f, 0x3e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x9, 
    0xd, 0x2, 0x2, 0xa1, 0x40, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x9, 0xe, 
    0x2, 0x2, 0xa3, 0x42, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x9, 0xf, 0x2, 
    0x2, 0xa5, 0x44, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x9, 0x10, 0x2, 0x2, 
    0xa7, 0x46, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x9, 0x11, 0x2, 0x2, 0xa9, 
    0x48, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x9, 0x12, 0x2, 0x2, 0xab, 0x4a, 
    0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x9, 0x13, 0x2, 0x2, 0xad, 0x4c, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0xaf, 0x9, 0x14, 0x2, 0x2, 0xaf, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0xb0, 0xb1, 0x9, 0x15, 0x2, 0x2, 0xb1, 0x50, 0x3, 0x2, 0x2, 
    0x2, 0xb2, 0xb3, 0x9, 0x16, 0x2, 0x2, 0xb3, 0x52, 0x3, 0x2, 0x2, 0x2, 
    0xb4, 0xb5, 0x9, 0x17, 0x2, 0x2, 0xb5, 0x54, 0x3, 0x2, 0x2, 0x2, 0xb6, 
    0xb7, 0x9, 0x18, 0x2, 0x2, 0xb7, 0x56, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 
    0x9, 0x19, 0x2, 0x2, 0xb9, 0x58, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x9, 
    0x1a, 0x2, 0x2, 0xbb, 0x5a, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x9, 0x1b, 
    0x2, 0x2, 0xbd, 0x5c, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x9, 0x1c, 0x2, 
    0x2, 0xbf, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5, 0x2, 0x6f, 0x76, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

hostsLexer::Initializer hostsLexer::_init;
