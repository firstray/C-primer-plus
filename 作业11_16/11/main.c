#include<stdio.h>
#include<stdlib.h>

int * later(int *arr, int size)
{
	int i = 0;
	int k = 0;
	int *temp = (int*)malloc(sizeof(int)*(size + 1));
	for (i = 0; i < size; i++)
	{
		temp[i] = 0;
		if (arr[i] != 0)
		{
			temp[k++] = arr[i];
		}
	}
	return temp;
}
int main(void)
{
	int arr1[20] = { 2,0,4,-1,5 };
	int arr2[20] = { 2,0,4,-1,5,0,0,1 };
	int *pr1 = later(arr1, 5);
	int *pr2 = later(arr2, 8);
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(pr1 + i));
	}
	putchar('\n');
	for (i = 0; i < 8; i++)
	{
		printf("%d ", *(pr2 + i));
	}
	system("pause");
	return 0;
}
