#include<stdio.h>

int main(){

int x = 2;
int *y;
y = &x;
int z = 2;
int *k ;
k = &z;

printf("the value of memory address of x =5 is %p",(void *)y);

printf("\nthe value of memory address of x =5 is %d",*y);



printf("\nthe value of memory address of z =5 is %p",(void *)k);

printf("\nthe value of memory address of z =5 is %d",*k);


printf("the sum of *z + *x = %d",*k + *y);
}