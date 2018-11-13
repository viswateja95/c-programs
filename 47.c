//print 3*3 matrix and display its multiplication.
#include <stdio.h>
int main() 
{
  int i,j,a[3][3], b[3][3], c[3][3];
  printf("Enter 1st matrix elements one by one : \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
	{
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter 2nd matrix elements one by one : \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
	{
      scanf("%d",&b[i][j]);
    }
  }

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
	{
      c[i][j]=a[i][j]*b[i][j];
    }
  }

  printf("Sum of 2 matrices are : \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
	{
      printf("%d ",c[i][j]);
    }
    printf("\n");
  }

  return 0;
}
