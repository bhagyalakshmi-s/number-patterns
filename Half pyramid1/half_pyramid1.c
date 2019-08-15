//program to print half pyramid of n rows

#include<stdio.h>
void main()
{
  int n,i,j;
  printf("enter the number of rows:\n");
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
    for (j=0;j<=i;j++)
    {
      printf("%d",j);
    }
    printf("\n");
  }
}
