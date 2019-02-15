#include<iostream>
using namespace std;
void swap_value(int x, int y);
void swap_reference(int &x, int &y);
void swap_value(int x, int y)
{
	int temp;
	temp = x;
	x = y;
    y = temp;
    cout << "after swapping : " << x << "\t" << y << endl;
}

void swap_reference(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
int main()
{
	int choice, a = 1, b = 10;
	cout << " Choose any one option:\n";
	cout << "1.call by value \t 2.call by reference \t";
	cin >> choice;
	switch (choice)
	{
	case 1:swap_value(1, 10);
		break;
	case 2: swap_reference(a, b);
		cout << "after swapping : " << a << "\t" << b << endl;
		break;
	case 3:cout << "default operation : ";
		break;
	}
	system("pause");
	return 0;
}