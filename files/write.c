#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   
   fptr = fopen("C:\\Users\\kalid\\Desktop\\Projects\\github\\c problems\\files\\writing.txt","w");

   if(fptr == NULL)
   {
      printf("Error file not openede!\n");   
      exit(1);             
   }
   else{
   	printf("File successfully opened\n");
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d\n",num);
    fprintf(fptr,"%d\n",num);
     fprintf(fptr,"%d\n",num);
   printf("File successfully written\n");
   fclose(fptr);
  printf("File closed\n");
   return 0;
}