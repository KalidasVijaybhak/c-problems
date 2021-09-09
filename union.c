/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>  
# define C_SIZE 100
union Address
{
  char Name[C_SIZE];
  char HouseName[C_SIZE];
  char CityName[C_SIZE];
  char State[C_SIZE];
  int PinCode;
};
  
int main()
{
union Address e1;
   char Name[100];
   char HouseName[100];
   char CityName[100];
   char State[100];
   
 
  
       printf("Enter Address\n");
       printf("Name: ");
     scanf("%s",e1.Name);
    //  strcpy( e1.Name, Name); 
     printf("Name %s \n",e1.Name);
       printf("HouseName: ");
     scanf("%s",e1.HouseName); 
    //  strcpy( e1.HouseName, HouseName);
     printf("House Name: %s \n",e1.HouseName);
       printf("City Name: ");
       
     scanf("%s",e1.CityName);
    //  strcpy( e1.CityName, CityName);
     printf("City Name: %s \n",e1.CityName);
      printf("State: ");
     scanf("%s",e1.State);
    //  strcpy( e1.State, State);
       printf("State: %s \n",e1.State);
     printf("PinCode: ");
     scanf("%d",&e1.PinCode);
        
          
           
         
            
     
 
        printf("PinCode: %d \n",e1.PinCode);
     
  
   
}
