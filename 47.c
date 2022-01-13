#include<stdio.h>

int interest(int p,int r,int t);

int main()
{
        int p,r,t;
        float I;
        printf("Enter P(initial principle):");
        scanf("%d",&p);
        printf("Enter R(rate):");
        scanf("%d",&r);
        printf("Enter T(time):");
        scanf("%d",&t);
        I=interest(p,r,t);
        printf("Simple Interest = %f",I);
        return 0;
}

int interest(int p,int r,int t)
{
    float I;
    I=(p*r*t)/100;
}