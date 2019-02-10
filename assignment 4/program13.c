#include<stdio.h>
#include<string.h>
#define MAX 100
void expand(char *s1,char *s2)
{
    int i,j=0,k,l,n;
    char s3[MAX];
    l=strlen(s1);
    for(i=0;i<l;i++)
    {
        if(s1[i]=='-')
        {
            k=i;
            n=s1[i+1]-s1[i-1];
            break;
        }
    }
    for(i=0;i<k;i++)
    {
        s3[i]=s1[i];

    }
    j=k;
    for(i=1;i<=n;i++)
    {
        s3[j]=s1[k-1]+i;
        j++;
    }
    j=k+n-1;
    for(i=k+1;i<l;i++)
    {
        s3[j]=s1[i];
        j++;
    }
    s3[j]='\0';
    strcpy(s2,s3);
}
int main()
{
    char s1[MAX],s2[MAX],s4[MAX];
    int i,l;
    printf("\n Enter a string to expand:");
    gets(s1);
    expand(s1,s2);
    l=strlen(s2);
    for(i=0;i<l;i++)
    {
        if(s2[i]=='-')
        {
            expand(s2,s4);
        }
    }
    printf("\n new string is %s",s4);
    return 0;
}

