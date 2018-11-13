//print centigrade to farenheit temp
#include <stdio.h>
int main()
{
	float f,c;
	printf("enter farenheti temperature :\n");
	scanf("%f",&f);
	c = (f-32)*5/9;
	printf("centigrade temprature is: %f",c);
	return 0;
}
