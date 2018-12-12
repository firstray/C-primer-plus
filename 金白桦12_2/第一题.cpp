//1、给定整数n,取若干个1到n的整数可求和等于整数m，编程求出所有组合的个数。
//比如当n = 6,m = 8时，有四种组合：[2,6],[3,5] [1,2,5], [1,3,4]。m和n小于120。
//思路：背包问题（动态规划算法）。
//给定一个容量至少是120 * 120的二维数组 arr[121][121], 初始化为0，arr[0][0]为1，arr[1][0]为1，arr[1][1]也为1，
//arr[n][m]的值表示取1到n的数，可组成m的组合数。寻找arr[n][m]和arr[n - 1][m]的规律
#include<iostream>
using namespace std;

int main(void)
{
	int n, m;
	int arr[121][121] = { 0 };

	arr[0][0] = 1;
	arr[0][1] = 1;
	arr[1][0] = 1;

	for (n = 1; n <= 121; n++)
	{
		for (m = 1; m <= 121; m++)
		{
			if (m < n)
			{
				arr[n][m] = arr[n - 1][m];
			}
			else
			{
				if (arr[n - 1][m] > arr[n - 1][m - n] + n)
				{
					arr[n][m] = arr[n - 1][m];
				}
				else
				{
					arr[n][m] = arr[n - 1][m - n] + n;
				}
			}
		}
	}
	cout << "arr[6][8] = " << arr[6][8] << endl;
	system("pause");
	return 0;
}