#include "master.h"
#include "global.h"
#include "tools.h"

bool input()
{
	bool termination_flag=false;
	string temp_string;
	int start_memory,memory_address;
	cout<<"Enter starting Memory Address in Hexdecimal: ";
	cin>>temp_string;
	start_memory=hex2dec(temp_string);								//STARTING ADDRESS
	if(start_memory==-1)
	{
		cout<<"***ERROR: Invalid Memory Address ***"<<endl;
		termination_flag=true;
	}
	else
	{
		memory_address=start_memory;
		cout<<"Enter Assembly language code below"<<endl;
		cin.ignore();
	}
	while(!termination_flag)
	{
		cout<<dec2hex(memory_address,4)<<" >> ";
		getline(cin,temp_string);
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
	return termination_flag;
}
