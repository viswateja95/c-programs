//print 5 armstrong number after 100
#include<stdio.h>  

int main(void)      
{
    int digit,sum=0,number; 
    printf("The armstrong numbers are-");

    for(number = 100; number <= 10000; number++)
    { 
        int temporary = number; 
        sum = 0;                
        while(temporary > 0) 
        {
            digit = temporary % 10; 
            sum = sum + (digit * digit * digit); 
            temporary = temporary / 10;
        }

        if(sum == number)        
            printf("%d ",number); 
    } 

    return 0;
}
