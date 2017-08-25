#include "master.h"
#include "global.h"
#include "tools.h"

bool dcr(string temp_string)
{
		vector<string> v;
		v=splitter(temp_string);
		int size=v.size();
		if(size==2)
		{
			int temp=resister_is(v[1]);
			int from;
		    string data;
		    if(temp==-1)
				 return true;
		    else if(temp==7)
		    {
				 from=check_storage(rpair(5));
				 from=from-1;
				 if(from<0)
					storage[rpair(5)]=255;
				 else
					storage[rpair(5)]=from;
			 }
			 else
			 {
				 from=gpr[temp]-1;
				 if(from<0)
					gpr[temp]=255;
				 else
					gpr[temp]=from;
			 }
			 set_flag_register(from);
			return false;
		}
		return true;
}
