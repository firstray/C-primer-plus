#include <iostream>
#include <cstdlib>

using namespace std;

template <typename Type, int n>
class MyArray
{
public:
	MyArray() {}
	explicit MyArray(const Type & v);
	virtual Type & operator[](int i);
	virtual Type operator[](int i) const;
	virtual MyArray operator=(const MyArray & v);
private:
	Type ar[n];
};

template <typename Type, int n>
MyArray<Type, n>::MyArray(const Type & v)
{
	for (int i = 0; i < n; ++i)
	{
		ar[i] = v;
	}
}

template <typename Type, int n>
Type & MyArray<Type, n>::operator[](int i)
{
	if (i < 0 || i >= n)
	{
		cerr << "Error in array limits: " << i << " is out of range\n";
		exit(EXIT_FAILURE);
	}
	return ar[i];
}

template <typename Type, int n>
Type MyArray<Type, n>::operator[](int i) const
{
	if (i < 0 || i >= n)
	{
		cerr << "Error in array limits: " << i << " is out of range\n";
		exit(EXIT_FAILURE);
	}
	return ar[i];
}
template<typename Type,int n>
MyArray<Type,n> MyArray<Type, n>::operator=(const MyArray & v)
{
	for (int i = 0; i < n; ++i)
	{
		this->ar[i] = v.ar[i];
	}
	return *this;
}

int main(void)
{
	MyArray<const char*, 10> ma("Hello");
	MyArray<const char *, 10> rr("World");
	MyArray<const char *, 10> ay;
	cout << ma[2] << endl;
	cout << rr[1] << endl;
	ay = ma;
	cout << ay[3] << endl;
	system("pause");
	return 0;
}