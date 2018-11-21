//2����дһ��ͼ���ࣨShape����area()��ͼ�ε�����Ĵ��麯����total() 
//��һ����ͬ��״��ͼ������ܺ͵�
//ȫ�ֺ�������� shape�������������ࣨ triangle ��
//�;�����(rectangle)��������ߵ���������֮��
//����Ҫ��ȥ�ж��Ƿ񹹳������Σ�
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

	cout << "�����:" << total(t1.reArea(), t2.reArea()) << endl;
	system("pause");
	return 0;
}