//Modify this file to change what commands output to your statusbar, and recompile using the make command.
2   static const Block blocks[] = {
  1     /*Icon*/    /*Command*/                                         /*Update Interval*/ /*Update Signal*/
  2     {"",        "sb-connman",                                                5,                 0},
  3
  4     {"",        "sb-ram",                                                   10,                 0},
  5
  6     {"",        "sb-bat",                                                   60,                 0},
  7
  8     {"",        "sb-date",                                                   5,                 0},
  9
 10 };
 11
 12 //sets delimeter between status commands. NULL character ('\0') means no delimeter.
 13 static char delim[] = " | ";
 14 static unsigned int delimLen = 5;
