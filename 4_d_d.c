#include<stdio.h>
int main()
{
    float weight,height,BMI;
    printf("enter weight: ");
    scanf("%f",&weight);
    printf("enter height: ");
    scanf("%f",&height);
    printf("enter BMI: ");
    scanf("%f",&BMI);
    
    BMI=weight/(height*height);
    printf("BMI=%f\n",BMI);

    if(BMI<15)
        printf("starvation\n");
    else if(BMI>=15.1 && BMI<=17.5)    
        printf("anorexic\n");
    else if(BMI>=17.6 && BMI<=18.5)
        printf("underweight\n");
    else if(BMI>=18.6 && BMI<=24.9)
        printf("ideal\n");
    else if(BMI>=25 && BMI<=25.9)
        printf("overweight\n");
    else if(BMI>=30 && BMI<=30.9)
        printf("obese\n");
    else if(BMI>=40)
        printf("morbidly obese\n");
    else
        printf("invalid");
    return 0;                            
}