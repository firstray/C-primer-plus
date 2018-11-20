#include<iostream>
#include<cstdlib>

using namespace std;

int gcd(int m, int n)//求最大公约数函数
{
	if (m < n)
	{
		int tmp = m;
		m = n;
		n = tmp;
	}
	if (n == 0)
		return m;
	else
		return gcd(n, m % n);
}



class fraction   //构建分数类
{
	int a, b;
public:
	fraction(int x = 0, int y = 1)         //构造函数
	{
		if (y == 0)                      //判断分母是否为0
		{
			cout << "分母为零" << endl;
			exit(0);
		}
		if (y < 0)                         //分母小于0时将负号转移到分子上
		{
			a = (-1)*x;
			b = (-1)*y;
		}
		a = x;
		b = y;
	}
	fraction(const fraction&f)//拷贝构造
	{
		a = f.a;

		b = f.b;
	}
	~fraction() {}//析构函数
	void setfraction(int x, int y)//在类外重新设置分数值
	{
		if (y == 0)
		{
			cout << "分母为零" << endl;
			exit(0);
		}
		if (y < 0)
		{
			a = (-1)*x;
			b = (-1)*y;
		}
		a = x;
		b = y;
	}
	void show()//输出最简结果
	{
		int flag = 1, m;
		if (a < 0)
		{
			a = -a;
			flag = -flag;
		}
		if (b < 0)
		{
			b = -b;
			flag = -flag;
		}
		m = gcd(a, b);
		a = a / m;
		b = b / m;
		a = a * flag;
		if (a == 0 || b == 1)
			cout << a << endl;
		else
			cout << a << "/" << b << endl;
	}
	friend   fraction operator  +  (fraction  &  f1, fraction & f2) //以友元函数重载运算符
	{
		return fraction(f1.a * f2.b + f1.b * f2.a, f1.b * f2.b);
	}

	friend  fraction operator  -  (fraction & f1, fraction & f2)
	{
		return fraction(f1.a*f2.b - f1.b*f2.a, f1.b*f2.b);
	}
	friend fraction operator  *  (fraction & f1, fraction & f2)
	{
		return fraction(f1.a*f2.a, f1.b*f2.b);
	}
	friend fraction operator  /  (fraction & f1, fraction & f2)
	{

		return fraction(f1.a*f2.b, f1.b*f2.a);
	}

};

int main()
{
	int a, b;
	cout << "请输入第一个分数的分子分母" << endl;
	cin >> a >> b;
	int c, d;
	cout << "请输入第二个分数的分子分母" << endl;
	cin >> c >> d;
	fraction a1, a2, a3, a4, a5, a6;
	a1.setfraction(a, b);
	a2.setfraction(c, d);
	a3 = a1 + a2;
	cout << "加法结果" << endl;
	a3.show();
	a4 = a1 - a2;
	cout << "减法结果" << endl;
	a4.show();
	a5 = a1 * a2;
	cout << "乘法法结果" << endl;
	a5.show();
	a6 = a1 / a2;
	cout << "除法法结果" << endl;
	a6.show();

	system("pause");
	return 0;
}