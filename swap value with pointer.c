#include<stdio.h>
void swap(*int ,*int);
int main()
{
    int a=10;int b=20;
    printf("before swapping the valuues in main a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("after swapping values in main a=%d,b=%d",a,b);
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}