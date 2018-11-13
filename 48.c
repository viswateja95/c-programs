/* Write a program to find out the factorial of a given number using recursion */

#include<stdio.h>
long int calcFactorial(int);
int main()
{
    int a;
    long long int result;
    printf("\n Enter a number to calculate factorial of given number : ");
    scanf("%d",&a);
    result = calcFactorial(a);
    printf("\n Factorial of %d number is %lld\n",a,result);
    return 0;
}
long int calcFactorial(int fact)
{
    if(fact<=1)
        return 1;
    else
        return (fact*calcFactorial(fact-1));

}
