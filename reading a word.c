#include<stdio.h>
#define SIZE 100
int main(){

char str1[100];
printf("-------READING A WORD-------\n");


printf("\nEnter the string (fgets): ");
scanf("%s",str1);//we do not use & when reading strings

printf("word: %s",str1);
}