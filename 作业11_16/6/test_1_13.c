#include "test_1_13.h"

char * change(char * a)
{
	int len = 0;
	int i;
	static char buffer[100] = "";
	while(*a)
	{
		buffer[len] = *a++;
		len++;
	}
	buffer[len] = '\0';
	for(i = 0;i <len;++i)
	{
		if(buffer[i] == 'A')
			buffer[i] = 'E';
		else if(buffer[i] == 'a')
			buffer[i] = 'e';
		else if(buffer[i] == 'Z')
			buffer[i] = 'D';
		else if(buffer[i] == 'z')
			buffer[i] = 'd';
	}
	return buffer;
}
char * convert(char * a)
{
	int len = 0;
	int i;
	static char other[100] = "";
	while(*a)
	{
		if(('A'<= *a && *a<='Z') || ('a'<= *a && *a <= 'z'))
		{
			other[len] = *a;
			other[len+1] = ' ';
			len = len+2;
		}
		*a++;
	}
	other[len] = '\0';
	return other;
}