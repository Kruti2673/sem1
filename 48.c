#include<stdio.h>

int fibbo(int n);

int main()
{
    int t1=0,t2=1,nextterm=0,n,f;
    printf("Enter n:");
    scanf("%d",&n);

    f=fibbo(n);
}

int fibbo(int n)
{
    int nextterm,t1=0,t2=1;
        printf("Fibonacci Series: %d %d ",t1,t2);
    nextterm=t1+t2;
    while(nextterm<=n)
    {
        printf("%d,",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }
}