#include<iostream>
#include<cstdlib>

using namespace std;

int gcd(int m, int n)//�����Լ������
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



class fraction   //����������
{
	int a, b;
public:
	fraction(int x = 0, int y = 1)         //���캯��
	{
		if (y == 0)                      //�жϷ�ĸ�Ƿ�Ϊ0
		{
			cout << "��ĸΪ��" << endl;
			exit(0);
		}
		if (y < 0)                         //��ĸС��0ʱ������ת�Ƶ�������
		{
			a = (-1)*x;
			b = (-1)*y;
		}
		a = x;
		b = y;
	}
	fraction(const fraction&f)//��������
	{
		a = f.a;

		b = f.b;
	}
	~fraction() {}//��������
	void setfraction(int x, int y)//�������������÷���ֵ
	{
		if (y == 0)
		{
			cout << "��ĸΪ��" << endl;
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
	void show()//��������
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
	friend   fraction operator  +  (fraction  &  f1, fraction & f2) //����Ԫ�������������
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
	cout << "�������һ�������ķ��ӷ�ĸ" << endl;
	cin >> a >> b;
	int c, d;
	cout << "������ڶ��������ķ��ӷ�ĸ" << endl;
	cin >> c >> d;
	fraction a1, a2, a3, a4, a5, a6;
	a1.setfraction(a, b);
	a2.setfraction(c, d);
	a3 = a1 + a2;
	cout << "�ӷ����" << endl;
	a3.show();
	a4 = a1 - a2;
	cout << "�������" << endl;
	a4.show();
	a5 = a1 * a2;
	cout << "�˷������" << endl;
	a5.show();
	a6 = a1 / a2;
	cout << "���������" << endl;
	a6.show();

	system("pause");
	return 0;
}