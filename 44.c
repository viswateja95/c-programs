//print the pyramid of '$' for the given number of lines.
#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter an integer :\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=(n-i);j++)printf(" ");
			
			for(j=0;j<=2*(i-1);j++)printf("$");
		
		printf("\n");
	}
	return 0;
}
