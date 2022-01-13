#include<stdio.h>

int factorial(int n);

int main()
{
    int n,f;
    printf("Enter n:");
    scanf("%d",&n);
    f=factorial(n);
    printf("Fectorial = %d",f);
    return 0;
}

int factorial(int n)
{
    int f;
    if(n==1)
    {
        return 1;
    }
    f=n*factorial(n-1);
    printf("%d\n",f);
    return f;
}