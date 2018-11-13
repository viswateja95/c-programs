//print	the	numbers	from	1	to	100	with	five	values	per	line,	two	blank	spaces	between	values
#include<stdio.h>
int main()
{
    int i=1,count = 0;
    while(i <=100)
    {

        printf("%d  ",i);
        i++;
        count++;
        if(count == 5)
        {
            printf("\n");
            count=0;
        }

    }

    return 0;

}
