/* Write a program to read in a series of numbers, each of which can contain decimal places. Print each number as it is read in.Determine whether each number is +ve, -ve or zero, and print "positive", "negative" or "zero" next to it.At the end print how many numbers are positive, negative and zero */
#include<stdio.h>
int main(){
    char ch;
    float i;
    do
	{
        printf("\nEnter a (+ve /-ve)Number  : ");
        scanf("%f",&i);
        if(i>0)
            printf("%f is Positive Number\n",i);
        else if(i<0)
             printf("%f is negative 
			  Number\n",i);
        else
             printf("%f is Zero\n",i);

        printf("Do you want to continue...(y/n) : \n");
        scanf (" %c", &ch);
    }while((ch=='y')||(ch=='Y'));
    return 0;
}
