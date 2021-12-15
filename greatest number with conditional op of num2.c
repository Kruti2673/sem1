#include<stdio.h>

int main()
{
  int a,b,c;
  printf("Enter a:");
  scanf("%d",& a);
  printf("Enter b:");
  scanf("%d",& b);

  c=a>b?a:b;
  printf("%d is greater",c);
  return 0;
  }