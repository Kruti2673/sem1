#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    if(a>b)
        printf("a is greater",a);
    if(a<b)
        printf("b is greater",b);
    return 0;    
}
