#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,a[100],l,s=0,min,max;
	i=-1;
	a[i]=5;
	while(a[i]>0)
	{
	printf("\nenter number:");
	scanf("%d",&a[i+1]);
	i++;
	}
	
 l=i;
 printf("\nnumber of positive numbers:%d",l);
 
 //average
  for(i=0;i<l;i++)
 {
 	s=s+a[i];
 }
 
 //minimum
min= a[0];
 for(i=1;i<l;i++)
 {
 	if(min>a[i])
 	min=a[i];
 }
	printf("\n minimum value:%d",min);
	
	//maximum
	max=a[0];
	for(i=1;i<l;i++)
 {
 	if(max<a[i])
 	max=a[i];
 	
 }
 

	printf("\n maximum value:%d",max);
	printf("\n averagevalue:%f",(float)s/l);
}
