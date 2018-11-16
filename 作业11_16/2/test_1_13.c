#include "test_1_13.h"

int oodsum(int *a)
{
	int i;
	int oodsum = 0;
	for(i = 0;i<20;++i)
	{
		if(a[i]%2 == 0)
		{
			continue;
		}
		else
			oodsum = oodsum + a[i];
	}
	return oodsum;	
}
int evensum(int *a)
{
	int i;
	int evensum = 0;
	for(i = 0;i<20;++i)
	{
		if(a[i]%2 != 0)
		{
			continue;
		}
		else
			evensum += a[i];
	}
	return evensum;	
}
int sum(int *a)
{
	int i;
	int sum = 0;
	for(i = 0; i<20;++i)
		sum += a[i];
	return sum;
}
int add(int *a,int flag){
	if(flag == 1)
		return oodsum(a);
	else if(flag == 0)
		return evensum(a);
	else
		return sum(a);

}