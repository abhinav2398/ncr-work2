#include<Windows.h>
#include<iostream>
int main()
{
	char *s = "Abhinav";
	WCHAR *t = L"Puvvala";
	char *multibyte = NULL;
	WCHAR *widechar = NULL;
	int a = strlen(s);
	int b = wcslen(t);
	int k = IsTextUnicode(s, sizeof(char)* a, NULL);
	if (k == 1)
	{
		printf("the string is a unicode\n");

	}
	else
	{
		printf("the string is not a unicode\n");
	}
	int k1 = IsTextUnicode(t, sizeof(WCHAR)*b, NULL);
	if (k1 == 1)
	{
		printf("the string is unicode\n");
	}
	else
	{
		printf("the string is not a unicode\n");
	}
	int x = MultiByteToWideChar(CP_UTF8, 0, s, -1, widechar, 0);
	widechar = new WCHAR[x];
	int x1 = MultiByteToWideChar(CP_UTF8, 0, s, -1, widechar, x);

	if (x1 == 0)
	{
		printf("cannot be converted .error(%d)", GetLastError());
	}
	else
	{
		printf("can be converted is %S\n", widechar);
	}
	int y = WideCharToMultiByte(CP_UTF8, 0, t, -1, multibyte, 0, NULL, NULL);
	multibyte = new char[y];
	int y1 = WideCharToMultiByte(CP_UTF8, 0, t, -1, multibyte, y, NULL, NULL);

	if (y1 == 0)
	{
		printf("cannot be converted .error(%d)", GetLastError());
	}
	else
	{
		printf("can be converted is %s\n", multibyte);
	}
	system("pause");
	return 0;
}