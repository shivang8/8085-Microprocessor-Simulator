#include "master.h"
#include "global.h"
#include "tools.h"

bool stax(string temp_string)
{
	vector<string> v;
	v=splitter(temp_string);
	int size=v.size();
	if(size==2)
	{
		int index=resister_is(v[1]);
		if(index == 1 || index == 3 || index == 5)
		{
			string temp="";
			temp=temp+dec2hex(gpr[index],2);
			temp=temp+dec2hex(gpr[index+1],2);
			int address=hex2dec(temp);
			if(address==-1)
				return true;
			storage[address]=gpr[0];
			return false;
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
