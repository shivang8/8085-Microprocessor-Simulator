#include "master.h"
#include "global.h"
#include "tools.h"

bool add(string temp_string)
{
	vector<string> v;
	v=splitter(temp_string);
	int size=v.size();
	if(size==2)
	{
		int from=resister_is(v[1]);
		if(from==-1)
			return true;
		else if(from==7)
		{
			from=check_storage(rpair(5));
			if(from==-1)
                return true;
            else
                gpr[0]=gpr[0]+from;
		}
		else
		{
			gpr[0]=gpr[0]+gpr[from];
		}
		set_flag_register(gpr[0]);
		return false;
	}
	else
		return true;
}
