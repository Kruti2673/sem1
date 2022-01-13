#include<stdio.h>
int main()
{
    int a[5],i,max=0;
    printf("enter marks :",i+1);
    scanf("%d",&a[0]);
    max=a[0];

    for(i=1;i<5;i++)
    {
        printf("enter marks :");
        scanf("%d",&a[i]);

        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("largest elementis %d",max);
    return 0;
}