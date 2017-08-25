#include "master.h"
#include "global.h"
#include "tools.h"

bool lxi(string temp_string)
{
	vector<string> v;
	v=splitter(temp_string);
	int size=v.size();
	if(size==3)
	{
		int to=resister_is(v[1]);
		if(to == -1 || to == 7)
			return true;
		else
		{
			int len=v[2].length();
			if(len == 4)
			{
				string data=v[2];
				string temp1="",temp2="";
				temp1=temp1+data[0]+data[1];
				temp2=temp2+data[2]+data[3];
				if(to == 1)
				{
					gpr[1]=hex2dec(temp1);
					gpr[2]=hex2dec(temp2);
				}
				else if(to == 3)
				{
					gpr[3]=hex2dec(temp1);
					gpr[4]=hex2dec(temp2);
				}
				else if(to == 5)
				{
					gpr[5]=hex2dec(temp1);
					gpr[6]=hex2dec(temp2);
				}
				else
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
		return false;
	}
	else
		return true;
}
