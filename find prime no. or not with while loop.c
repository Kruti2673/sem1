#include<stdio.h>

int main()
{
        int n,i=2,prime;
        printf("Enter n:");
        scanf("%d",&n);
        while(i<=n/2)
        {
            if(n%i==0)
            {
                prime=1;
                break;
            }
            else
            {
                prime=0;
            }
            i++;
        }
        if(prime==1)
            printf("prime no:");
        else
            printf("not prime no.");
        return 0;
}
