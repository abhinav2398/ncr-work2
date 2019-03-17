#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class STRING
{
	int length; //length of a string
	char *string; //string 
public:
	STRING() //Default constructor with string length zero and string initialised to null 
	{
		length = 0;
		string = NULL;
	}
	STRING(char *input_string) //Constructor which accepts the string as input
	{
		int count;
		length = strlen(input_string);
		string = new char[length + 1]; //Dynamic memory allocation
		if (string == NULL)
		{
			cout << "Failed to allocate the memory for the string" << endl;
			free(string); //Deallocating the memory
			getchar();
			return;
		}
		for (count = 0; count < (length + 1); count++)
		{
			string[count] = input_string[count];
		}
	}
	STRING(const STRING &input_string) //Copy constructor
	{
		string = input_string.string;
		length = input_string.length;
	}
	~STRING() //destructor
	{

	}
	STRING operator+(STRING str) //'+' operator overloading
	{
		int count1, count2;
		STRING temp_string;
		temp_string.length = length + str.length;
		temp_string.string = new char[(temp_string.length) + 1]; //dynamic memory allocation
		if (temp_string.string == NULL)
		{
			cout << "Failed to allocate memory for the '+' operator" << endl;
			free(temp_string.string);
			getchar();
			return 0;
		}
		for (count1 = 0; count1 < length; count1++) //copying first string into temporary string
		{
			temp_string.string[count1] = string[count1];
		}
		for (count2 = 0; count2 < str.length; count2++) //copying second string into temporary string
		{
			temp_string.string[count1] = str.string[count2];
			count1++;
		}
		temp_string.string[count1] = '\0';
		return temp_string;
	}
	char &operator[](int num) //'[]' operator overloading
	{
		return (this->string[num]);
	}
	STRING operator=(STRING input_string) //'=' operator overloading
	{
		int count;
		length = input_string.length;
		string = new char[length + 1];
		if (string == NULL)
		{
			cout << "Memory allocation failed for '=' operator" << endl;
			free(string);
			getchar();
			return 0;
		}
		for (count = 0; count < length + 1; count++)
		{
			string[count] = input_string.string[count];
		}
		string[count] = '\0';
		return(*this);
	}
	friend ostream &operator<<(ostream &cout, STRING input_string);
	friend istream &operator>>(istream &cin, STRING &input_string);

};

ostream &operator<<(ostream &cout, STRING input_string) //friend functions for '<<' operator overloading
{
	cout << input_string.string << endl;
	return cout;
}

istream &operator>>(istream &cin, STRING &input_string) //friend function for '>>' operator overloading
{
	int count, length1;
	char temp[50];
	cin >> temp;
	length1 = strlen(temp);
	input_string.string = new char[length1 + 1];
	if (input_string.string == NULL)
	{
		cout << "Memory allocation for '>>' operator failed" << endl;
		free(input_string.string);
	}
	for (count = 0; count <= length1 + 1; count++)
	{
		input_string.string[count] = temp[count];
	}
	input_string.length = strlen(temp);
	return cin;

}

int main()
{
	STRING input1_string, string1, string2, input2_string;
	cout << "\n enter the first string" << endl;
	cin >> input1_string;
	string1 = input1_string;

	cout << " enter the second string" << endl;
	cin >> input2_string;

	STRING string3(input2_string);
	string2 = input1_string + input2_string;

	cout << "\nFirst input string is = " << input1_string << endl;
	cout << "Second input string is = " << input2_string << endl;
	cout << "Copying first input string into another string using '='  operator the string obtained is = " << string1 << endl;
	cout << "copying second string into another string using 'copy constructor' the string obtained is = " << string3 << endl;
	cout << "Result of string concatenation of first & second input string using '+' operator the string obtained is = " << string2 << endl;
	cout << "Third character of string1 using '[]' operator is string1[2] = " << string1[2] << endl;
	system("pause");
	return 0;
}