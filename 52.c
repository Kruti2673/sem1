#include <stdio.h>

int main()
 {
  int a;
  int *pt;

  printf("enter ant number:");
  scanf("%d",&a);
  pt = &a;

  printf("\n[a  ]:Value of a = %d", a);
  printf("\n[*pt]:Value of pt = %d", *pt);
  printf("\n[&a ]:Address of &a = %u", &a);
  printf("\n[pt ]:Address of pt = %u", pt);
  
  return 0;
}