#include<stdio.h>
int main()
{
    int n,c;
    printf("enter n:");
    scanf("%d",&n);
    c=n%2;
    if(c==0)
        printf("no.is even");
    if(c!=0)    
        printf("no. is odd");
    return 0;    
}