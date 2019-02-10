#include<stdio.h>
int main()
{
	int num,result=0,rem;
	printf("enter a number : ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
	    result=result*10+rem;
	    num=num/10;
	}
	printf("reverse number = %d",result);	
}
