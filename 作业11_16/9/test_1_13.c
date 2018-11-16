#include "test_1_13.h"

int subString(char * str, char * substr)
{
	unsigned int i, n = 0,len = 0;
	
	while(*str++)len++;
	str = str -len -1;
	for(i = 0; i < len; i++)
		if((str[i] == substr[0]) && (str[i + 1] == substr[1]) && (str[i + 2] == substr[2]))
			++n;
	return n;
}