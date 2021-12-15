#include<stdio.h>
int main()
{
    int n,r,sum=0,k;
    printf("enter n:");
    scanf("%d",&n);
    k=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(k==n)
        printf("armstrong number");
    else
        printf("not armstrong number");    
    return 0;
}