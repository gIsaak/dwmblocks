//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		                                    /*Update Interval*/	/*Update Signal*/
    {"",        "sb-connman",                                                5,		            0},

	{"",        "sb-ram",	                                                10,		            0},

    {"",        "sb-bat",                                                   60,                 0},

	{"",        "sb-date",					                                 5,		            0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
