#include<stdio.h>

int main(void)
{
	int i = 128;
	while(i>0)
	{
		i--;
		printf("%c\t%d\n",i,i);
	}
	system("pause");
	return 0;
}