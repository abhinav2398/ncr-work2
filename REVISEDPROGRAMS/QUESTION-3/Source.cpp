#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void reverse(char str1[], char str2[]);
void copy(char str1[], char str2[]);
int compare(char str1[], char str2[]);
void concat(char str1[], char str2[]);

int main() {
	
	int result, option;
	char a[100], b[100];
	do {
		printf("Choose which function you want to perform\n");
		printf("\n1.Reverse the Given String");
		printf("\n2.Copy");
		printf("\n3.String Comparison");
		printf("\n4.String Concatenation");
		printf("\n5.Quit");
		printf("\n\nEnter Your Choice:");
		scanf("%d", &option);
		switch (option) {
		case 1:
			printf("\nEnter a String:");
			scanf("%s", a);
			reverse(a,b);
			getchar();
			break;
		case 2:
			printf("\nEnter a String:");
			scanf("%s", a);
			copy(b, a);
			printf("\nResult=%s\n", b);
			getchar();
			break;
		case 3:
			printf("\nEnter 1st string:");
			scanf("%s",a);
			printf("\nEnter 2nd string:");
			scanf("%s",b);
			result = compare(a, b);
			if (result == 0)
				printf("\nboth are same");
			else if (result > 0)
				printf("\n1st>2nd\n");
			else
				printf("\n1st<2nd\n");
			getchar();
			break;
		case 4:
			printf("\nEnter 1st string:");
			scanf("%s",a);
			printf("\nEnter 2nd string:");
			scanf("%s",b);
			concat(a, b);
			printf("\nresult=%s\n", a);
			getchar();
			break;
		default:
			printf("\nInvalid Choice:\n");
			break;
		}

	} while (option != 5);
}
void reverse(char str1[], char str2[])
{
	int i = 0, j;
	int len = strlen(str1);
	for (i = 0 , j=len-1; i != '/0',j>=0 ; i++, j--)
	{
		str2[j] = str1[i];
	}
	str2[i] = '\0';
	printf("The reversed string is %s\n", str2);
}

void copy(char str2[], char str1[]) {
	int i = 0;
	while (str1[i] != '\0') {
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
}

int compare(char str1[], char str2[]) {
	int i;
	i = 0;
	while (str1[i] != '\0') {
		if (str1[i] > str2[i])
			return (1) ;
			if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (0);
}
void concat(char str1[], char str2[]) {
	int i, j;
	i = 0;
	while (str1[i] != '\0')
		i++;
	for (j = 0; str2[j] != '\0'; i++, j++)
		str1[i] = str2[j];
	str1[i] = '\0';
}

