#include "master.h"
#include "global.h"
#include "tools.h"

bool lda(string temp_string)
{
	vector<string> v;
	v=splitter(temp_string);
	int size=v.size();
	if(size==2)
	{
		int len=v[1].length();
		if(len == 4 )
		{
			int data=hex2dec(v[1]);
			if(data==-1)
					return true;
			gpr[0]=storage[data];
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

