#include"test_1_13.h"

int main(void)
{
	int i;
	
	int a[20] = {0};
	srand(time(NULL));
	for(i = 0;i<20;++i)
	{
		a[i] = rand()%901+100;
		printf("%d\n",a[i]);
	}
	printf("\n%d\n",oodsum(a));
	printf("%d\n",evensum(a));
	printf("%d\n",sum(a));
	printf("\n%d\n",add(a,1));
	printf("%d\n",add(a,0));
	printf("%d\n",add(a,2));
	system("pause");
	return 0;
}