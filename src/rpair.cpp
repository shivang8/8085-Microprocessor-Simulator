#include "master.h"
#include "global.h"
#include "tools.h"

int gpr[7];				 	// | A | B | C | D | E | H | L |

int rpair(int start)						//		30.7.17
{
	string temp="";
	temp=temp+dec2hex(gpr[start],2);
	temp=temp+dec2hex(gpr[start+1],2);
	return hex2dec(temp);
}
