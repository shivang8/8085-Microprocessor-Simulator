#include "master.h"
#include "global.h"

int hex2dec(string a)													// TOOLS.h
{														// hexdecimal validator missing
	int l=a.length(),i=0,dec=0,p=pow(16,l-1);
	while(i<l)
	{
		int temp;
		if(a[i]>=48 && a[i]<=57)
			temp=a[i]-48;
		else
		{
			switch(a[i])
			{
				case 'A':
				case 'a': temp=10;
					break;
				case 'B':
				case 'b': temp=11;
					break;
				case 'C':
				case 'c': temp=12;
					break;
				case 'D':
				case 'd': temp=13;
					break;
				case 'E':
				case 'e': temp=14;
					break;
				case 'F':
				case 'f': temp=15;
					break;
				default	:	return -1;
			}
		}
		dec=dec+p*temp;
		i++;
		p=p/16;
	}
	return dec;
}
