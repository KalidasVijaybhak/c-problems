#include<stdio.h>
#include<string.h>
int string_read(char* str){
    return strlen(str);
}
int main(){

    char x[10]="hello";

    printf("String length: %d",string_read(x));


}