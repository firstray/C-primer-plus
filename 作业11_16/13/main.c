#include<stdio.h>
#include<stdlib.h>

int**  transposition(int** arr, int row, int col)
{
	int **a = (int**)malloc(sizeof(int*)*col);
	int i, j;
	for (i = 0; i < col; i++)
	{
		a[i] = (int*)malloc(sizeof(int)*row);
	}
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row; i++)
		{
			a[j][i] = arr[i][j];
		}
	}
	return a;
}
int main(void)
{
	int **arr;
	int row, col;
	int i, j;
	printf("输入行和列:\n");
	
	scanf("%d %d", &row, &col);
	printf("输入数字：\n");
	arr = (int**)malloc(sizeof(int*)*row);
	for (i = 0; i < row; i++)
	{
		arr[i] = (int *)malloc(sizeof(int)*col);
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf("%d ", &arr[row][col]);
		}
	}
	printf("转置后:\n");
	int **arr1 = (int**)malloc(sizeof(int*)*col);
	for (i = 0; i < col; i++)
	{
		arr1[i] = (int*)malloc(sizeof(int)*row);
	}
	arr1 = transposition(arr, row, col);
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < row; j++)
		{
			printf("%d", arr[row][col]);
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}
