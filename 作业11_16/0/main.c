#include"test_1_13.h"

int main(void)
{
	char * substring = (char *)malloc(100*sizeof(char));
	substring= "i love c plus plus   i can put helloworld  i also can put hello";
	printf("%s",f(substring));
	system("pause");
	return 0;
}