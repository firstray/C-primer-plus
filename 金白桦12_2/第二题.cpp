//2、给定一个字符串 s, 判断是否是回文串
//PS : 回文串是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串
#include<iostream>
using namespace std;

int main()
{
	char s[100];
	int i, j;
	int a = 1;
	while (true)
	{
		cin >> s;
		for (i = 0, j = strlen(s) - 1; i <= j; i++, j--)
		{
			if (s[i] != s[j])
				a = 0;
			break;
		}
		if (a) cout << "yse" << endl;
		else cout << "no" << endl;
	}
	return 0;
}