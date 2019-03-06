#include<windows.h>
#include<iostream>
using namespace std;
int main()
{
	const DWORD buffersize = 50;
	char *buffr = new char[buffersize];
	int flag = GetEnvironmentVariableA("USERPROFILE", buffr, buffersize);
	if (flag != 0 && flag<buffersize)
	{
		buffr[flag + 1] = '\0';
		cout << buffr;
	}
	else if (buffersize<flag)
	{
		buffr = new char[flag + 1];
		buffr[flag + 1] = '\0';
		GetEnvironmentVariableA("USERPROFILE", buffr, buffersize);
		cout << buffr;
	}
	else
	{
		cout << "error\n";
	}
	system("pause");
	return 0;
}
