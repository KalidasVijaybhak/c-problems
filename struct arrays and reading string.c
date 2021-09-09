
#include <stdio.h>
#include <math.h>    
struct EmployeeData
{
  char Name[100];
  int id;
  float salary;
};
  
int main()
{
   struct EmployeeData e1[100];
   
    int x = 0;
   printf("Enter number of employees: ");
   scanf("%d",&x);
   int i = 0;
  for(int i = 1;i <= x;i++){
       printf("Enter data of Employee %d \n",i);
       printf("Name: ");
     scanf("%s",e1[i].Name);
       printf("ID: ");
     scanf("%d",&e1[i].id);
       printf("Salary: ");
     scanf("%f",&e1[i].salary);
  }
    printf("-----Registered Employees-----\n\n");
    for(int i = 1;i <= x;i++){
       printf("Data of Employee %d \n",i);
       printf("Name: %s \n",e1[i].Name);
       printf("ID: %d \n",e1[i].id);
       printf("Salary: %f \n\n",e1[i].salary);
     
  }
   
}
