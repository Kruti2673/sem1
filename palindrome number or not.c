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
        sum=(sum*10)+r;
        n=n/10;
    }
    if(k==sum)
        printf("palindrome number");
    else
        printf("not palindreome number");    
    return 0;
}