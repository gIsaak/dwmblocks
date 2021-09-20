//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/                                         /*Update Interval*/ /*Update Signal*/
    {"",        "sb-connman",                                                5,                 4},
    {"",        "sb-ram",                                                   10,                 3},
    {"",        "sb-bat",                                                   60,                 2},
    {"",        "sb-date",                                                   5,                 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
