#include<stdio.h>

int main()
{
 int choice;
 float a,b;
 printf("1. Addition\n");
 printf("2. Subtraction\n");
 printf("3. Multiplication\n");
 printf("4. Division\n");
 printf("Enter your choice of operation:");
 scanf("%d",& choice);
 printf("Enter a:");
 scanf("%f",& a);
 printf("Enter b:");
 scanf("%f",& b);

 switch(choice)
 {
  case 1:
  printf("Addition=%f",a+b);
  break;
   case 2:
  printf("Subtraction=%f",a-b);
  break;
   case 3:
  printf("Multiplication=%f",a*b);
  break;
   case 4:
  printf("Division=%f",a/b);
  break;
  default:
  printf("Invalid choice");
  }
  return 0;
}