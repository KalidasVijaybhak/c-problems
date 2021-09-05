#include<stdio.h>
#define SIZE 100
int main(){

char str1[100],str2[100];
printf("-------READING A SENTENCE-------\n");


printf("\nEnter the string (fgets): ");
fgets(str2,sizeof(str1),stdin);//char *fgets(char *str, int n, FILE *stream)
printf("String is: %s\n", str2);

printf("\nEnter the string (scanf): ");
scanf("%[^'\n']s",str1);
printf("String is: %s\n", str1);

printf("\nThe gets() function is risky to use since it doesn't perform any array bound checking and keep reading the characters until the new line (enter) is encountered. It suffers from buffer overflow, which can be avoided by using fgets(). The fgets() makes sure that not more than the maximum limit of characters are read.");

}