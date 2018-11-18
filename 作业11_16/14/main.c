#include<stdio.h>
#include<stdlib.h>

char* part(int arr)
{
	char *temp = (char *)malloc(sizeof(char)*20);
	char t[20];
	int len = 0;//整数的长度
	int dLen = 0;//逗号的个数
	int i = 0;
	int j = 0;
	int k = 0;

	while (arr)
	{
		temp[len++] = arr % 10 + '0';
		arr /= 10;
	}
	temp[len] = '\0';
	while (temp[j] != '\0')
	{
		if (k != 0 && (k + 1) % 4 == 0)
		{
			t[k++] = ',';
			dLen++;
		}
		else {
			t[k++] = temp[j++];
		}
	}
	for (i = 0; i < len + dLen; i++)
	{
		temp[i] = t[len + dLen - 1 - i];
	}
	temp[len + dLen] = '\0';
	return temp;
}
int main(void)
{
	int a14 = 12321412;
	char *s = part(a14);
	printf("%s", s);
	system("pause");
	return 0;
}
