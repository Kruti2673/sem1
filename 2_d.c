#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r;
    printf("enetr x:");
    scanf("%f",&x);
    printf("enetr y:");
    scanf("%f",&y);

    r=sqrt(pow(x,2)+pow(y,2));
    float theta = atan(y/x);
    printf("polar co-ordinates=%f\n",r);
    printf("tan(theta)=%f\n",theta);
    return 0;
}