/* Write a program to find out the given number for Fibonacci number using recursion logic */;;

#include<stdio.h>
int calcFibonacci(int);
int main()
{
    int fibonacci,num;
    printf("\n Enter a number to calculate fibonacci of Nth term :  ");
    scanf("%d",&num);
    fibonacci = calcFibonacci(num);
    printf("\n Fibonacci of given number is %d\n",fibonacci);
    return 0;
}
int calcFibonacci(int num)
{
    if(num==0)
        return 0;
    else if(num==1)
        return 1;
    else
        return (calcFibonacci(num-1)+calcFibonacci(num-2));
}
