#include<stdio.h>
int main()
{
int choice;
float a,b,c;
printf("Enter a:");
scanf("%f",& a);
printf("Enter b:");
scanf("%f",& b);
printf("Enter c:");
scanf("%f",& c);



if(a==b && a==c && b==c)
{
    printf(" it is equilateral traingle");
}
else if(a==b||b==c||a==c)
{
    printf("it is isoceles traingle");
}
 else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
{
    printf(" it is right angle traingle");
}
return 0;
}