/*
COMPILER:
1. Converts the programmer's written code into the machine code (binary)
2. Points out the error in the code (if any)
3. Code Optimization
*/

/*
1 bit = binary (0 or 1)
8 bits = 1 B (byte)
1024 bytes (2^10) = 1 KB (kilo byte)
1024 kb (2^10) = 1 MB ( mega byte)
1024 MB (2^10) = 1 GB (giga byte)
1024 GB (2^10) = 1 TB (tera byte)
1024 TB (2^10) = 1 PB (pera byte)
*/

/*
Numbers can be stored into the computer memory by converting it into binary equivalent and then storing them into the transistors.
But what if I want to store an alphabet 'A' ?
-> Throughout the world everyone accepted that A = 65
Now, as 'A' has been allocated a number, it can be easily converted into a binary equivalent 1000001 and can be stored into transistors.
All these allotment of numbers to the characters or special symbols was done in ASCII Table (American Standard Code for Information Interchange)
*/

//==========================================================================================================================================================================================================================================================================================================================================================================================================================

// ASCII Table:
// Dec  Char                                 |      Dec  Char              |      Dec  Char                     |       Dec  Char
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~
//   0  NUL (null)                           |       32  SPACE             |       64  @                        |        96  `
//   1  SOH (start of heading)               |       33  !                 |       65  A                        |        97  a
//   2  STX (start of text)                  |       34  "                 |       66  B                        |        98  b
//   3  ETX (end of text)                    |       35  #                 |       67  C                        |        99  c
//   4  EOT (end of transmission)            |       36  $                 |       68  D                        |       100  d
//   5  ENQ (enquiry)                        |       37  %                 |       69  E                        |       101  e
//   6  ACK (acknowledge)                    |       38  &                 |       70  F                        |       102  f
//   7  BEL (bell)                           |       39  '                 |       71  G                        |       103  g
//   8  BS  (backspace)                      |       40  (                 |       72  H                        |       104  h
//   9  TAB (horizontal tab)                 |       41  )                 |       73  I                        |       105  i
//  10  LF  (NL line feed; new line)         |       42  *                 |       74  J                        |       106  j
//  11  VT  (vertical tab)                   |       43  plus              |       75  K                        |       107  k
//  12  FF  (NP form feed; new page)         |       44  comma             |       76  L                        |       108  l
//  13  CR  (carriage return)                |       45  minus             |       77  M                        |       109  m
//  14  SO  (shift out)                      |       46  dot               |       78  N                        |       110  n
//  15  SI  (shift in)                       |       47  /                 |       79  O                        |       111  o
//  16  DLE (data link escape)               |       48  0                 |       80  P                        |       112  p
//  17  DC1 (device control 1)               |       49  1                 |       81  Q                        |       113  q
//  18  DC2 (device control 2)               |       50  2                 |       82  R                        |       114  r
//  19  DC3 (device control 3)               |       51  3                 |       83  S                        |       115  s
//  20  DC4 (device control 4)               |       52  4                 |       84  T                        |       116  t
//  21  NAK (negative acknowledge)           |       53  5                 |       85  U                        |       117  u
//  22  SYN (synchronous idle)               |       54  6                 |       86  V                        |       118  v
//  23  ETB (end of trans(dot) block)        |       55  7                 |       87  W                        |       119  w
//  24  CAN (cancel)                         |       56  8                 |       88  X                        |       120  x
//  25  EM  (end of medium)                  |       57  9                 |       89  Y                        |       121  y
//  26  SUB (substitute)                     |       58  :                 |       90  Z                        |       122  z
//  27  ESC (escape)                         |       59  ;                 |       91  open box bracket         |       123  {
//  28  FS  (file separator)                 |       60  left arrow        |       92  \                        |       124  |
//  29  GS  (group separator)                |       61  =                 |       93  close box bracket        |       125  }
//  30  RS  (record separator)               |       62  right arrow       |       94  ^                        |       126  ~
//  31  US  (unit separator)                 |       63  ?                 |       95  _                        |       127  DEL

//==========================================================================================================================================================================================================================================================================================================================================================================================================================

// Basic Structure of a code and some basic codes that I already know.

// Variables and Datatypes: Already know

/*
MSB = 1 -> -ve
MSB = 0 -> +ve
1's complement (1 ka 0 aur 0 ka 1) and 2's complement (add 1 to 1's complement) to get the binary equivalent number for the negative integers.
e.g. Dec to Bin: -2 ----write_Considering_2_As_+ve----> 010 ---1's_complement----> 101 + 1 = 110 where In Answer: MSB as 1 represents the negative number.
e.g. Bin to Dec: 10101 --> 01010 + 1 = 01011 = -11 where In Question MSB as 1 represents the negative number.
*/

/*
int -> 32 bit
For -ve -> 2^(31) i.e. -1, -2, -3, -4, -5,........, -2^(31) where 1 bit is already occupied by the sign of that number
For non-negative -> 2^(31) i.e. 0, 1, 2, 3, 4, 5,........, 2^(31)-1 where 1 bit is already occupied by the sign of that number and since non-negative numbers also includes 0 which is the reason for why 2^(31)-1
*/

/*
* HOMEWORK:

Print number

1. Two numbers are given, print their product
2. Two numbers are given a and b, print a-b
3. Print 6*3 in output, don’t print 18, just 6*3 should be in the output screen.
4. If we have only 4 bits, How 3 and -6 will be written in 4 bits.
5. If we have only 5 bits, How 13 and -16 will be written in 5 bits.

=> Full Timepass
*/