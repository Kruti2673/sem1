#include<stdio.h>
int main()
{
    char s[100];
    int i=0;
    printf("enter string:");
    gets(s);
    while(s[i]!='\0')
    {
        i++;
    }
    printf("length of string=%d",i);
    return 0;
}