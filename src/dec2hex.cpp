#include "master.h"
#include "global.h"

string dec2hex(int n, int size)											//TOOLS.h
{
	string str="";
	if(n==0 && size==2)
		str="00";
	else if(n==0 && size==4)
		str="0000";
	else
	{
		while(n!=0)
		{
			int r=n%16;
			n=n/16;
			if(r>=0 && r<=9)
			{
				str=str+char(r+48);
			}
			else
			{
				switch(r)
				{
					case 10:str=str+'A';
						break;
					case 11:str=str+'B';
						break;
					case 12:str=str+'C';
						break;
					case 13:str=str+'D';
						break;
					case 14:str=str+'E';
						break;
					case 15:str=str+'F';
						break;
				}
			}
		}
		int i=str.length();
		for(int j=0;j<i/2;j++)
		{
			char temp=str[j];
			str[j]=str[i-j-1];
			str[i-j-1]=temp;
		}
		if(size == 2)
		{
			if( i == 2 )
				return str;
			else
			{
				str="0"+str;
            }
		}
		else if( size == 4 )
		{
			if( i == 4 )
				return str;
			else if(i == 3 )
			{
				str="0"+str;
			}
			else if(i == 2 )
			{
				str="00"+str;
			}
			else if(i == 1)
			{
				str="000"+str;
			}
		}
	}
	return str;
}
