#include<stdio.h>
#include<math.h>
int main()
{
	int n, decimal = 0, rem, i = 0, res, j, k = 0;
	char hexa[100];
	printf("enter a num : ");
	scanf_s("%d", &n);
	while (n > 0)
	{
		rem = n % 10;
		decimal = decimal + rem*(int)pow(2, i);
		n = n / 10;
		i++;
	}
	printf("decimal number = %d", decimal);
	while (decimal > 0)
	{
		res = decimal % 16;
		if (res < 10)
		{
			hexa[k] = res + 48;
		}
		else
		{
			hexa[k] = res + 55;
		}
		k++;
		decimal = decimal / 16;
	}
	printf("\n Hexadecimal Representation\n");
	for (j = k - 1; j >= 0; j--)
	{
		printf("%c", hexa[j]);
	}
	printf("\n");
	getch();
	return 0;
}