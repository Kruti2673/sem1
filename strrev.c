#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("enter s1:",s1);
    gets(s1);
    printf("enter s2:",s2);
    gets(s2);
    strrev(s1);
    strrev(s2);
    printf("string=%s\n",s1);
    printf("string=%s",s2);
    return 0;
}

