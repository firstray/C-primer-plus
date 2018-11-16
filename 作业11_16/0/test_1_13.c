#include "test_1_13.h"
/*读取字符串中最长的单词*/

char* f(char* subString)
{
	int num = 0;
	int tmp = 0;
	char * p = NULL;
	int i = 0;
	static char buf[20] = "";
	while(*subString++)
	{
		tmp++;
		if(*subString == ' ' || *subString == ',' || *subString == '\0')
		{
			if(num < tmp)
			{
				num = tmp;
				p = subString -num +1;
				
			}
			tmp = 0;
		}
	}
	buf[num-1] = '\0';
	for(i = 0;i<num-1;++i)
	{
		buf[i] = *(p+i);
	}
	return buf;
}