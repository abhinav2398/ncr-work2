
#include<iostream>
	using namespace std;

class Distance2;
class Distance1
{
	int meter;
	int centimeter;
	int c;
	float inch;
public:
	void get_input(int cm)
	{
		int m;
		centimeter = cm;
		m = cm / 100;
		meter = m;
		c = cm % 100;
	}
	float cm_inch(int cm)
	{
		float in;
		in = cm / 2.54;
		inch = in;
		return (in);
	}
	void display()
	{
		cout << "\nmeter is" << meter << endl;
		cout << "\ncentimeter is" << c << endl;
	}
	friend int add1(Distance1, Distance2);
	friend int add2(Distance1, Distance2);
};
class Distance2
{
	int feet;
	int inch;
	int i;
	float centimeter;
public:
	void get_input(int in)
	{
		int f;
		inch = in;
		f = in / 12;
		feet = f;
		i = in % 12;
	}
	float inch_cm(int in)
	{
		float cm;
		cm = in * 2.54;
		centimeter = cm;
		return (cm);
	}
	void display()
	{
		cout << "\nfeet is" << feet << endl;
		cout << "\ninches is" << i << endl;
	}
	friend int add1(Distance1, Distance2);
	friend int add2(Distance1, Distance2);
};
int add1(Distance1 a, Distance2 b)
{
	return (a.centimeter + b.centimeter);
}
int add2(Distance1 a, Distance2 b)
{
	return (a.inch + b.inch);
}
int main()
{
	int i;
	Distance1 a;
	Distance2 b;
	int cm, in;
	cout << "enter first distance in centimeters" << endl;
	cin >> cm;
	a.get_input(cm);
	cout << "enter first distance in inches" << endl;
	cin >> in;
	b.get_input(in);
	a.display();
	b.display();
	cout << "\n enter your choice \n 1) result in centimeter \n 2) result in inch" << endl;
	cin >> i;
	switch (i)
	{
	case 1:
	{
		b.inch_cm(in);
		cout << "result is:" << add1(a, b);
		break;
	}
	case 2:
	{
		a.cm_inch(cm);
		cout << "result is:" << add2(a, b);
		break;
	}
	getchar();
	getchar();
	return 0;
	}
}