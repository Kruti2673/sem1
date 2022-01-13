#include<stdio.h>

int main()
{
    int n,i,j,k,c=1,d=65;
    printf("enetr n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n;k++)
        {
            printf("");
        }
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                printf("%d ",c);
                c++;
            }
            else
            {
                printf("%c ",d);
                d++;
            }
        }
        printf("\n");
    }
    return 0;
}