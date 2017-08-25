#ifndef _tools_h
#define _tools_h

void program_counter_increment(int);
string dec2hex(int,int);
int hex2dec(string);
string string_uppercase(string);
void set_flag_register(int);
vector<string> splitter(string);
void initilize_map_opcode();
int check_opcode(string);
int check_memory(int);
int resister_is(string);
int check_storage(int);
int rpair(int);
bool set1(string);
bool check_function(string);
bool does_file_exist(const char*);
void execution();
bool input_file(char*);
bool input();

#endif
