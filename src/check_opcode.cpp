#include "master.h"
#include "global.h"

int check_opcode(string key)
{
	if (opcode.find(key) == opcode.end())
		return -1;
	else
		return opcode[key];
}
