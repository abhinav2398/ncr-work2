#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, arr[20], sum1 = 0, n,flag=0;
	int sum;
	printf("enter sum : ");
	scanf_s("%d", &sum);
	printf("no of elements : ");
	scanf_s("%d", &n);
	printf("enter an array : ");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i <= n; i++)
	{
		sum1 = 0;
		for (j = i; j <= n; j++)
		{
			sum1 = sum1 + arr[j];
			if (sum == sum1)
			{
				flag = 1;
				printf("indexes are : %d,%d", i, j);
			}
		}
	}
	if (flag == 0)
	{
		printf("\n subaarray not found");
	}
	getch();
	return 0;
}