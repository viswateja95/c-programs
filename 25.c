// print the armstrong number
#include<stdio.h>
int main()
{
	int i,num,s = 0,digit;
	printf("enter the number :\n");
	scanf("%d",&num);
	i = num;
	while(num )
	{
		digit = num % 10;
		s += digit * digit * digit;
		num/=10;
	}
	(i == s)?printf("yes\n"):printf("no\n");
	return 0;
}
