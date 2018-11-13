/* Write a program to check the given number for Fibonacci number */

#include<stdio.h>
int main()
{
    int n,a=0, b=1, i, c;
    printf("Enter range of the Fibnoccai Number : ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
	{
        c = a + b;
        printf("%d",a);
        b = a;
        a = c;
    }
    
    return 0;
}
