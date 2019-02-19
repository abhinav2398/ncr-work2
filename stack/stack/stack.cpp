#include<iostream>
using namespace std;
class _stack_
{
	struct sta
	{
		int top;
		int *elements;
		int size;
	}stack;
public:
	_stack_()
	{

	}
	_stack_(int size)
	{
		stack.size = size;
		stack.elements = new int[size];
		stack.top = -1;
	}
	bool isempty()
	{
		if (stack.top == -1)
			return true;
		return false;
	}
	bool isfull()
	{
		if (stack.top == stack.size - 1)
		{
			return true;
		}
			return false;
	}
	void push(int x)
	{
		if (stack.top == stack.size - 1)
		{
			cout << "stack full";
			return;
		}
		else
		{
			stack.elements[++stack.top] = x;
		}
	}
	int pop()
	{
		int x = -999;
		if (stack.top == -1)
		{
			cout << "stack is empty\n";
			return x;
		}
		else
		{
			x = stack.elements[stack.top--];
				return x;

		}
	}
	int peek()
	{
		int x = -999;
		if (stack.top == -1)
		{
			cout << "stack is empty";
			return x;
		}
		else
		{
			x = stack.elements[stack.top];
			return x;
		}
	}
	void display()
	{
		for (int i = 0; i <= stack.top; i++)
		{
			cout << stack.elements[i] << endl;
		}
	}
			/*void getsize(int size)
			{
			stack.size=size;
			}*/
			~_stack_()
			{
				delete(stack.elements);
			}
		};
		int main()
		{
			_stack_ s(10);
			s.pop();
			s.push(1);
			s.push(2);
			s.push(3);
			s.push(3);
			cout << s.peek() << endl;
			cout << s.pop() << endl;
			s.display();
			getchar();

		}
