#include<stdio.h>
int main()
{
    int m[10],total,i;
    float percentage;

    for(i=0;i<10;i++)
    {
        printf("enter markes %d:",i+1);
        scanf("%d",&m[i]);
        total=total+m[i];   
    }
    percentage=(total)/10.0;
    printf("total=%d\n",total);
    printf("percentage=%f",percentage);
    return 0;
}