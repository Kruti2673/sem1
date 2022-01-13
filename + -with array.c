#include<stdio.h>
int main()
{
    int a[5],i,pos=0,neg=0;

    for(i=0;i<5;i++)
    {
        printf("enter number:");
        scanf("%d",&a[i]);

        if(a[i]>0)
        {
            pos++;
        }
        if(a[i]<0)
        {
            neg++;
        }
    }
    printf("positive count=%d\n",pos);
    printf("negative count%d\n",neg);
    return 0;
}