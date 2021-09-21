#include <stdio.h>
int main() {
   int var1 = 5, var2 = 5;

   // 5 is displayed
   // Then, var1 is increased to 6.
   printf("%d\n", var1++);

   // var2 is increased to 6 
   // Then, it is displayed.
   printf("%d\n", ++var2);

   int x = ++var2 + ++var1;
   printf("%d",x);//14
   
   return 0;
}

   // a = 5
// ++a;          // a becomes 6
// a++;          // a becomes 7
// --a;          // a becomes 6
// a--;          // a  becomes 5

//    ++ and -- operator as prefix and postfix
// If you use the ++ operator as a prefix like: ++var, the value of var is incremented by 1; then it returns the value.
// If you use the ++ operator as a postfix like: var++, the original value of var is returned first; then var is incremented by 1.