#include<stdio.h>
int main()
{
    int p,n,z,num;
    char ans='y';
    while(ans=='y' || ans=='Y')
    {
        printf("enter number:");
        scanf("%d",&num);
        if(n==0)
            z++;
        if(n>0)
            p++;
        if(n<0)
            n++;
        printf("require answer");
        scanf("%c",&ans);
    }  
    printf("%d is positive number\n",p);
    printf("%d is negative number\n",n);
    printf("%d is zero\n",z);
    return 0;
}