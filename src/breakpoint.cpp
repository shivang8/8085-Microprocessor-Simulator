#include "master.h"
#include "global.h"

int breakpoint(vector<string> &v)
{
	string s=v[1];
	int l=s.length();
	int breakpoint=0;;
	for(int i=0;i<l;i++)
	{
		if(s[i]>='0' && s[i]<='9')
			breakpoint=breakpoint*10+((int)s[i]-48);
		else
			return -1;
	}
	return breakpoint;
}
