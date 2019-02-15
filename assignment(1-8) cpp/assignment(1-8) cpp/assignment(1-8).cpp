#include<iostream>
using namespace std;

class employee
{
	int id, span;
public:
	employee()
	{
		id = span = 0;
	}
	employee(int a, int b)
	{
		id = a;
		span = b;
	}
	employee(employee &s)
	{
		id = s.id;
		span = s.span;
	}
	void display()
	{
		cout << "\nId is:" << id << endl;
		cout << "Span is:" << span << endl;
	}
	~employee()
	{

	}
};
int main()
{
	employee s1, s2(2, 3), s3(s2);
	s1.display();
	s2.display();
	s3.display();
	cout << "\nsize of s1 is:" << sizeof(s1);
	cout << "\nsize of s2 is:" << sizeof(s2);
	cout << "\nsize of s3 is:" << sizeof(s3);
	getchar();
	return 0;
}