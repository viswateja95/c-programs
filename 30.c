//print alternate prime num between 1-100 in reverse order
#include<stdio.h>
#include<stdbool.h>
int checkprime(int a);
int static sum=0;
bool istrue=true;
int main()
{
    int a=100;
    printf("the alternate prime numbers from 100 to 1 are:\n");
    while(a>1)
	{
        if(a!=1)
		{
            if(a==2)
			{

                printf("2");
            }
            checkprime(a);

        }
        a--;

    }

}
int checkprime(int a)
{
    int i=2,count=0;
    while(i<a/2)
	{

        if(a%i==0)
		{
            count++;
        }
        i++;
    }
    if(count<=0)
	{
            if(istrue)
			{
                    printf("%d\t",a);
            }
            istrue=!istrue;
    }

}

