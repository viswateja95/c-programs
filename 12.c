//print alternate numbers from 50-100
#include<stdio.h>
int main()
{
	int i=50;
	while(i <= 100)
	{
		if(i%7==0)
		{
			printf("alternate numbers are : %d\n",i);
		}
		i+=2;
	}
	return 0;
}
