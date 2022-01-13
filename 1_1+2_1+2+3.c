#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    printf("enetr number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum+=j;
        }
        printf("required series=%d\n",sum);
    }
    return 0;
}
