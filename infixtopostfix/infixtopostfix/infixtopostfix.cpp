#include<iostream>
using namespace std;
class stack
{
	struct sta
	{
		int top;
		char *elements;
		int size;
	}stack1;
	public:
		stack()
		{

	    }
		stack(int size)
		{
			stack1.size=size;
			stack1.elements= new char [size];
			stack1.top=-1;

		}
		bool isempty()
		{
			if(stack1.top==-1)
			return true;
			else 
			return false;
		}
		bool isfull()
		{
			if(stack1.top==stack1.size-1)
			{ 
			return true;
			}
			else 
			return false; 
		}
		void push(char x)
		{
			if (stack1.top == stack1.size-1)
			{
				cout<<" Stack is already full\n";
			}
			else 
			stack1.elements[++stack1.top]=x;
		}
		char pop()
		{
            int x=-999;
			if(stack1.top== -1)
			{
			cout<<" Stack is empty\n";
			return x;
			}
			else 
            {
			x=stack1.elements[stack1.top--];
			return x;
			}
		}
		char peek()
		{
			int x=-999;
			if (stack1.top == -1)
			{
				cout<< " Stack is empty\n";
				return x;
			}
			else
			{
				x=stack1.elements[stack1.top];
				return x;
			}
		}
		void display()
		{
			for(int i=0;i<stack1.top;i++)
			{
			cout<<stack1.elements[i];
			}
		}
		~stack()
		{
		delete (stack1.elements);
		}
		};
		int Precedence(char x)
		{
			if (x == '*' || x == '/')
				return  3;
			else if (x == '+' || x == '-')
				return 2;
			else
				return 1;
		}

		int main()
		{
			char temp[100];
			cout << "Enter the string";
			cin >> temp;
			char result[100];
			stack s(10);
			int curr = 0;
			char ch;
			for (int i = 0;i<strlen(temp);i++)
			{
				ch = temp[i];
				if (isdigit(ch) || isalpha(ch))
				{
					cout << ch;
				}
				else if (s.isempty())
				{
					s.push(ch);
				}
				else if (Precedence(ch)>Precedence(s.peek()))
				{ 
					s.push(ch);
				}
				else
				{
					while (Precedence(ch) <= Precedence(s.peek()))
					{
						cout << s.pop();
					}
					s.push(ch);
				}
			}
			while (!s.isempty())
			{
				cout << s.pop();
			}
			getchar();
			system("pause");
		}