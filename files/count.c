#include <stdio.h>
#include<stdlib.h>
 int main()
{
   int characters, words, lines;
   characters = words = lines = 0;
  FILE *fp = fopen("write2.txt","r"); 
   int ch= getc(fp); 
   while (ch!=EOF) 
     {  
           putchar(ch);
           ch= getc(fp); 
           if(ch!= ' ' && ch != '\n')
              {
                ++characters;
               }
            if (ch == ' ' || ch == '\n')
              {
               ++words;
               }
           if (ch == '\n')
              {
               ++lines;
              }
        }
      // if(characters>0)
      //     {
      //        ++lines;
      //        ++words;
      //      }
      if (feof(fp)){
          printf("\n reached end of file\n"); }
      else {
          printf("\n something wrong");
        }
      fclose(fp);
      printf("Lines : %d \n", lines);
      printf("Words : %d \n", words);
      printf("Characters : %d \n", characters);
   FILE *fptr;
 fptr = fopen("output.txt","w");

  fprintf(fptr,"Lines: %d\n",lines);
    fprintf(fptr,"Words: %d\n",words);
     fprintf(fptr,"Characters:  %d\n",characters); 
     printf("Output successfully written\n");
   fclose(fptr);
  printf("File closed\n");
    return 0;
}