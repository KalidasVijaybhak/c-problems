#include <stdio.h>
void swap(int *, int *);
int main()
{
  int x , y;
  int *a1 = &x;
  int *a2 = &y;
  
  printf("Enter values of x  : ");
  scanf("%d",a1);
  printf("Enter values of y :  ");
  scanf("%d",a2);
  
swap(a1,a2);

   printf("After swap : x =  %d  y = %d" ,*a1,*a2);
   
}
void swap(int *x,int *y){
    int  temp = *x;
    *x = *y;
    *y = temp;
}

