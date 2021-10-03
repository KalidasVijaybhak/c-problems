
// C program to demonstrate #define
#include <stdio.h>
  
// After this line HYD is replaced by
// "Hyderabad"
#define HYD "Hyderabad"
  
int main()
{
    printf("%s ", HYD);
    return 0;
}