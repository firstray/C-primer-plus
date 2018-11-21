//2、编写一个图形类（Shape），area()求图形的面积的纯虚函数，total() 
//是一个求不同形状的图形面积总和的
//全局函数，请从 shape类派生三角形类（ triangle ）
//和矩形类(rectangle)，输出两者的面积和面积之和
//（不要求去判断是否构成三角形）
#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;
double total(double triangle,double rectangle)
{
	return triangle + rectangle;
}
class Shape
{
	virtual void showData() = 0;
	virtual double reArea() = 0;
	virtual double reVolume() = 0;
};
class TwoDimShape :virtual public Shape {
protected:
	double x, y;
public:
	virtual void showData() {
		return;
	}
	virtual double reArea() {
		return 0;
	}
	virtual double reVolume() {
		return 0;
	}
};
class Rectangle :virtual public TwoDimShape {
public:
	Rectangle(double ta, double tb) {
		x = ta, y = tb;
	}
	Rectangle(Rectangle &asp) {
		x = asp.x, y = asp.y;
	}
	~Rectangle() {

	}
	void showData() {
		cout << "This is a Rectangle:" << endl
			<< "The long axis:" << x << endl
			<< "The short axis:" << y << endl
			<< "The area:" << reArea() << endl;
	}
	double reArea() {
		return x * y;
	}
};
class Triangle :virtual public TwoDimShape {
public:
	Triangle(double ta, double tb) {
		x = ta, y = tb;
	}
	Triangle(Triangle &asp) {
		x = asp.x, y = asp.y;
	}
	~Triangle() {

	}
	void showData() {
		cout << "This is a Triangle:" << endl
			<< "The base length:" << x << endl
			<< "The height  :" << y << endl
			<< "The area:" << reArea() << endl;
	}
	double reArea() {
		return x * y / 2.0;
	}
};
int main(void) {
	TwoDimShape a;

	TwoDimShape *p = &a;

	Rectangle t1(10.0, 2.3);
	Triangle t2(4.0, 5.0);

	p = &t1;
	p->showData();
	p = &t2;
	p->showData();

	cout << "总面积:" << total(t1.reArea(), t2.reArea()) << endl;
	system("pause");
	return 0;
}