#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int c;
    printf("enter s1:");
    gets(s1);
    printf("enter s2:");
    gets(s2);
    c=strcmp(s1,s2);
    if(c==0)
        printf("string are same");
    else
        printf("string are not same");
    return 0;
}

