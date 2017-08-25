#include "master.h"
#include "global.h"
#include "tools.h"

bool dad(string temp_string)
{
		vector<string> v;
		v=splitter(temp_string);
		int size=v.size();
		if(size==2)
		{
			int temp=resister_is(v[1]);
			if(temp==7)
				return true;
			else if(temp==1 || temp==3 || temp==5)
			{
				int from=rpair(temp);
				int with=rpair(5);
				int result=from+with;
				if(result>65535)
				{
					flag[0]=1;
				}
				string data=dec2hex(result,4);
				string X1="",X2="";
				X1=X1+data[0]+data[1];
				X2=X2+data[2]+data[3];
				gpr[5]=hex2dec(X1);
				gpr[6]=hex2dec(X2);
				return false;
			}
			else
				return true;
		}
		else
			return true;
}
