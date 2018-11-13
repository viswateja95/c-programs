//print 5 alternate 7 divisible numbers after number 100
#include<stdio.h>
int main()
{
	int i = 100,count =1;
	while(i <= 200 )
	{
		if (i%7 == 0 && count <=5)
		{
			printf("returned numbers are divisible by 7 :%d\n",i);	
			count++;
		}
		i+=2;
		
		
	}
	return 0;
}
