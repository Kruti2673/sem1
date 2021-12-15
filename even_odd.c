#include<stdio.h>

int main()
{
 int n;
 printf("Enter n:");
 scanf("%d",& n);

 if (n%2==0)
   {
    printf(" Number is even");
   }
 if (n%2!=0)
   {
     printf("Number is odd");
   }
  return 0;
  }