#include"test_1_13.h"

int main(void)
{
	int year = (2018-1994)*365;
    int months,i,day,days;
	int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	months = 0;
	for(i = 0; i < 7; ++i)
		months += month[i];
	months = 365 - months;
	day = month[7] - 11;
	days = year + months + day;
	printf("%d",days);
	getchar();
	getchar();
	return 0;
}