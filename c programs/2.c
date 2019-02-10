#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char ch[80],a=0,b=0,c=0,i;
	printf("enter a character ");
	gets(ch);
	for(i=0;ch[i]!=NULL;i++)
	{
		if((ch[i]>='A'&&ch[i]<='Z')||(ch[i]>='a'&&ch[i]<='z'))
			a++;
		else if(ch[i]>='0'&&ch[i]<='9')
			b++;
		else if(ch[i]==' ')
			c++;
	}
	printf("no of alphabets : %d\n",a);
	printf("no of numbers : %d\n",b);
	printf("no of spaces : %d\n",c);
	
}
