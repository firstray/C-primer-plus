#include"test_1_13.h"

int main(void)
{
	int i = 0;
	int j = 0;
	for(;i < 3;++i)
	{
		for(;j < 3-i;++j)
			smile();
		putchar('\n');
		j = 0;
	}
	getchar();
	getchar();
	return 0;
}