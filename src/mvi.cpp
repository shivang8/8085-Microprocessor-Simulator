#include "master.h"
#include "global.h"
#include "tools.h"

bool mvi(string temp_string)
{
	vector<string> v;
	v=splitter(temp_string);
	int size=v.size();
	if(size==3)
	{
		int to=resister_is(v[1]);
		if(to == -1 )
			return true;
		else if( to == 7 )
		{
			int len=v[2].length();
			if(len == 2)
			{
				int data=hex2dec(v[2]);
				if(data==-1)
					return true;
				to=rpair(5);
				storage[to]=data;
			}
			else
				return true;
		}
		else
		{
			int data=hex2dec(v[2]);
			if(data==-1)
					return true;
			gpr[to]=data;
		}
		return false;
	}
	else
		return true;
}
