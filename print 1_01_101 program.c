#include<stdio.h>

int main()
{
    int n,j,i;
    printf("enetr n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",(i+j+1)%2);
        }
        printf("\n");
    }
    return 0;
}