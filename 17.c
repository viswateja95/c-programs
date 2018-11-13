//	print	the	sum	of	alternate	7	divisible	numbers	between	1	and	50.
#include<stdio.h>
int main()
{

    int i=1,sum =0;
    while(i <=50)
    {
        if(i%7 == 0)
        {
            sum+=i;
        }

        i+=2;
    }
    printf("%d \n",sum);
    return 0;

}
