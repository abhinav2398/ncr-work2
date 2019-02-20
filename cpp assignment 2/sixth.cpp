#include<iostream>
#include<cstring>
using namespace std;
class String
{
	char *s;
	int len;
public:
	String()
	{
		cout << "in default" << endl;
	}
	String(const char *t)
	{
		len = strlen(t);
		s = new char[len+1];
		strcpy(this->s, t);
	}
	String(String &str)
	{
		len = str.len;
		s = new char[len+1];
		this->s = str.s;
	}
	String operator=(String str)
	{
		len = str.len;
		s = new char[len+1];
		strcpy(s, str.s);
		return *this;
	}
	void show()
	{
		cout << s << endl;
	}

};
int main()
{
	String s1("Hello");
	String s2("World");
	String s3(s2);
	String s4;
	s4 = s1;
	s3.show();
	s1.show();
		return 0;
}
