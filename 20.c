/* Write a program to read in a series of numbers and print each number with its square and its cube */

#include<stdio.h>
int main(){
    int i,s,c;
    char Char;
    do
	{
        printf("\nEnter a Number : ");
        scanf("%d",&i);

        s = i*i;
        c=i*i*i;

        printf("Number  Square  Cube\n");
        printf(" %d\t %d\t %ld\n",i,s,c);

        printf("Do you want to continue...(y/n) : \n");
        scanf (" %c", &Char);
    }while((Char=='y')||(Char=='Y'));
    return 0;
}
