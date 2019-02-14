#include<iostream>
using namespace std;
class complex
{
	int r,i; 
public:
	complex()
	{
		 r = 0;
		 i = 0;
	}
	complex(int x)
	{
		 r =x;
		 i =x;
	}
	complex(int a, int b)
	{
		r = a;
		i = b;
	}
	void display()
	{
		cout << " The complex number is:"<<r<<"+"<< i<< endl;
	}
	friend void add (complex c1, complex c2);
	friend void multiply (complex c1, complex c2);
};

    void add (complex c2, complex c3)
	{
		 int real1 = c2.r + c3.r;
		int img1 = c2.i + c3.i;
		cout << " The sum of two complex numbers is:" << real1 << "+" << img1 << endl;
	}
	void multiply (complex c2, complex c3)
	{
		int real1 = c2.r * c3.r;
		int img1= c2.i * c3.i;
		cout << " The multiplication of two complex numbers is:" << real1 << "+" << img1 << endl;

	}
int main()
{
	complex c;
	c.display();
	complex c1(4);
	c1.display();
	complex c2(3, 5);
	c2.display();
	complex c3(5, 6);
	c3.display();
	add(c2, c3);
	multiply(c2, c3);
	getchar();
	return 0;	
}