#include<iostream>
#include<cstdlib>
#include<string>
#include<iomanip>

using namespace std;

class square{
protected:
	float length;
	float wide;
public:
	square() = default;
	square(float len, float wid) :length(len), wide(wid) {}
	virtual void set() {}
	virtual void get() {}
	double area() {
		return length * wide;
	}
};

class table:public square {
private:
	float price;
	float length;
	float wide;
public:
	table() = default;
	table(float len, float wid) :length(len), wide(wid) {}
	void set() {
		cin >> price ;
	}
	void get() {
		cout << setprecision(2)<< price;
	}
	double area() {
		return length * wide;
	}
};
class suqareTable :public square {
private :
	string color;
	float length;
	float wide;
public:
	suqareTable() = default;
	suqareTable(float len, float wid) :length(len), wide(wid) {}
	void set() {
		cin >> color;
	}
	void get() {
		cout << color;
	}
};
int main(void)
{
	square squ(2.0, 3.0);
	cout << squ.area() << endl;
	table a(4,5);
	cout << "请输入价格：" << endl;
	a.set();
	a.get();
	cout << endl;
	cout << "面积："<< setprecision(2)<<a.area() << endl;
	suqareTable sut(7,9);
	sut.set();
	sut.get();
	cout << endl;
	cout << "面积:"<< setprecision(2)<<sut.area() << endl;
	system("pause");
	return 0;
}