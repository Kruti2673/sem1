#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,x3,y3;
    printf("enetr x1:");
    scanf("%f",&x1);
    printf("enetr x2:");
    scanf("%f",&x2);
    printf("enetr x3:");
    scanf("%f",&x3);
    printf("enetr y1:");
    scanf("%f",&y1);
    printf("enetr y2:");
    scanf("%f",&y2);
    printf("enetr y3:");
    scanf("%f",&y3);
    
    if(((y2-y1)/(x2-x1))==((y3-y2)/(x3-x2))==((y1-y3)/(x1-x3)))
    {
        printf("points are in straight line");
    }
    else
    {
        printf("points are not in straight line");
    }
    return 0;
}