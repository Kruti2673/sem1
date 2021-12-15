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

d=a>b?a*c:b*c;
printf("%d is the answer",d);
return 0;
}