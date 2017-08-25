#include "master.h"
#include "global.h"
#include "tools.h"

map<string, int> debugger;	// FOR DEBUGGER for the CODE of instruction

void initilize_map_debugger()
{
	debugger["BREAK"]=0;
	debugger["B"]=0;
	debugger["RUN"]=1;
	debugger["R"]=1;
 	debugger["STEP"]=2;
	debugger["S"]=2;
	debugger["PRINT"]=3;
	debugger["P"]=3;
	debugger["QUIT"]=4;
	debugger["Q"]=4;
	debugger["HELP"]=5;
}
