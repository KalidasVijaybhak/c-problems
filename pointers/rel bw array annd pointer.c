//relation between arrays and pointer


#include <stdio.h>

int main()
{   int k[10];

     int *a = k ;
     
     for(int i =0;i<5;i++){
         printf("Enter values: ");
         scanf("%d",a+i);
     }
      for(int i =0;i<5;i++){
         printf("Pritned values: %d\n",*(a+i));
        
     }
}
