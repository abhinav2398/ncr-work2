#include<iostream>
using namespace std;
class polar
{
	int angle, radius;
	static int count;
public :
	polar()
	{
		angle = 0;
		radius = 0;
	}
	polar(int a, int b)
	{
		angle = a;
		radius = b;
	}
	void display()
	{
		cout << "Angle is:" << angle<< endl << " Radius is:" << radius << endl;
	}
	void counter()
	{
		count++;
		cout << " Total number of active objects are:" << count << endl;

	}
};
int polar::count = 0;
int main()
{
	polar p;
	p.display();
	p.counter();
	polar p1(30, 6);
	p1.display();
	p1.counter();
	polar p2(90, 10);
	p2.display();
	p2.counter();
	polar p3(120, 5);
	p3.display();
	p3.counter();
	getchar();
	return 0;
}