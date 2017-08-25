#ifndef _debugger_h
#define _debugger_h

void debugger_execution(int);
void debugger_execution();
bool check_breakpoint(int);
void initilize_map_debugger();
int check_debugger(string);
void help();
int breakpoint(vector<string>&);
void print(vector<string>&);
void this_is_debugger();

#endif
