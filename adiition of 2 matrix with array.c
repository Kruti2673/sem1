#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter a[%d][%d] :",i+1,j+1);
            scanf("%d",&a[i][j]);
            printf("enter b[%d][%d] :",i+1,j+1);
            scanf("%d",&b[i][j]);
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("addition of 2 matrices is as follows:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}