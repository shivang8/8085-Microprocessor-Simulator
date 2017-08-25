#include "master.h"
#include "global.h"
#include "tools.h"
#include "debugger.h"

void debugger_execution()
{
    if(index_pc<size_pc)
    {
		while(index_pc<size_pc)
		{
			string function1=memory[program_counter[index_pc]];	
			bool check=check_function(function1);
			if(check)
			{
				cout<<"*** SYNTAX ERROR at Line Number "<<index_pc<<" -> "<<function1<<" ***"<<endl;
				break;
			}
			if(check_breakpoint(index_pc))
			{
				index_pc++;
				break;		
			}
			index_pc++;
		}
		for(int i=0;i<7;i++)
		{
			cout<<dec2hex(gpr[i],2)<<" ";
		}
		cout<<endl;
	}
	else
	{
		cout<<"*** ERROR: End of Code Reached ***"<<endl;
	}
}
