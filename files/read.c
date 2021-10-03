#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("C:\\Users\\kalid\\Desktop\\Projects\\github\\c problems\\files\\writing.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   else{
      printf("File successfully opened\n");
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n = %d", num);
     printf("File successfully closed\n");
   fclose(fptr); 
  
   return 0;
}