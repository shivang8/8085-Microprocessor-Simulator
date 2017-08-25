#include "master.h"
#include "tools.h"
#include "global.h"

void print(vector<string> &v)
{
	string s=v[1];
	int l=s.length();
	if (l==1)
	{
		int r=resister_is(s);
		if(r>=0 && r<=6)
		{
			cout<<"\t>"<<dec2hex(gpr[r],2)<<endl;
		}
		else
		{
			cout<<"*** ERROR: INVALID RESGISTER ***"<<endl;
		}
	}
	else if(l==3)
	{
		if(v[1]=="LOC")
		{
			cout<<"\tCURRENT LINE NUMBER: "<<index_pc<<endl;
		}
		else
		{
			cout<<"*** ERROR: INVALID COMMAND ***"<<endl;
		}
	}
	else if(l==4)
	{
		if(v[1]=="FLAG")
		{
			cout<<"\tFLAG: "<<flag[4]<<"   "<<flag[3]<<"   "<<flag[2]<<"   "<<flag[1]<<"   "<<flag[0]<<endl;
		}
		else
		{
			cout<<"*** ERROR: INVALID COMMAND ***"<<endl;
		}
	}
	else if(l==5)
	{
		string temp="";
		temp=temp+s[1]+s[2]+s[3]+s[4];
		if(s[0]=='X')
		{
			int value=hex2dec(temp);
			int check=check_storage(value);
			if(check!=-1)
			{
				cout<<"\t>"<<dec2hex(storage[value],4)<<endl;
			}
			else
			{
				check=check_memory(value);
				if(check!=-1)
					cout<<"\t>"<<memory[check]<<endl;
				else
					cout<<"\t>"<<"0000"<<endl;
			}
		}
		else
			cout<<"*** ERROR: INVALID HEXADECIMAL ADDRESS ***"<<endl;
	}
	else
	{
		cout<<"*** ERROR: INVALID ADDRESS TO REFERENCE ***"<<endl;
	}
}
