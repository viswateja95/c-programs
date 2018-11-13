//print	the	sum	of	squares	of	first	5	three	divisible	numbers	from	100
#include<stdio.h>
int main()
{
    int i = 100, n = 100,s = 0,count = 0;
    printf("First 5 three divisible Numbers upto %d are : \n", n);

    while(i >= n)
    {

        if(i%3 == 0)
        {

            s+=i*i;
            count++;
        }
        i++;
        if(count == 5)
        printf("\nSum of Squares of first 5 three divisible Numbers is : %d\n",s);
    }
    return 0;

}
