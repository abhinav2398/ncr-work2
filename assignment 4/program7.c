#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char s[5][10],temp[10];
	printf("enter the strings : ");
	for(i=0;i<5;i++)
	{
		scanf("%s",s[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(s[i],s[j])>0)
			{
				strcpy(temp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],temp);
			}
		}
	}
	printf("sorted order : ");
		for(i=0;i<5;i++)
	{
		printf("\n %s",s[i]);
	}
	return 0;
}
