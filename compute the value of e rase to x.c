#include<stdio.h>
int main()
{
    float x,sum,row;
    int i,n;
    printf("input value of x:");
    scanf("%f",&x);
    printf("input numbers of turm: ");
    scanf("%d",&n);

    sum=1;
    row=1;
    for(i=1;i<n;i++)
    {
        row=row*x/(float)i;
        sum=sum+row;
    }
    printf("sum is =%f\n",sum);
    return 0;
}