#include<stdio.h>
int main()
{
	char *color[6] = {"red", "green", "blue", "white", "black", "yellow"};
	printf("\n %lu",color);
	printf("\n %lu",(color+2));
	printf("\n %s",*color);
	printf("\n %s",*(color+2));
	printf("\n %lu",color[5]);
	printf("\n %s",*(color+5));
	getch();
}


