#include<stdio.h>
#include<string.h>
int replace(char *cat)
{
	int i,count=0;
	char s[100];
	strcpy(s,cat);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			s[i]='-';
			count++;
		}
	}
	printf("replaced string : %s",s);
	return count;
}
int main()
{
	int n;
	char *cat = "The cat sat";
	n = replace(cat);
	printf("\n no of spaces : %d",n);	
}
