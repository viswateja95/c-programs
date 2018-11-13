// print the conversion table using farenheit - celsius
#include<stdio.h>
int main()
{
	int fahr;
	double celsius;
	printf("enter the fahr value :\n");
	scanf("%d",&fahr);
	
	int upper = 50;
	
	while(fahr<=upper)
	{
		celsius = 5.0*(fahr-32)/9;
		printf("%d\t%g\n",fahr,celsius);
		fahr++;
	
	}
	return 0;
}
