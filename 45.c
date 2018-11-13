//print k in diamond form for a given number of lines.
#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter the integer :\n");
	scanf("%d",&n);
	for(i = 1;i<=2*n-1;i++)
	{
		k=i>n?(n-i%n):i;
		for(j=0;j<=(n-k);j++)printf(" ");
		for(j=0;j<=2*k-1;j++)printf("k");
		printf("\n");
	}
	return 0;
}
