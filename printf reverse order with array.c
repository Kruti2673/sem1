#include<stdio.h>
int main()
{
    int a[5],i;
    printf("enter a no\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("reverse order:\n");
    for(i=4;i>=0;i--)
        printf("%d\n",a[i]);
    return 0;            
}