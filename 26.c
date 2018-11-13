//print palindrom numberss from 100 to 200
#include<stdio.h>
int main()
{
	int num, rem, reverse = 0, temp , start, end;

   printf("Enter the lower limit: ");
   scanf("%d",&start);
   num = start;
   printf("Enter the upper limit: ");
   scanf("%d",&end);
   printf("Palindrome numbers between %d and %d are: ",start,end);
   while(num<=end)
   {
      temp=num;
      reverse=0;
      while(temp)
	  {
         rem=temp%10;
         temp/=10;
         reverse = reverse * 10 + rem;
      }
      if(num==reverse)
         printf("%d ",num);
    num++;
   }
	return 0;
}
