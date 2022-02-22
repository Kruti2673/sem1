#include<stdio.h>
void year(int n);
int main()
{
    int n,c;
    printf("enter n:");
    scanf("%d",&n);
    c=year(n);
    printf("leap year",c);
    return 0;
}
void year(int n)
{
    if(n%4==0 || n%400==0 || n%100!==0)
    {
        printf("leap year");
    }
    else
    {
        printf("non leap year");
    }
}