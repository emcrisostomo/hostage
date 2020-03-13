parser grammar hosts;

options {
    tokenVocab=hosts_lexer;
}

hosts_file
  : line* EOF
  ;

line
  :  (comment | table_entry | empty_line) NewLine
  ;

empty_line
  : (Space)*
  ;

table_entry
  : address (Space)+ host_name ((Space)+ host_name)* comment?
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

comment
  :  (Space)* '#' ~(NewLine)*
  ;

// commands
// hostage set   (address) (host_name)
// hostage rm    host    (host_name)+
// hostage rm    address (address)+
command_line
  : (list_command
  | set_command
  | rm_host_command
  | rm_address_command) EOF
  ;

list_command
  : cmd_list
  ;

set_command
  : cmd_set Space+ (address) Space+ (host_name)
  ;


rm_host_command
  : cmd_rm Space+ cmd_host (Space+ host_name)+
  ;

rm_address_command
  : cmd_rm Space+ cmd_address (Space+ address)+
  ;

cmd_list: L I S T;
cmd_rm: R M;
cmd_host: H O S T;
cmd_set : S E T;
cmd_address: A D D R E S S;
