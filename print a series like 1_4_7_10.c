#include <stdio.h>
void main()
{
   int i,n;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe odd numbers are :");
   for(i=1;i<=n;i=+2)
   {
     printf("%d ",i);
   }
}   

