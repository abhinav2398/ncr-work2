#include<stdio.h>
int main()
{   int a,num,temp=0,rem;
	printf("enter a number");
	scanf("%d",&num);
	a=num;
	while(num!=0)
	{
	rem=num%10;
	temp=temp+(rem*rem*rem);
	num=num/10;
	}
if(temp==a)
printf("the number is an armstrong number");
else
printf("the number is not an armstrong number");	
}
