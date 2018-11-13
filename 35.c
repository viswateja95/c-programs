//print the factorial of a given number:
#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("enter the factorial number:\n");
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		fact *= i;
	}
	printf("factorial of number is: %d \n",fact);
	return 0;
}
