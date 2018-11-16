#include "test_1_13.h"

char * upper(char *a)
{
	int len = 0;
	while(*a++)
	{
		len++;
		if('a'<=*a && *a<= 'z')
			*a = *a -32;
	}
	return a - len -1 ;
}