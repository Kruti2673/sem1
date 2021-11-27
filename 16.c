#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("enetr n:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    printf("sum of numbers %d", sum);
    return 0;
}