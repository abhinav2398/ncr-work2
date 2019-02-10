#include<stdio.h>
#include<string.h>
void reverse(char *s)
{
	if (*s == '\0')
		return;
	
	
		reverse(s + 1);
		printf("%c", *s);
	
	
}
int main()
{
	char s[10];
	printf("enter a string : ");
	scanf_s("%s", s,10);
	reverse(s);
	getch();
	return 0;
}