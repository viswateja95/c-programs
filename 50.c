/* Write a program to display the the sum of Fibonacci numbers for the given number of terms */

#include<stdio.h>
int sumOfFibonacci(int);
int main()
{
    int fibonacci,num;
    printf("\n Enter a number to calculate sum of fibonacci series of Nth term :  ");
    scanf("%d",&num);
    fibonacci = sumOfFibonacci(num);
    printf("\n Sum of fibonacci series upto given number is %d\n",fibonacci);
    return 0;
}
int sumOfFibonacci(int num)
{
    int sum=0;
    if(num==0)
        return 0;
    else if(num==1)
        return 1;
    else
        return (sumOfFibonacci(num-1)+sumOfFibonacci(num-2)+1);
}
