#include "master.h"
#include "global.h"

map<int,bool> breakpoints;

bool check_breakpoint(int key)
{
	if (breakpoints.find(key)  == breakpoints.end())
		return false;
	else
		return breakpoints[key];
}
