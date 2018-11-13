//read the series of positive and negstive number and print each number with its square and square root
#include<stdio.h>
#include<math.h>
int main()
{
	int i,s,r;
	char ch;
	do
	{
		printf("enter a +ve or -ve value :\n");
		scanf("%d\n",&i);
		s=i*i;
		r = sqrt(s);
		printf("num square squareroot \n");
		printf("%d\t%d\t%d\t",i,s,r);
		printf("do you want to continue(y/n) :\n");
		scanf("%c\n",ch);
	}while((ch=='y')||(ch=='Y'));
	return 0;
}
