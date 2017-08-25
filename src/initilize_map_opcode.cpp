#include "master.h"
#include "global.h"

map<string, int> opcode;	// FOR CHECK_OPCODE for the size of opcode

void initilize_map_opcode()
{
	opcode["STAX"]=1;
	opcode["SET"]=3;
	opcode["MOV"]=1;
	opcode["XCHG"]=1;
 	opcode["ADD"]=1;
	opcode["SUB"]=1;
	opcode["INR"]=1;
	opcode["DCR"]=1;
	opcode["INX"]=1;
	opcode["DCX"]=1;
	opcode["CMP"]=1;
	opcode["CMA"]=1;
	opcode["DAD"]=1;
	opcode["MVI"]=2;
	opcode["ADI"]=2;
	opcode["SUI"]=2;
	opcode["JNZ"]=3;
	opcode["JZ"]=3;
	opcode["LXI"]=3;
	opcode["JNC"]=3;
	opcode["JC"]=3;
	opcode["JMP"]=3;
	opcode["LHLD"]=3;
	opcode["SHLD"]=3;
	opcode["STA"]=3;
	opcode["LDA"]=3;
	opcode["HLT"]=-2;
}
