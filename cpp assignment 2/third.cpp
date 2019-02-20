/*#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
	char *name;
	int empno;
	int salary;
public:
	Employee()
	{
		name = NULL;
		salary = 0;
		empno = 0;
	}
	void get_data()
	{
		char temp[20];
		cout << "enter employee id";
		cin >> empno;
		cout << "employe name";
		cin >> temp;
		cout << "employee salary";
		cin >> salary;
		name = new char[strlen(temp) + 1];
		strcpy_s(name, 100, temp);
	}
	friend istream& operator >> (istream &cin, Employee c[]);
	void read_data()
	{
		cout << "\nname of the employee is" << name;
		cout << "\nid of employee is" << empno;
		cout << "\nsalary of employee is" << salary;
	}
};
istream& operator >> (istream &cin, Employee c[])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		c[i].get_data();
	}
	return cin;
}
int main()
{
	int i;
	Employee c[5];
	cin >> c;
	for (i = 0; i < 5; i++)
	{
		c[i].read_data();
	}
	getchar();
	return 0;
}*/