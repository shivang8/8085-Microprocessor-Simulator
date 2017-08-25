#include "master.h"
#include "global.h"

map<int,string> memory;		// MAIN MEMORY OF 8085

int check_memory(int key)
{
	if (memory.find(key) == memory.end())
		return -1;
	else
		return key;
}

