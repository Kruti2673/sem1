#include<stdio.h>

int main()
{
  float fahreneit,celcius;
  printf(" Enter temperature in fahreneit:");
  scanf("%f", & fahreneit);
  celcius=0.56*(fahreneit)-32;
   printf("Temperature in celcius:%f",celcius);
   return 0;
   }