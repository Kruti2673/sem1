#include<stdio.h>

int main()
{
    int i,j,n,k;
    printf("enetr n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;

} 