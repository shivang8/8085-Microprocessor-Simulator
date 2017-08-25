#include "master.h"
#include "global.h"
#include "tools.h"

bool cmp(string temp_string)
{
	vector<string> v;
	v=splitter(temp_string);
	int size=v.size();
	if(size==2)
	{
		int compare=resister_is(v[1]);
		if(compare == -1)
			return true;
		else if( compare == 7 )
		{
			int compare=check_storage(rpair(5));
			if( compare == -1)
				return true;
			else
			{
				if(compare==gpr[0])
				{
						flag[3]=1;
						flag[0]=0;												//SET ZERO FLAG
				}
				else if(compare>gpr[0])
				{
						flag[0]=1;
						flag[3]=0;													//SET CARRY FLAG
				}
				else
				{
						flag[0]=0;
						flag[3]=0;													//RESET ZERO AND CARRY FLAG
				}
			}
		}
		else
		{
			if(gpr[compare]==gpr[0])
			{
					flag[3]=1;
					flag[0]=0;									//SET ZERO FLAG
			}
			else if(gpr[compare]>gpr[0])
			{
					flag[0]=1;
					flag[3]=0;										//SET CARRY FLAG
			}
			else
			{
					flag[0]=0;
					flag[3]=0;												//RESET ZERO AND CARRY FLAG
			}
		}
		return false;
	}
	else
		return true;
}
