#include<windows.h>
#include<iostream>
#define SIZE 10
using namespace std;
int main()
{
	HANDLE File_ptr;
	DWORD dword = 1;
	char buffer[SIZE] = { 0 };
	File_ptr = CreateFileA("TestFile.txt", GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_READONLY, NULL);
	if (File_ptr == INVALID_HANDLE_VALUE)
	{
		cout << "Couldn't Open File" << endl;
	}
	else
	{
		int offset = 9;
		while (1)
		{
			if (FALSE == ReadFile(File_ptr, buffer, offset, &dword, NULL))
			{
				cout << "Couldn't Read File" << endl;
			}
			else if (dword == offset)
			{
				buffer[offset] = '\0';
				cout << buffer;
			}
			else if (dword == 0)
			{
				cout << endl << "END OF FILE" << endl;
				break;
			}
			else if (dword < offset)
			{

				buffer[dword] = '\0';
				cout << buffer;
			}
		}
	}
	system("pause");
}

