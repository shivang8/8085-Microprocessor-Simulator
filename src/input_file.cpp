#include "master.h"
#include "global.h"
#include "tools.h"
#include "debugger.h"

bool input_file(char *arg)
{
	bool termination_flag=false;
	ifstream input;
	input.open(arg);
	string temp_string;
	int start_memory,memory_address;
	input>>temp_string;
	start_memory=hex2dec(temp_string);								//STARTING ADDRESS
	if(start_memory==-1)
	{
		cout<<"***ERROR: Invalid Memory Address ***"<<endl;
		termination_flag=true;
	}
	else
	{
		memory_address=start_memory;
		input.ignore();
	}
	while(!termination_flag)
	{
		getline(input,temp_string);
		temp_string=string_uppercase(temp_string);
		program_counter_increment(memory_address);
		memory[memory_address]=temp_string;
		vector<string> v;
		string temp(temp_string);
		v = splitter(temp);											// To Split the string into parts
		int size=check_opcode(v[0]); 								// To fetch Size of OPCODE
		if(size==-1)
		{
			cout<<"*** ERROR: INVALID 8085 COMMAND. ***\nTerminating Program..."<<endl;							// ERROR STATEMENT
			termination_flag=true;
			break;
		}
		else if(size==-2) 											// RETURN -2 for HLT
		{
			break;
		}
		else
		{
			memory_address += size;
		}
		temp_string="";
	}
	input.close();
	return termination_flag;
}
