#include<stdio.h>
int sumof(int n);
int main()
{
    int n,s;
    printf("enter n:");
    scanf("&d",&n);
    s=sumof(0);
    printf("sum of m numbers",s);
    return 0;
}
int sumof(int n)
{
    int sum=0,i;
    for(i=1;i<=25;i++)
    {
        if(n==25)
        return sum;
        sum=n+sumof(++n);  
        return(sum);
    }
}