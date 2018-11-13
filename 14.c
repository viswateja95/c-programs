//	print	the	sum	of	every	fourth	integer, beginning	with	5	for	all	values	less	than	100
#include<stdio.h>
int main()
{
    int i = 5,s=0;
    printf("number series are :\n");
    while(i <= 100)
    {
        s+=i;
        printf("%d\t",i);
        i+=4;

    }
    printf("%d",s);
    return 0;
}
