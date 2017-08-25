#include "master.h"
#include "global.h"
#include "tools.h"

bool dcx(string temp_string)
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
				string data;
				int from=rpair(temp);	
				from=from-1;
				if(from==-1)
				{
					from=65535;
					data="FFFF";
				}
				else if(from==0)
				{
					from=0;
					data="0000";
				}
				else
				{
					data=dec2hex(from,4);
				}
				bitset<16> name(from);                   //store our result in binay form
				if(from<0)									//to set sign flag
				{
					flag[4]=1;
				}
				else
				{
					flag[4]=0;
				}
				int numberof1=name.count();					   //count no of 1
				if(numberof1%2==0)
				{
					flag[1]=1;
				}
				else
				{
					flag[1]=0;
				}
				int numberof0=16-numberof1;					   //count no 0
				if(numberof0==16)
				{
					flag[3]=1;
				}
				else
				{
					flag[3]=0;
				}
				string X1="",X2="";
				X1=X1+data[0]+data[1];
				X2=X2+data[2]+data[3];
				gpr[temp]=hex2dec(X1);
				gpr[temp+1]=hex2dec(X2);
				return false;
			}
			else
				return true;
		}
		else
			return true;
}
