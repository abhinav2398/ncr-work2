#include<stdio.h>
int main()
{
	int num,fact=1,i;
	printf("enter a number : ");
	scanf("%d",&num);
	if (num<0)
	{
		printf("factorial not possible");
	}
	else
	{
		for(i=num;i>=1;i--)
		{
			fact=fact*i;
		}
		printf("factorial = %d",fact);
	}
}
