#include <iostream>
#include<fstream>
#include<sstream>
#include <map>
#include<list>
#include <string>
#include <algorithm>
#include<assert.h>
using namespace std;
string &tran(string &s)
{
	for (int p = 0; p < s.size(); ++p)
	{
		if (s[p] >= 'a'&&s[p] <= 'z')
		{
			s[p] -= ('a' - 'A');
		}
		else if (s[p] == ',' || s[p] == '.')
		{
			s.erase(p, 1);
		}
	}
	return s;
}
int main(int argc, char **argv)
{
	map<string, list<int>>word_lineno;
	string line;
	string word;
	int leneno = 0;
	ifstream File;
	File.open("Text.txt", ios::out);
	assert(File.is_open());
	while (getline(File, line))
	{
		leneno++;
			tran(line);
			word_lineno[line].push_back(leneno);
	}
	File.close();
	for (const auto &w : word_lineno)
	{
		cout << w.first << "ËùÔÚÐÐ£º";
		for (auto v : w.second)
		{
			cout << v << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}