#include<stdio.h>

int asciiGenerate(char x);

int main(){
    char x;
    printf("Enter a character to generate ascii value (enter only a single character): ");
    scanf("%c",&x);
    printf("\nasciiGenerate %d",asciiGenerate(x));
}

int asciiGenerate(char x){
    return (int)x;
}