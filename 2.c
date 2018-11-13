// print the average of the three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	float d;
	printf("enter the numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	d = (a+b+c)/3;
	printf("avg of three numbers of a,b & c:%f",d);
	return 0;
	
}
