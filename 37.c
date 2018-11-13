//print the fibanocci series of  given number
#include<stdio.h>
int main()
{
	int a = 0,b = 1,c,n,i;
	printf("enter the value for n :\n");
	scanf("%d\n",&n);
	 printf("%d\n%d\n",a,b);
	for(i = 0 ; i < (n-2) ; i++)
	{
		c = a+b;
		printf("%d\n",c);
		a=b;
		b=c;
		
	}
	return 0;
	
}
