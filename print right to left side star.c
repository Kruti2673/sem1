#include<stdio.h>

int main()
{
    int i,j,n;
    printf("enetr n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<n;j++)
        {
            printf("");
        }
        for(j=1;j<=i;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

} 