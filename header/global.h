#ifndef _global_h
#define _global_h

extern int gpr[7];				 	// | A | B | C | D | E | H | L |
							// | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
extern bitset<5> flag;					// | S | Z | AY | P | CY |
							// | 4 | 3 | 2  | 1 | 0  |
extern map<string, int> opcode;	// FOR CHECK_OPCODE for the size of opcode

extern map<string, int> debugger;	// FOR DEBUGGER for the CODE of instruction

extern map<int,string> memory;		// MAIN MEMORY OF 8085

extern int program_counter[500];
extern int index_pc;
extern int size_pc;

extern map<int,int> storage;

extern map<int,bool> breakpoints;

#endif
