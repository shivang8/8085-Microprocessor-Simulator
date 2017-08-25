#include "master.h"
#include "global.h"
#include "tools.h"

bool cma(string temp_string)
{
	vector<string> v;
	v=splitter(temp_string);
	int size=v.size();
	if(size==1)
	{
		bitset<8> temp(gpr[0]);
		for(int i=0;i<8;i++)
		{
			if(temp.test(i)==1)
			{
				temp[i]=0;
			}
			else
			{
				temp[i]=1;
			}
		}
		int sum=(int)(temp.to_ulong());
		gpr[0]=sum;
		return false;
	}
	else
		return true;
}
