// check whether the number is palindrome or not
#include<stdio.h>
int main()
{
	int i,n=1,dig,s=0;
	printf("enter the number :\n");
	scanf("%d",&n);
	i=n;
	while(n)
	{
		dig = n%10;
		s = (s*10)+dig;
		n/=10;
	}
	(i==s)?printf("yes\n"):printf("no\n");
	return 0;
}
