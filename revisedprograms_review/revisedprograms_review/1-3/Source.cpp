#include<iostream>
using namespace std;
class complex
{
	float real, imaginary;
public:
	complex() //Default constructor which has both the real and imaginary values set to zero
	{
		real = 0;
		imaginary = 0;
	}
	complex(float x)
	{
		real = x;
		imaginary = x;
	}
	complex(float a, float b)
	{
		real = a;
		imaginary = b;
	}
	void display() //Function which is used to display the entered complex number
	{
		if (imaginary > 0)
			cout << " The complex number is:" << real << "+" << imaginary << 'i' << endl;
		else
			cout << "The complex number is:" << real << "" << imaginary << 'i' << endl;
	}
	friend void add_complexnum(complex c1, complex c2); //Friend function which is used to add the complex numbers
	friend void multiply_complexnum(complex c1, complex c2); //Friend function which is used to multiply the complex numbers
	~complex() //Destructor
	{

	}
};

void add_complexnum(complex c2, complex c3)
{
	float real1 = c2.real + c3.real;
	float img1 = c2.imaginary + c3.imaginary;
	if (img1 >= 0)
		cout << " The sum of second and third complex numbers is:" << real1 << "+" << img1 << 'i' << endl;
	else
		cout << "The sum of second and third complex numbers is:" << real1 << "" << img1 << 'i' << endl;
}
void multiply_complexnum(complex c2, complex c3)
{
	float real1 = c2.real * c3.real;
	float img1 = c2.imaginary * c3.imaginary;
	if (img1 > 0)
		cout << " The product of second and third complex numbers is:" << real1 << "+" << img1 << 'i' << endl;
	else
		cout << " The product of second and third complex numbers is:" << real1 << "" << img1 << 'i' << endl;
}
int main()
{
	float x, y, z;
	complex c;
	cout << "Enter the value of the real or imaginary part of the first complex number" << endl;
	cin >> x;
	complex c1(x);
	c1.display();
	cout << "Enter the value of real and imaginary part of the second complex number" << endl;
	cin >> y >> z;
	complex c2(y, z);
	c2.display();
	cout << "Enter the value of real and iamginary part of the third complex number" << endl;
	cin >> y >> z;
	complex c3(y, z);
	c3.display();
	add_complexnum(c2, c3); //Calling the addition function in order to add the two complex numbers
	multiply_complexnum(c2, c3); //Calling the multiplication function in order to multiply the two complex numbers
	getchar();
	system("pause");
	return 0;
}