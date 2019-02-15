#include<iostream>
using namespace std;
inline int addition(int a, int b)
{
	int sum = a + b;
	return(sum);
}
inline int subtraction(int a, int b)
{
	int sub = a - b;
	return(sub);
}
inline long int multiplication(int a, int b)
{
	int mul = a*b;
	return(mul);
}
inline int division(float a, float b)
{
	float div = (a / b);
	return(div);
}
class arthematics
{
public:

	int a;
	int b;
	int sum, sub, mul, div;

public:

	void get_input(int c, int d)
	{
		a = c;
		b = d;
		 get_output();
	}
	void get_output()
	{
		cout << " The sum is:" <<addition(a,b) << endl;
		cout << " The difference is:" << subtraction(a,b) << endl;
		cout << " The multiplication is:" << multiplication(a,b) << endl;
		cout << " The division is:" << division(a,b) << endl;
	}
};
int main()
{
	arthematics g;
	int c, d;

	cout << " Enter the first number" << endl;
	cin >> c;
	cout << " Enter the second number" << endl;
	cin >> d;
	g.get_input(c, d);
	getchar();
	getchar();
	return 0;
}

