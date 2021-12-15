#include<stdio.h>

int main()
{
  int a,b,c,d;
  printf("Enter a:");
  scanf("%d",& a);
  printf("Enter b:");
  scanf("%d",& b);
  printf("Enter c:");
  scanf("%d",& c);



  d=a>b?(a>c?a:c):(b>c?b:c);
  printf("%d is greater",c);
  return 0;
  }