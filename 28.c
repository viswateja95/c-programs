//print the prime number
#include <stdio.h>
int main()
{
   int i=1, num, p = 0;
   printf("Please enter a number: \n");
   scanf("%d", &num);
   while(i<=num)
   {
      if(num%i==0)
      {
         p++;
      }
      i++;
   }
   if(p==2)
   {
      printf("Entered number is %d "\
             "and it is a prime number.",num);
   }
   else
   {
      printf("Entered number is %d "\
             "and it is not a prime number.",num);
   }
   return 0;
}
