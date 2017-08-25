#include "master.h"
#include "global.h"

vector<string> splitter(string temp)									// TOOLS.H
{
	vector<string>v;
	string var;
	string res(temp);
	const char *delimiter = " ,";
	char *str = (char *)res.c_str();;
	char *pch;
	pch = strtok(str,delimiter);
	while(pch!=NULL){
		var = pch;
		v.push_back(var);
		pch = strtok(NULL,delimiter);
	}
	return v;
}
