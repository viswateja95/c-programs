//Write a program to print the sum of all 6 divisible numbers between 1 and 50.
#include<stdio.h>
int main()
{
	int i=0,s=0;
	while(i<=50)
	{
		
		if(i%6==0)
		{
			s+=i;
		}
		i++;
	}
	printf("%d",s);
	return 0;
}
