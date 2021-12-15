#include<stdio.h>

int main()
{
long n,i,factorial=1;
printf("Enter n:"),
scanf("%d",& n);

 i=1;
 while(i<=n)
 {
 factorial=factorial*i;
 i++;
 }
  printf("Factorial=%ld",factorial);
 return 0;
 }