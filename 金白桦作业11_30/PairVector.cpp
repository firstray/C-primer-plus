#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(int argc, char *argv[])
{
	string word;
	int i;
	vector<pair<string, int>> v1;
	cout << "����string��";
	while (cin >> word)
	{
		cout << "����int��";
		cin >> i;

		//v1.push_back(make_pair(word,i));
		//v1.push_back({ word, i });
		v1.push_back(pair<string, int>(word, i));

		cout << "�Ƿ�������루Y/N����";
		char c = 'Y';
		cin >> c;
		if (c != 'Y')
		{
			break;
		}
		cout << "����string��";
	}

	for (auto &i : v1)
	{
		cout << i.first << " " << i.second << " " << endl;
	}
	system("pause");
	return 0;
}
