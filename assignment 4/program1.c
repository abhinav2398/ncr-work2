#include<stdio.h>
int main()
{
	float table[2][3] = { { 1.1,1.2,1.3},{2.1,2.2,2.3}};
	printf("\n %lu",table);
	printf("\n %lu",(table+1));
	printf("\n %lu",*(table+1));
	printf("\n %lu",(*(table+1)+1));
	printf("\n %lu",(*(table)+1));
	printf("\n %f",*(*(table+1) +1));
    printf("\n %f",*(*(table)+1));
	printf("\n %f",*(*(table+1)));
	printf("\n %f",*(*(table) + 1)+1);

}
