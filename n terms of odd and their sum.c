#include<stdio.h>

int main()
{
  int i,n,sum=0;

  printf("Enter n:");
  scanf("%d",& n);
  printf("the odd numbers are:");

  for(i=1;i<=n;i++)
  {
      printf("%d ",2*i-1);
      sum+=2*i-1;
  }
  printf("\nthe sum of odd natural number upto %d terms =%d",n,sum);
  return 0;
 }