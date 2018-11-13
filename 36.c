//print the table for any number from 1-10
#include<stdio.h>
int main()
{
	int i, n;
	printf("enter a number :\n");
	scanf("%d",&n);
	for(i=1;i <= 20;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
	
	return 0;
}
