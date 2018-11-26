#include <iostream>
#include <string>

using namespace std;

template <typename T>
inline T const& Max(T const& a, T const& b)
{
	return a < b ? b : a;
}
int main()
{
	const char* s1 = "Hello";
	const char* s2 = "World";
	cout << "Max(s1, s2): " << Max(s1, s2) << endl;

	system("pause");
	return 0;
}