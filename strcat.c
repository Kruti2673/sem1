#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("enter s1:",s1);
    gets(s1);
    printf("enter s2:",s2);
    gets(s2);
    strcat(s1,s2);
    printf("string=%s",s1);
    return 0;
}

