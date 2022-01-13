#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float p,q,r,n,a;
    for(i=1;i<=10;i++)
    {
        printf("enter the principal: ");
        scanf("%f",&p);
        printf("enter the rate of interest: ");
        scanf("%f",&r);
        printf("enter the years: ");
        scanf("%f",&n);
        printf("enter the compounding time: ");
        scanf("%f",&q);

        a=p+pow((1+(r/q)),(n*q));
        printf("total amount=%f\n",a);
    }
    return 0;
}
