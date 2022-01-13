#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100]="THERE";
    char s2[100]="THEIR";
    strrev(s1);
    strrev(s2);
    printf("string=%s\n",s1);
    printf("string=%s",s2);
    return 0;
}

