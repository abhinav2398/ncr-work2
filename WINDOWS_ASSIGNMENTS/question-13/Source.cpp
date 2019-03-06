#include<windows.h>
#include<iostream>
using namespace std;
DWORD WINAPI ThreadFunction(LPVOID);
int main()
{
	HANDLE hThread;
	DWORD dwThreadId;
	hThread = CreateThread(NULL, 0, ThreadFunction, NULL, CREATE_SUSPENDED, &dwThreadId);
	if (hThread == NULL)
	{
		cout << "Could not create a Thread" << endl;
	}
	cout << "Wait for 5 Seconds" << endl;
	Sleep(5000);
	ResumeThread(hThread);
	system("pause");
}
DWORD WINAPI ThreadFunction(LPVOID)
{
	cout << "-----In Thread-----" << endl;
	for (int i = 0; i <=1000; i++)
		cout << i << " " << endl;
	return 0;
}