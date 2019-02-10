#include<string.h>
#include<stdlib.h>
int main()
{
	char *s[20];
	int n,i;
	printf("no of strings : ");
	scanf("%d",&n);
	printf("\n enter strings ");
	for(i=0;i<n;i++)
	{
		s[i] =(char*)malloc(20*sizeof(char));
		scanf("%s",s[i]);
	}
	printf("\n strings are : ");
	for(i=0;i<n;i++)
	{
		printf("\n %s",s[i]);
	}
	return 0;
}
