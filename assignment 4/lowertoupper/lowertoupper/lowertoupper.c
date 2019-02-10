#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i;
	printf("enter a string : ");
		scanf_s("%s", s,10);	
	for (i = 0; s[i]!= '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
	}
		printf("string is :%s", s);
	
	getch();
	return 0;
}