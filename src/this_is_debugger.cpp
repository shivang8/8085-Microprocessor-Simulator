#include "master.h"
#include "global.h"
#include "tools.h"
#include "debugger.h"

void this_is_debugger()
{
	initilize_map_debugger();
	cout<<endl;
	string temp_string="";
	int code=-1;
	breakpoints[size_pc-1]=true;
	cout<<"\t*** DEBUGGER MODE ***"<<endl;
	cout<<"Enter Debugger code below or type help for list of instructions"<<endl;
	do
	{
		cout<<"$ ";
		getline(cin,temp_string);
		temp_string=string_uppercase(temp_string);
		vector<string> v;
		string temp(temp_string);
		v = splitter(temp);
		int size=v.size();	
		code=check_debugger(v[0]);
		if(code==-1)
		{
			cout<<"*** ERROR: Invalid Debugger Command. *** \nType correct command or type help for list of commands."<<endl;
			continue;
		}
		else if(code==0)
		{
			// Break
			if(size==2)
			{
				int n=breakpoint(v);
				if(n==-1)
					cout<<"*** ERROR: Invalid Line Number. ***"<<endl;
				else if(n>=size_pc)
					cout<<"*** ERROR: Line Number out of Bound. Enter Line Number less than "<<size_pc<<". ***"<<endl;
				else
					breakpoints[n]=true;
			}
			else
				cout<<"*** ERROR: Invalid Number of arguments. ***"<<endl;
		}
		else if(code==1)
		{
			// RUN
			if(size==1)
				debugger_execution();
			else
				cout<<"*** ERROR: Invalid Number of arguments. ***"<<endl;
		}
		else if(code==2)
		{
			// STEP
			 if(size==1)
				debugger_execution(index_pc);
			else
				cout<<"*** ERROR: Invalid Number of arguments. ***"<<endl;
		}
		else if(code==3)
		{
			// PRINT
			if(size==2)
				print(v);
			else
				cout<<"*** ERROR: Invalid Number of arguments. ***"<<endl;
		}
		else if(code==4)
		{
			// QUIT
			if(size==1)
				break;
			else
				cout<<"*** ERROR: Invalid Number of arguments. ***"<<endl;
				break;
		}
		else if(code==5)
		{
			// HELP
			if(size==1)
				help();
			else
				cout<<"*** ERROR: Invalid Number of arguments. ***"<<endl;
		}
		temp_string="";
	}while(code!=4);
}
