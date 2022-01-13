#include<stdio.h>
int main()
{
    int m[3][3],i,j,n[3][3],sum=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter n:");
            scanf("%d",&m[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter n:");
            scanf("%d",&n[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",n[i][j]);
        }
        printf("\n");
    }


    printf("following matrix is answer:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=m[i][j]+n[i][j];
            printf("%d\n",sum);
        }
        printf("\n");
    }

}
