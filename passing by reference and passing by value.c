#include <stdio.h>
void swap(int , int);
 void swap_reference(int *pFirstVariable, int *pSecondVariable);
 
int main(void)
{
  int a = 100;
  int b = 200;
  	printf("----------------Passing By Value ----------------\n");
  printf("before swap: value of a: %d \n", a);
  printf("before swap: value of b: %d \n", b);

  // call function to swap values
  swap(a, b);

  // check values outside the function after swap function is run
  printf("after swap: value of a: %d \n", a);
  printf("after swap: value of b: %d \n", b);

  	printf("\n\n----------------Passing By Reference ----------------\n");
  printf("before swap: value of a: %d \n", a);
  printf("before swap: value of b: %d \n", b);

  // call the function to swap values, using the 'address of' operator to pass in the address of each variable
  swap_reference(&a, &b);

  // check values outside the function after swap function is run
  printf("after swap: value of a: %d \n", a);
  printf("after swap: value of b: %d \n", b);

}
void swap(int firstVariable, int secondVariable)
{
  // create a temporary variable to hold one of the values to perform the swap
  int tempVariable;

  tempVariable = firstVariable;  /* temporarily save the value of the first variable */
  firstVariable = secondVariable;  /* swap the vale of the first variable with the value of the second variable */
  secondVariable = tempVariable;  /* put the value of the first variable into the second variable */

  return;
}
void swap_reference(int *pFirstVariable, int *pSecondVariable)
{
  int temp;

// using dereferenced pointers means the function is working with the values at the addresses that are passed in
  temp = *pFirstVariable;
  *pFirstVariable = *pSecondVariable;
  *pSecondVariable = temp;

  return;
}