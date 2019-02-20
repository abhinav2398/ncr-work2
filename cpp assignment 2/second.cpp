/*#include<iostream>
#include<cstring>
using namespace std;

class STUDENT
{
	int roll, marks1, marks2, marks3, total;
	char *name, *grade;
	int len1;
public:
	friend void calculate(STUDENT[], int n);
	friend istream& operator >> (istream &cin, STUDENT &c);
	friend ostream& operator << (ostream &cout, STUDENT c);
};
void calculate(STUDENT s[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		s[i].total = (s[i].marks1 + s[i].marks2 + s[i].marks3);
		float average = (float)s[i].total / 3;
		s[i].grade = new char[100];
		if (average > 70)
		{
			strcpy_s(s[i].grade, 100, "first class");
		}
		else if (average > 55 && average < 70)
		{
			strcpy_s(s[i].grade, 100, "second class");
		}
		else
		{
			strcpy_s(s[i].grade, 100, "fail");
		}
	}
}
ostream& operator << (ostream &cout, STUDENT c)
{
	cout << "roll" << c.roll;
	cout << "name" << c.name;
	cout << "marks1" << c.marks1;
	cout << "marks2" << c.marks2;
	cout << "marks3" << c.marks3;
	cout << "\n grade" << c.grade;
	return (cout);
}
istream& operator >> (istream &cin, STUDENT &c)
{
	cout << "\nroll";
	cin >> c.roll;
	cout << "\nname";
	char temp[20];
	cin >> temp;
	c.name = new char[strlen(temp) + 1];
	strcpy_s(c.name, 100, temp);
	cout << "\nmarks1";
	cin >> c.marks1;
	cout << "\nmarks2";
	cin >> c.marks2;
	cout << "\nmarks3";
	cin >> c.marks3;
	return (cin);
}
int main()
{
	STUDENT c[2];
	cin >> c[0];
	cin >> c[1];
	calculate(c, 2);
	cout << c[0];
	cout << c[1];
	getchar();
	return 0;
}*/