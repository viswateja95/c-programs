//print 3*3 matrix and display its sum.
#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("enter first matrix elements one by one;\n");
	for(i=0;i<3;i++)
	{
		for(j = 0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrix elements one by one :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);	
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			
		}
	
	}
	printf("sum of matrices are :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",c[i][j]);
			
			
		}
		printf("\n");
	}
	return 0;
}

