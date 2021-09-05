#include<stdio.h>
int  length_word(char str[100]);
int  length_sentence(char str[100]);
int main(){
char Str[1000],Str1[100];
    
   
     printf("\nEnter the Sentence: ");
    fgets(Str1,sizeof(Str1),stdin);
   
    printf("\nLength of Sentence is %d\n", length_sentence(Str1));
    
    printf("Enter the Word: ");
    scanf("%s", Str);
  
  
    printf("Length of word is %d", length_word(Str));
    
   
    
}

int  length_word(char str[100]){
int i;
    for (i = 0; str[i] != '\0'; ++i);
    return i;

}
int  length_sentence(char str[100]){
int i;
    for (i = 0; str[i] != '\0'; ++i);
    return i;

}