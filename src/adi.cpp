#include "master.h"
#include "global.h"
#include "tools.h"

bool adi(string temp_string)
{
	vector<string> v;
	v=splitter(temp_string);
	int size=v.size();
	if(size==2)
	{
		int from=resister_is(v[1]);
		if(from==-1)
		{
			if((v[1].length())==2)
			{
				int data=hex2dec(v[1]);
				if(data==-1)
					return true;
				gpr[0]=gpr[0]+data;
				set_flag_register(gpr[0]);
				return false;
			}
			else
				return true;
		}
		else
			return true;
	}
	else
		return true;
}
