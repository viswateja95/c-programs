//print the numbers divisible for 3 and 4
#include<stdio.h>
int main()
{
	int i;
	printf("enter the number :\n");
	scanf("%d",&i);
	if((i%3==0)&&(i%4==0))
	printf("enterd number is divisible by 3 and 4 \n");
	else 
	printf("entered number is not divisible by 3 and 4 \n");
	return 0;
	
}
