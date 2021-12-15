#include<stdio.h>

int main()
{
int n,i,sum=0;
printf("Enter n:");
scanf("%d",& n);
 i=1;
 while(i<=n)
 {
 sum=sum+i;
 i++;
 }
 printf("sum=%d",sum);
 return 0;
 }