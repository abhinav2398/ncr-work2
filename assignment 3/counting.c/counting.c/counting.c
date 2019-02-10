#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,count=0;
	printf("enter a number : ");
	scanf_s("%d", &n);
	while (n > 0)
	{

		if (n % 2 == 1)
		{
			count++;
		}	
		n = n / 2;
	}
	printf("no of 1's : %d", count);
	getch();
	return 0;

}