grammar hosts;

hosts_file
  : line* EOF
  ;

line
  :  (comment | table_entry | empty_line)
  ;

empty_line
  : (Space)* NewLine
  ;

table_entry
  : address (Space)+ host_name aliases? NewLine
  ;

address
  : (ip_v4_address | ip_v6_address)
  ;

ip_v4_address
  : dec_octet '.' dec_octet '.' dec_octet '.' dec_octet
  ;

ip_v6_address
  : h16 ':' h16 ':' h16 ':' h16 ':' h16 ':' h16 ':' ls32
  | '::' h16 ':' h16 ':' h16 ':' h16 ':' h16 ':' ls32
  | h16? '::' h16 ':' h16 ':' h16 ':' h16 ':' ls32
  | ((h16 ':')? h16)? '::' h16 ':' h16 ':' h16 ':' ls32
  | (((h16 ':')? h16 ':')? h16)? '::' h16 ':' h16 ':' ls32
  | ((((h16 ':')? h16 ':')? h16 ':')? h16)? '::' h16 ':' ls32
  | (((((h16 ':')? h16 ':')? h16 ':')? h16 ':')? h16)? '::' ls32
  | ((((((h16 ':')? h16 ':')? h16 ':')? h16 ':')? h16 ':')? h16)? '::' h16
  | (((((((h16 ':')? h16 ':')? h16 ':')? h16 ':')? h16 ':')? h16 ':')? h16)? '::'
  ;

h16
  : hexdig hexdig hexdig hexdig
  | hexdig hexdig hexdig
  | hexdig hexdig
  | hexdig
  ;

ls32
  : h16 ':' h16
  | ip_v4_address
  ;

hexdig
  : digit
  | (A | B | C | D | E | F)
  ;

/// dec-octet      = DIGIT                 ; 0-9
///                / %x31-39 DIGIT         ; 10-99
///                / "1" 2DIGIT            ; 100-199
///                / "2" %x30-34 DIGIT     ; 200-249
///                / "25" %x30-35          ; 250-255
dec_octet
  : digit
  | non_zero_digit digit
  | D1 digit digit
  | D2 (D0 | D1 | D2 | D3 | D4) digit
  | D2 D5 (D0 | D1 | D2 | D3 | D4 | D5)
  ;

digit
  : D0
  | non_zero_digit
  ;

non_zero_digit
  : D1
  | D2
  | D3
  | D4
  | D5
  | D6
  | D7
  | D8
  | D9
  ;

host_name
  : ireg_name
  ;

aliases
  : (Space)+ alias ((Space)+ alias)*
  ;

alias
  : ireg_name
  ;

ireg_name
  : (iunreserved)(iunreserved)*
  ;

iunreserved
 : alpha
 | digit
 | ('-' | '.' | '_' | '~' | UCSCHAR)
 ;

alpha
 : A
 | B
 | C
 | D
 | E
 | F
 | G
 | H
 | I
 | J
 | K
 | L
 | M
 | N
 | O
 | P
 | Q
 | R
 | S
 | T
 | U
 | V
 | W
 | X
 | Y
 | Z
 ;

NewLine
  : '\r'? '\n'
  ;

comment
  :  (Space)* '#' ~(NewLine)* NewLine*
  ;

Space
  :  (' ' | '\t')
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
