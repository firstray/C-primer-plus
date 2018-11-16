#include "test_1_13.h"

char * join(char * a,char * b,int buf)
{
	int len = 0;
	static char buffer[100] = "";
	while(*a)
	{
		buffer[len] = *a++;
		len++;
	}
	while(*b)
	{
		
		buffer[len] = *b++;
		len++;
	}
	buffer[len] = '\0';
	return buffer;
}