#include "test_1_13.h"

char * Max(char * str)
{
	char temp,max;
	int i = 0,j = 0;
	int len = 0;
	while(*str++) len++;
	str = str - len -2;
	max = str[i];
	for(i = 0; i< len;i++)
	{
		if(max < str[i+1])
		{
			max = str[i+1];
			j = i+1;
		}
	}
	for(j; j < 0; j--)
	{
			str[j] = str[j-1];
	}
	str[0] = max;
	return str;
}