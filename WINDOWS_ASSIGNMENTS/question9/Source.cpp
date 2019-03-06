#include<iostream>
#include<Windows.h>
using namespace std;
int main(int argc, char *argv[])
{
	STARTUPINFOA si1;
	PROCESS_INFORMATION pi1;
	ZeroMemory(&si1, sizeof(si1));
	si1.cb = sizeof(si1);
	ZeroMemory(&pi1, sizeof(pi1));
	if (argc != 2)
		cout << "Couldn't Create a Process" << endl;
	else
	{	
		char arguments[100];
		sprintf(arguments, "%s%s", argv[1]," C:\\WINDOWS\\SysWOW64\\calc.exe C:\\WINDOWS\\SysWOW64\\notepad.exe");
		bool flag = CreateProcessA(NULL,arguments , NULL, NULL, FALSE, 0, NULL, NULL, &si1, &pi1);
		if (flag == FALSE)
		{
			cout << "Could not Create a Process" << endl;
		}
		else
		{
			WaitForSingleObject(pi1.hThread, INFINITE);
			cout << "Current Process ID - " << GetCurrentProcessId() << endl;
			cout << "Current Thread ID - " << GetCurrentThreadId() << endl;
			cout << "Child Process ID - " << GetProcessId(pi1.hProcess) << endl;
			cout << "Child Thread ID - " << GetThreadId(pi1.hThread) << endl;
			cout << "Process Id of given Thread is - " << GetProcessIdOfThread(pi1.hThread) << endl;
			CloseHandle(pi1.hProcess);
			CloseHandle(pi1.hThread);
		}
	}
	system("pause");
}