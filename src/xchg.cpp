#include "master.h"
#include "global.h"
#include "tools.h"

bool xchg(string temp_string)
{
	vector<string> v;
	v=splitter(temp_string);
	int size=v.size();
	if(size==1)
	{
		int swap_temp=gpr[5];
		gpr[5]=gpr[3];
		gpr[3]=swap_temp;
		swap_temp=gpr[6];
		gpr[6]=gpr[4];
		gpr[4]=swap_temp;
		return false;
	}
	else
		return true;
}
