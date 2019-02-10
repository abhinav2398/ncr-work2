#include<stdio.h>
int main()
{   int a,num,temp=0,rem;
	printf("enter a number");
	scanf("%d",&num);
	a=num;
	while(num!=0)
	{
	rem=num%10;
	temp=temp*10+rem;
	num=num/10;
	}
if(temp==a)
printf("palindrome");
else
printf("not palindrome");	
}
