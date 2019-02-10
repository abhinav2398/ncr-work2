#include<stdio.h>
int main()
{
	float salary;
	int HRA,DA;
	printf("enter your salary");
	scanf("%f",&salary);
if(salary>1&&salary<=4000)
{
	HRA=0.1*salary;
	DA=0.5*salary;
}
else if(salary>4000&&salary<=8000)
{
	HRA=0.2*salary;
	DA=0.6*salary;
}
else if(salary>8000&&salary<=12000)
{
	HRA=0.25*salary;
	DA=0.70*salary;
}
else if(salary>12000)
{
	HRA=0.30*salary;
	DA=0.80*salary;
}
 printf("\ngrossSalary=%f",((float)salary)+HRA+DA);
}
