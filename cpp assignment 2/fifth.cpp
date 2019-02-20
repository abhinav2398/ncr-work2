#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class String
{
	int len;
	char *s;
public:
	String()
	{
		len = 0;
		s=NULL;
	}
	String(char *t)
	{
		len = strlen(t);
		s = (char*)malloc(sizeof(char)*(len + 1));
		strcpy(s, t);
	}
	String(const String &temp)
	{
		s = temp.s;
		len = temp.len;
	}
	~String()
	{
	}
	String operator+(String str)
	{
		String temp;
		temp.len = len + str.len;
		temp.s = (char *)malloc(sizeof(char)*((temp.len) + 1));
		strcpy(temp.s, s);
		temp.s=strcat(temp.s, str.s);
		return temp;
	}
	char &operator[](int n)
	{
		return (this->s[n]);
	}
	String operator=(String c)
	{
		len=c.len;
		s=(char *)malloc(sizeof(char)*(len+1));
		strcpy(s,c.s);
		return(*this);
	}
	friend ostream &operator<<(ostream &cout, String str);
	friend istream &operator>>(istream &cin, String &str);

};
ostream &operator<<(ostream &cout, String str)
{
	cout << str.s << endl;
	return cout;
}
istream &operator>>(istream &cin, String &str)
{
    char temp[50];
	cin>>temp;
	str.s=(char *)malloc(sizeof(char)*(str.len+1));
	strcpy(str.s,temp);
	return cin;

}
int main()
{
	String s1, s2, s3,s5;
	cout<<"\n enter first string";
	cin >> s1;
	s2 = s1;
	cout<<"\n enter second string";
	cin>>s5;
	String s4(s5);
	s3 = s1 + s4;
	cout << "\ns1 = " << s1;
	cout << "\ns2 = " << s2;
	cout << "\ns3 = " << s3;
	cout << "\ns2[2] = " << s2[2];


	return 0;
}
