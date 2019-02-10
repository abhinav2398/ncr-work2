#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a[100], i, j = 0,n,temp=0;
	printf("enter no of elements : ");
	scanf_s("%d", &n);
	printf("\n enter the elements of array");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i=n; i > 0; i--)
	{
		if (a[i] < 0)
		{
			if (a[j] < 0)
			{
				j++;
			}
			else
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("\n %d",a[i]);
	}
	getch();
	return 0;
}