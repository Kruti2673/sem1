#include<stdio.h>
int main()
{
    int n,r,revrse;
    printf("enter n value: ");
    scanf("%d",&n);
    int rn=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        if(n==0)
            rn=rn+r;
        else
            rn=(rn+r)*10;
    }
    printf("revrse numbers=%d",rn);
    
    return 0;
}