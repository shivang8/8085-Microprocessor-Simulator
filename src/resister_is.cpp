#include "master.h"
#include "global.h"

int resister_is(string temp)
{
	if(temp=="M")								// | A | B | C | D | E | H | L | M | *  |
		return 7;								// | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | -1 |
	else if(temp=="A")
		return 0;
	else if(temp=="B")
		return 1;
	else if(temp=="C")
		return 2;
	else if(temp=="D")
		return 3;
	else if(temp=="E")
		return 4;
	else if(temp=="H")
		return 5;
	else if(temp=="L")
		return 6;
	else
		return -1;
}

