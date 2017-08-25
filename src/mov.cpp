#include "master.h"
#include "global.h"
#include "tools.h"

bool mov(string temp_string)
{
	vector<string> v;
	v=splitter(temp_string);
	int size=v.size();
	if(size==3)
	{
		int to=resister_is(v[1]);
		int from=resister_is(v[2]);
		if(to == -1 || from == -1)
			return true;
		else if( to == 7 && from == 7)
			return true;
		else if( to == 7 && from!=7 && from!=-1 )
		{
			to=rpair(5);
			storage[to]=gpr[from];
		}
		else if( from == 7 && to!=7 && to!=-1)
		{
			from=rpair(5);
			gpr[to]=storage[from];
		}
		else
		{
			gpr[to]=gpr[from];
		}
		return false;
	}
	else
		return true;
}
