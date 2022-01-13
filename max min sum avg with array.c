#include<stdio.h>
int main()
{
    int n,i,max,min,sum=0,a[5];
    float avg;

    for(i=0;i<5;i++)
    {
        printf("enter number:");
        scanf("%d",&a[i]);

    }
    max=a[0];
    min=a[0];
    
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }    
        if(a[i]<min)
        {
            min=a[i];   
        }    
        sum=sum+a[i];
        avg=sum/5.0;     
    }

    printf("max=%d\n",max);
    printf("min=%d\n",min);
    printf("sum=%d\n",sum);
    printf("avg=%f\n",avg);
    return 0;
}