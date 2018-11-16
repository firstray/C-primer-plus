#include"test_1_13.h"

int main(void)
{
	int i;
	
	int a[20] = {0};
	srand(time(NULL));
	for(i = 20;i>=0;--i)
	{
		a[i] = rand()%901+100;
		printf("%d\n",a[i]);
	}
	reverse(a);
	system("pause");
	return 0;
}