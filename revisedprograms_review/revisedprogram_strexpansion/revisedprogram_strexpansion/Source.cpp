#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define size 100
int main()
{
	int length_string1;// The variable len is used to store the length of the string
	int flag = 0;//This variable is used to check the input validations
	while (1)//checking for positive length
	{
		printf("enter the length of the string:\n");
		scanf_s("%d", &length_string1);
		if (length_string1 >= 0)
		{
			break;
		}
	}
	char *string_input;// The string entered by the user is stored in this variable
	char string_expanded[size];//  the expanded string is stored in this variable
	int length_string2 = 0;// The length of the epanded string
	string_input = (char *)malloc(sizeof(char)*(length_string1 + 1));// The memory is allocated dynamically to the input string
	char ch;
	printf("\nEnter the string\n");
	scanf("%s", string_input);
	for (int j = 0; j < length_string1; j++) {

		if (string_input[j] == '!' || string_input[j] == '@' || string_input[j] == '#' || string_input[j] == '$' || string_input[j] == '%' || string_input[j] == '^' || str[j] == '&' || str[j] == '*' || str[j] == '(' || str[j] == ')') {
			printf("Invalid character\n");
			return 0;
		}
	}
	if (string_input[0] == '-' || string_input[length_string1 - 1] == '-')
	{
		flag = 1;
	}
	printf("entered string is %s\n", string_input);
	for (int i = 0; i < length_string1 && (flag == 0); i++)
	{
		if (string_input[i] == '-')
		{
			if (isdigit(string_input[i - 1]))
			{

				if (isdigit(string_input[i + 1]))
				{
					int first = (int)string_input[i - 1];
					int sec = (int)string_input[i + 1];
					for (int j = first + 1; j < sec; j++)
					{
						string_expanded[length_string2] = (char)j;
						length_string2++;
					}
				}
				else
				{

					flag = 1;
					break;
				}
			}
			if (isalpha(string_input[i - 1]))
			{
				if (isalpha(string_input[i + 1]))
				{
					int first = (int)string_input[i - 1];
					int sec = (int)string_input[i + 1];
					for (int j = first + 1; j < sec; j++)
					{
						str2[length_string2] = (char)j;
						length_string2++;
					}
				}
				else
				{
					flag = 1;
					break;
				}
			}
		}
		else
		{
			string_expanded[length_string2] = string_input[i];
			length_string2++;
		}
	}
	string_expanded[length_string2] = '\0';
	if (flag == 1)
	{
		printf("Invalid input\n");
	}
	else
	{
		printf("valid input\n");
		printf("The resultant string is\n %s", string_expanded);
	}
	system("pause");
	return 0;
}