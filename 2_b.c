#include<stdio.h>
#include<math.h>
int main()
{
    float wcf,v,t;
    printf("enetr t;");
    scanf("%f",&t);
    printf("enetr v:");
    scanf("%f",&v);

    wcf=35.74+0.6215*(t)+(0.4275*(t)-35.75)*pow(v,0.16);
    printf("wind chill factor=%f",wcf);
    return 5;
}