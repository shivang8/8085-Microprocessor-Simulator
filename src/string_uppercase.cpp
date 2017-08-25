#include "master.h"
#include "global.h"

string string_uppercase(string temp)
{
	int l=temp.length();
	char c;
	string s="";
	for(int i=0;i<l;i++)
	{
		c=toupper(temp[i]);
		s=s+c;
	}
	return s;
}
