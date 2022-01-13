#include<stdio.h>
int main()
{
    float hardness,carbon,tensile;
    printf("enter hardness of steel:");
    scanf("%f",&hardness);
    printf("enter cabon content: ");
    scanf("%f",&carbon);
    printf("enter tensile strength: ");
    scanf("%f",&tensile);

    if(hardness>50 && carbon<0.7 && tensile>5600)
    {
        printf("grade 10\n");
    }
    else if(hardness>50 && carbon<0.7 && tensile<=5600)
    {
        printf("grade 9\n");
    }
    else if(hardness<=50 && carbon<0.7 && tensile>5600)
    {
        printf("grade 8\n");
    }
    else if(hardness>50 && carbon>=0.7 && tensile>5600)
    {
        printf("grade 7\n");
    }
    else if(hardness>50 || carbon<0.7 || tensile>5600)
    {
        printf("grade 6\n");
    }
    else
    {
        printf("grade 5\n");
    }
    return 0;
}