#include<stdio.h>
#include<stdlib.h>

int* signNum(int* arr, int size)
{
	int* temp = (int *)malloc(sizeof(int)*size);
	int sum = 0;
	int i;
	for (i = 0; i < size; i++)
	{
		if (arr[i] < 4)
		{
			temp[sum++] = arr[i];
		}
	}
	temp[sum++] = 4;
	for (i = 0; i < size; i++)
	{
		if (arr[i] > 4)
		{
			temp[sum++] = arr[i];
		}
	}

	return temp;
}
int main(void)
{
	int arr[20] = { 5,2,2,7,0,7,1,4 };
	int *prt = signNum(arr, 8);
	for (int i = 0; i < 8; i++)
	{
		printf("%d ", *(prt + i));
	}
	system("pause");
	return 0;
}
