//print the rectangular box using *
#include<stdio.h>
int main()
{
	int length,breadth,i,j;
	do
	{
	
	printf("enter length of a rectangle :\n");
	scanf("%d",&length);
	printf("enter breadth of a rectangle :\n");
	scanf("%d",&breadth);
	if (length == breadth)
	printf("length is not equal to breadth hence it is not a rectangle \n");
	}while(length == breadth);
	for(i=0;i<=length;i++)
	{
		for(j=0;j<=breadth;j++)
		{
			printf("*");
		}
		printf("\n");	
	}

	return 0;
		
}
