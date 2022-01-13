#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100]="THERE";
    char s2[100]="THEIR";
    strcpy(s1,s2);
    printf("string=%s",s1);
    return 0;
}