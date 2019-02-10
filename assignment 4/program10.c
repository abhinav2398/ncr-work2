#include<stdio.h>
#include<string.h>
void delete(char *s1, char ch)
{
	int len,i,j;
	len=strlen(s1);
	for(i=0;i<len;i++)
	{
		if(s1[i]==ch)
		{
			for(j=i;j<len;j++)
			{
				s1[j]=s1[j+1];
			}
			len--;
			i--;
		}
	}
}
int main()
{
	char ch,s1[20];
	printf("enter a string : ");
	scanf("%s",s1);
	printf("\n enter a character to remove : ");
	scanf("%c",&ch);
	delete(s1,ch);
	printf("\n modified string is %s",s1);
	return 0;
}
