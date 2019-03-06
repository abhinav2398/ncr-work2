#include<Windows.h>
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	char arguments[] = "QUESTION 5.exe testfile.txt";
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
	if (!CreateProcessA(NULL, arguments, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
	{
		printf("CreateProcess failed (%d).\n", GetLastError());
	}
	else
	{
		cout << "MAIN PROCESS" << endl;
		WaitForSingleObject(pi.hProcess, INFINITE);
		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);
	}
	system("pause");
}