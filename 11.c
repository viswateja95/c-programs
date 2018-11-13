//print the numbers which is divisible by 3 in between 1-50
#include<stdio.h>
int main()
{
	int i=0;
	while(i <= 50)
	{
		if(i%3 == 0)
		{
			printf("hence the numbers are divisible by 3 : %d\n",i);
			
		}
		i++;
	}
	return 0;
	
}
