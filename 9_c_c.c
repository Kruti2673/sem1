#include<stdio.h>
#include<math.h>
float distance(int,int,int,int);
int main()
{
    int x1,x2,y1,y2;
    float d;
    printf("enter x1:");
    scanf("%d",&x1);
    printf("enter y1:");
    scanf("%d",&y1);
    printf("enter x2:");
    scanf("%d",&x2);
    printf("enter y2:");
    scanf("%d",&y2);

    d=distance(x1,y1,x2,y2);
    printf("distance between two points: %f",d);
    return 0;
}
float distance(int x1,int y1,int x2,int y2)
{
    float d;
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return d;
}