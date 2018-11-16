#include "test_1_13.h"

void  strSort(char * a,int updown)
{
	int len = 0;
	int i,j;
	char temp;
	int jadge;
	while(*a++)
	{
		len++;
	}
	a = a - len+1;
	for(j = 0;j<len - 1;j++)
	{
		for(i = 0; i < len - 1 - j;i++)
		{
			if(updown == 0)
			{
				if(a[i]>a[i+1])
				{
					temp = a[i];
					a[i] = a[i+1];
					a[i+1] = temp;
				}
			}
			else
			{
				if(a[i]<a[i+1])
				{
					temp = a[i];
					a[i] = a[i+1];
					a[i+1] = temp;
				}
			}
		}
	}
	return a;
}