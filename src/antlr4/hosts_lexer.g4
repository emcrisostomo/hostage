lexer grammar hosts_lexer;

NewLine
  : '\r'? '\n'
  ;

Space
  :  [ \t\r]
  ;

UCSCHAR
 : '\u00A0'..'\uD7FF'
 | '\uF900'..'\uFDCF'
 | '\uFDF0'..'\uFFEF'
 | [\u{10000}-\u{1FFFD}]
 | [\u{20000}-\u{2FFFD}]
 | [\u{30000}-\u{3FFFD}]
 | [\u{40000}-\u{4FFFD}]
 | [\u{50000}-\u{5FFFD}]
 | [\u{60000}-\u{6FFFD}]
 | [\u{70000}-\u{7FFFD}]
 | [\u{80000}-\u{8FFFD}]
 | [\u{90000}-\u{9FFFD}]
 | [\u{A0000}-\u{AFFFD}]
 | [\u{B0000}-\u{BFFFD}]
 | [\u{C0000}-\u{CFFFD}]
 | [\u{D0000}-\u{DFFFD}]
 | [\u{E1000}-\u{EFFFD}]
 ;

D0 : '0';
D1 : '1';
D2 : '2';
D3 : '3';
D4 : '4';
D5 : '5';
D6 : '6';
D7 : '7';
D8 : '8';
D9 : '9';

A : [aA];
B : [bB];
C : [cC];
D : [dD];
E : [eE];
F : [fF];
G : [gG];
H : [hH];
I : [iI];
J : [jJ];
K : [kK];
L : [lL];
M : [mM];
N : [nN];
O : [oO];
P : [pP];
Q : [qQ];
R : [rR];
S : [sS];
T : [tT];
U : [uU];
V : [vV];
W : [wW];
X : [xX];
Y : [yY];
Z : [zZ];

COLON : ':';
DCOLON : '::';
DASH : '-';
DOT : '.';
UNDERSCORE: '_';
TILDE : '~';
SHARP : '#';
