#include "master.h"
#include "global.h"
#include "tools.h"

bool set1(string temp_string)							
{
	vector<string> v;
	v=splitter(temp_string);
	int size=v.size();
	if(size==3)
	{
		int len=v[1].length();
		int len2=v[2].length();
		if (len == 4 && len2 == 2)
		{
			len=hex2dec(v[1]);
			len2=hex2dec(v[2]);
			if(len==-1 || len2==-1)
				return true;
			storage[len]=len2;
			return false;
		}
		else
			return true;
	}
	else
		return true;
}
