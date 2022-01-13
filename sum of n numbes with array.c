#include<stdio.h>
int main()
{
    int n;
    int a[1000],sum=0,i;

    printf("enter n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter marks :");
        scanf("%d",&a[i]);

        sum+=a[i];
    }
    printf("sum=%d",sum);
    return 0;
}