#include "master.h"
#include "global.h"
#include "tools.h"

bool lhld(string temp_string)
{
	vector<string> v;
	v=splitter(temp_string);
	int size=v.size();
	if(size==2)
	{
		int len=v[1].length();
		if(len == 4 )
		{
			int address=hex2dec(v[1]);
			if(address==-1)
				return true;
			string data=dec2hex(storage[address],2);
			string temp1="",temp2="";
			temp1=temp1+data[0]+data[1];
			data=dec2hex(storage[address+1],2);
			temp2=temp2+data[0]+data[1];
			gpr[6]=hex2dec(temp1);
			gpr[5]=hex2dec(temp2);
			return false;
		}
		else
		{
			return true;
		}
	}
	else
		return true;
}
