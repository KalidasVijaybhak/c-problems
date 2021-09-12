#include<stdio.h>
#include<string.h>
int string_read(char* str){

 
    return strlen(str);
}
int main(){

    char x[10]="hello";
    char *m = "hello";
    m = "fwe";
    printf("Enter String: ");
    scanf("%s",&m);
    printf("String length: %d",string_read(x));
    printf("String: %s",m);
    
    //you cant read using char pointer only use it n functions
}