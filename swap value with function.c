#include<stdio.h>
void swap(int x,int y);
int main()
{
    int x=10;int y=20;
    printf("before swapping the valuues in main a=%d,b=%d\n",x,y);
    swap(x,y);
}
void swap(int x,int y)
{
    int c;
    c=x;
    x=y;
    y=c;
    printf("after swapping values in swap function x=%d,y=%d\n",x,y);
}