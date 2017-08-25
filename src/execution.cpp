#include "master.h"
#include "global.h"
#include "tools.h"
#include "arithmetic.h"
#include "branching.h"
#include "logical.h"
#include "load.h"

void execution()
{
	 index_pc=0;
     while(index_pc<size_pc)
     {
           string function1=memory[program_counter[index_pc]];	
           bool check=check_function(function1);
           if(index_pc>size_pc)
		   {
				cout<<"Invalid memory location"<<endl;
		   }
           if(check)
           {
                   cout<<"*** SYNTAX ERROR at Line Number "<<index_pc<<" -> "<<function1<<" ***"<<endl;
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

