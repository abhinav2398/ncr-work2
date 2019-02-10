#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
     char s[20];
     int i,j,k;
     printf("\nEnter a string : ");
     scanf("%s",s);
     for(i=0;i<strlen(s);i++)
	 {
    	printf("\n");
    	for(j=i+1;j<strlen(s);j++)
    	{
        	printf("%c",s[j]);
    	}
    	for(k=0;k<=i;k++)
    	{
          printf("%c",s[k]);
		}
	}
getch();
}
