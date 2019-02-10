#include<stdio.h>
int Hexcomplement(int num)
{
	return (~num);
}
int Masking(int num)
{
	int val;
	int choice;
	printf("Enter the number\n");
	scanf("%X", &val);
	printf("1.And\n 2.Or\n 3.Ex-Or\n");
	printf("Enter the choice\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:return (num & val);
		break;
	case 2:return (num | val);
		break;
	case 3:return (num ^ val);
		break;
	default:printf("Invalid Option\n");
		break;
	}
	return -1;
}
int Shifting(int num)
{
	int choice;
	int bits;
	printf("1.Right Shift\n 2.Left Shift\n");
	printf("Enter the type of shift\n");
	scanf("%d", &choice);
	printf("Enter the no of bits");
	scanf("%d", &bits);
	switch (choice)
	{
	case 1: return (num >> bits);
		break;
	case 2: return (num << bits);
		break;
	default: printf("Invalid Option");
		break;
	}
	return  -1;
}
int main()
{
	int num;
	int choice;
	printf("Enter the hexadecimal number ");
	scanf("%X", &num);
	do
	{
		printf("1.One's Complement\n 2.Masking\n 3.Shifting\n 4.Exit\n");
		printf("Enter the choice\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:printf("The One's Complement in Hexadecimal is %X\n", Hexcomplement(num));
			break;
		case 2:printf("The solution is %X\n", Masking(num));
			break;
		case 3:printf("The solution is %X\n", Shifting(num));
			break;
		}
	} while (choice != 4);
	getch();
}
