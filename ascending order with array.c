#include<stdio.h>
int main()
{
    int no[20];
    int i,j,a,n;
    printf("enter a no\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&no[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(no[i]>no[j])
            {
                a=no[i];
                no[i]=no[j];
                no[j]=a;
            }
        }
    }
    printf("the numbers in ascending order is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",no[i]);
    } 
    return 0; 
}