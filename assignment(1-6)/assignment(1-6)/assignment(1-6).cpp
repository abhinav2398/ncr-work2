#include<iostream>
#include<cmath>
using namespace std;
class point
{
	int x;
	int y;
public:
	void get_input(int a, int b)
	{
		x = a;
		y = b;
	}
	void display()
	{
		cout << "\npoint x is:" << x << endl;
		cout << "\npoint y is :" << y << endl;
	}
	friend double distance(point, point);
};
double distance(point p1, point p2)
{
	double dis;
	dis = sqrt((((p2.x) - (p1.x))*((p2.x) - (p1.x))) + (((p2.y) - (p1.y))*((p2.y) - (p1.y))));
	return (dis);
}
int main()
{
	point p1, p2;
	int x1, x2, y1, y2;
	cout << "enter first point:" << endl;
	cin >> x1 >> y1;
	cout << "enter second point:" << endl;
	cin >> x2 >> y2;
	p1.get_input(x1, y1);
	p2.get_input(x2, y2);
	p1.display();
	p2.display();
	cout << "distance is:" << distance(p1, p2);
	getchar();
	getchar();
	return 0;
}