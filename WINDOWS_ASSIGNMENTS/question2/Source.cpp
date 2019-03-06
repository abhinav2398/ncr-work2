#include<windows.h>
#include<stdio.h>
int main()
{
	LPWSTR *szArglist;
	int nArgs;
	int i;
	szArglist = CommandLineToArgvW(GetCommandLineW(), &nArgs);//To accept the command line arguments using the getcommandline function
	if (NULL == szArglist)
	{
		wprintf(L"CommandLineToArgvvW failed\n");
		return 0;
	}
	else for (i = 0; i < nArgs; i++)
		printf("%ws\n",szArglist[i]);
	//to free the memory allocated to the command line arguments
	LocalFree(szArglist);
	system("pause");
	return(1);
}