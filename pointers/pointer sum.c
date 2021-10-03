#include <stdio.h>

int main()
{
  int x , y;
  int *a1 = &x;
  int *a2 = &y;
  
  printf("Enter values of x  : ");
  scanf("%d",a1);
  printf("Enter values of y :  ");
  scanf("%d",a2);
  
  printf("Sum = %d",*a1+*a2);
  
}