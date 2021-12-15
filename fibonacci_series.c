#include<stdio.h>

int main()
{
int i,n=1,a,b,c;
printf("Enter n:");
scanf("%d",& n);

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