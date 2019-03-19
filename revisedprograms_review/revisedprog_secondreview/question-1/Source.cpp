#include<iostream>
int answer = 0;
int add(int a, int b);
int multiply(int a, int b);
int sub(int a, int b);
float divide(int a, int b);
using namespace std;
#define SIZE 100
class STACK // A class stack is defined which has a structure
{
	struct sta // The structure contains three elements which indicate the top of the stack, th elements present in the stack, size of the stack
	{
		int top;
		char *parameters;
		int size;
	}stack1;
public:
	STACK() // Default constructor
	{
	}
	STACK(int size) // Parameterised constructor
	{
		stack1.size = size;
		stack1.parameters = new char[size];
		stack1.top = -1;
	}
	bool isempty() // Function to check if the stack is empty
	{
		if (stack1.top == -1)
		{
			return true;
		}
		else
			return false;
	}
	bool isfull() // Function to check if the stack is full
	{
		if (stack1.top == stack1.size - 1)
		{
			return true;
			cout << "The stack is already full" << endl;
		}
		else
			return false;
	}
	void push(char x) // Function to push an element into the stack
	{
		if (stack1.top == stack1.size - 1)
		{
			cout << "Stack Full";
			return;
		}
		else
		{
			stack1.parameters[++stack1.top] = x;
		}
	}
	char pop() // Function to remove an element the stack
	{
		int x = -999;
		if (stack1.top == -1)
		{
			cout << "Stack Empty\n";
			return x;
		}
		x = stack1.parameters[stack1.top--];
		return x;
	}
	char peek() // Function to see the element at the top of the stack
	{
		int x = -999;
		if (stack1.top == -1)
		{
			cout << "Stack Empty\n";
			return x;
		}
		else
		{
			x = stack1.parameters[stack1.top];
			return x;
		}
	}
	void display() // Function to display the elements present in the stack
	{
		for (int i = 0; i <= stack1.top; i++)
		{
			cout << "The elements are:";
			cout << stack1.parameters[i];
		}
	}
	~STACK() // Destructor
	{
		delete (stack1.parameters);
	}
};
int Precedence(char x) // The precedence is considered according to bodmas rule
{
	if (x == '*' || x == '/')
		return  3;
	else if (x == '+' || x == '-')
		return 2;
	else
		return 1;
}
class STACK2
{
	struct stack
	{
		int top;
		int *elements;
		int size;
	}stack2;
public:
	STACK2()
	{
	}
	STACK2(int size)
	{
		stack2.size = size;
		stack2.elements = new int[size];
		stack2.top = -1;
	}
	bool isempty()
	{
		if (stack2.top == -1)
		{
			return true;
		}
		return false;
	}
	bool isfull()
	{
		if (stack2.top == stack2.size - 1)
		{
			return true;
			cout << "The stack is already full";
		}
		return false;
	}
	void push(int x)
	{
		if (stack2.top == stack2.size - 1)
		{
			cout << "Stack Full";
			return;
		}
		else
		{
			stack2.elements[++stack2.top] = x;
		}
	}
	int pop()
	{
		int x = -999;
		if (stack2.top == -1)
		{
			cout << "Stack Empty";
			return x;
		}
		else
		{
			x = stack2.elements[stack2.top--];
			return x;
		}
	}
	int peek()
	{
		int x = -999;
		if (stack2.top == -1)
		{
			cout << "Stack Empty";
			return x;
		}
		else
		{
			x = stack2.elements[stack2.top];
			return x;
		}
	}
	void Display()
	{
		for (int i = 0; i <= stack2.top; i++)
		{
			cout << stack2.elements[i] << endl;
		}
	}
	~STACK2()
	{
		delete (stack2.elements);
	}
};
int main()
{
	char input_string[SIZE];
	cout << "Enter the string";
	cin >> input_string;
	char answer[SIZE];
	STACK s(10);
	int curr = 0;
	char ch;
	int k = 0;
	for (int i = 0; i < strlen(input_string); i++)
	{
		ch = input_string[i];
		if (isdigit(ch) || isalpha(ch))
		{
			answer[k++] = ch;
		}
		else if (ch == '(')
		{
			s.push(ch);
		}
		else if (ch == ')')
		{
			while (s.peek() != '(')
			{
				answer[k++] = s.pop();
			}
			s.pop();
		}
		else if (s.isempty())
		{
			s.push(ch);
		}
		else if (Precedence(ch) > Precedence(s.peek()))
		{
			s.push(ch);
		}
		else
		{
			while (Precedence(ch) <= Precedence(s.peek()))
			{
				answer[k++] = s.pop();
			}
			s.push(ch);
		}
	}
	while (!s.isempty())
	{
		answer[k++] = s.pop();
	}
	answer[k] = '\0';
	cout << "String - " << answer << endl;
	STACK2 s1(10);
	// The elements are pushed into the stack according to their order of precedence
	for (int i = 0; i < strlen(answer); i++)
	{
		char ch;
		ch = answer[i];
		if (isdigit(ch) && !s1.isfull())
		{
			s1.push(ch - '0');
		}
		else
		{
			int a = s1.pop();
			int b = s1.pop();
			switch (ch)
			{
			case '+': s1.push(add(a, b));
				break;
			case '-': s1.push(sub(b, a));
				break;
			case '*': s1.push(multiply(b, a));
				break;
			case '/': s1.push(divide(b, a));
				break;
			}
		}
	}
	cout << "Answer is - " << s1.pop();
	system("pause");
	return 0;
}