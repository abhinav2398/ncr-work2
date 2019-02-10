#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int size(int n)
{
    int i=0;
    while(n>0)
    {
        n=n/10;
        i++;
    }
    return i;
}
int binary_to_decimal(int n)
{
    int i,j,temp,s=0;
    i= size(n);
    for(j=0;j<i;j++)
    {
        temp= n%10;
        s=s+temp*(pow(2,j));
        n=n/10;
    }
    printf("\n decimal number is %d",s);
    return 0;
}
int decimal_to_binary(int n)
{
    int i,j,temp,s=0;
    i= 0;
    while(n>0)
    {
        j=n%2;
        s=s+j*(pow(10,i));
        n=n/2;
        i++;
    }
    printf("\n binary number is %d",s);
    return 0;
}
int main()
{
    int n,i;
    printf("\n enter your choice \n 1) binary to decimal \n 2) decimal to binary");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        {
            printf("enter a binary number to convert");
            scanf("%d",&n);
            binary_to_decimal(n);
            break;
        }
    case 2:
        {
            printf("enter a decimal number to convert");
            scanf("%d",&n);
            decimal_to_binary(n);
            break;
        }
    }
    return 0;
}
