#include<stdio.h>
int main()
{
    int m[3][3],i=0,j=0,mt[3][3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter m[%d][%d] :",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mt[i][j]=m[j][i];
            printf("%d\t",mt[i][j]);
        }
        printf("\n");
    }
    return 0;
}