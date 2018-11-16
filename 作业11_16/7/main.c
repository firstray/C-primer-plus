#include"test_1_13.h"

int main(void)
{
	char  a[] = "China zhe A de Z";
	strSort(a,0);
	printf("%s\n",a);
	strSort(a,1);
	printf("%s\n",a);
	system("pause");
	return 0;
}