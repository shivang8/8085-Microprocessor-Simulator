#include "master.h"
#include "global.h"

bitset<5> flag;					// | S | Z | AY | P | CY |

void set_flag_register(int result)
{
	bitset<8> name(result);                   //store our result in binay form
	if(result>255)								//to set carry flag
	{
		flag[0]=1;
	}
	else
	{
		flag[0]=0;
	}
	if(result<0)									//to set sign flag
	{
		flag[4]=1;
	}
	else
	{
		flag[4]=0;
	}
	int numberof1=name.count();					   //count no of 1
	if(numberof1%2==0)
	{
		flag[1]=1;
	}
	else
	{
		flag[1]=0;
	}
	int numberof0=8-numberof1;					   //count no 0
	if(numberof0==8)
	{
		flag[3]=1;
	}
	else
	{
		flag[3]=0;
	}		
}
