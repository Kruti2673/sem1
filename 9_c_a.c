#include<stdio.h>
void fun(int,int,int);
int main()
{
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);

    fun(a,b,c);
    return 0;
}
void fun(int a,int b,int c)
{
    int i,t;
        t=c;
        c=b;
        b=a;
        a=t;
        printf("a=%d b=%d c=%d",a,b,c);
}