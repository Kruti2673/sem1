
#include<stdio.h>

int main()
{
        int i,j,k,a=1,n;
        char b=65;
        printf("Enter n:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(k=1;k<=n-i;k++)
                {
                        printf("  ");
                }
                for(j=1;j<=i;j++)
                {
                        if(i%2!=0)
                        {
                            printf("%d",a);
                            a++;
                        }
                        else
                        {
                            printf("%c",b);
                            b++;
                        }
                }
                printf("\n");
        }
        return 0;
}