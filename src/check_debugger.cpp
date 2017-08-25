#include "master.h"
#include "global.h"
#include "tools.h"

int check_debugger(string key)
{
	if (debugger.find(key) == debugger.end())
		return -1;
	else
		return debugger[key];
}
