//print min max and avg numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	float d;
	printf("enter the number :\n");
	scanf("%a%b%c",&a,&b,&c);
	d = (a+b+c)/3;
	printf("average of a,b,c is : %f \n",d);
	if(a>b && a>c)
	printf("maximum number is a \n");
	else if((b>c && b>a))
	printf("maximum number is b \n");
	else if((c>a && c>b))
	printf("maximum number is  c \n");
	else printf("entered number is minimum \n");
	return 0;
	
}
