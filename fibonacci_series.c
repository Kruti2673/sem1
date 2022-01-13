#include<stdio.h>

int main()
{
long  int i,n=1,a,b,c;
printf("Enter n:");
scanf("%ld",& n);

  a=1;
  b=1;
  while(i<=n)
  {
  printf("%d\t",a);
  c=a+b;
  a=b;
  b=c;
  i++;
  }
  return 0;
  }