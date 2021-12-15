#include<stdio.h>

int main()
{
 int m1,m2,m3,m4,m5,total;
 float percentage;
 printf("Enter marks of m1:");
 scanf("%d", & m1);
  printf("Enter marks of m2:");
 scanf("%d", & m2);
  printf("Enter marks of m3:");
 scanf("%d", & m3);
  printf("Enter marks of m4:");
 scanf("%d", & m4);
  printf("Enter marks of m5:");
 scanf("%d", & m5);
 total=m1+m2+m3+m4+m5;
 percentage=(total/500.0)*100;
 printf("Total marks=%d\n",total);
 printf("Percentage=%f\n",percentage);
 return 0;
 }