#include<iostream>
#include<windows.h>
using namespace std;
DWORD WINAPI ThreadFunction(LPVOID);
int main()
{
	HANDLE hThread;
	DWORD dwThreadId;
	hThread = CreateThread(NULL, 0, ThreadFunction, 0,NULL, &dwThreadId);
	if (hThread == NULL)
		cout << "Could not create a Thread" << endl;
	else
	{
		WaitForSingleObject(hThread, INFINITE);//The time we should wait until the exit code is entered 
	}
	DWORD dwExitCode;
	GetExitCodeThread(hThread, &dwExitCode);
	cout << "The Exit Code is - " << dwExitCode<<endl;
	system("pause");
}
DWORD WINAPI ThreadFunction(LPVOID)
{
	cout << "----In Thread----" << endl;
	DWORD ExitCode;
	cout << "Enter any number in the range of unsigned long int which should be considered as the exit code - ";
	cin >> ExitCode;
	ExitThread(ExitCode);
	return 0;
}