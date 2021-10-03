/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
    // scanf("%s",&m);
    printf("String length: %d",string_read(x));
    printf("String: %s",m);
    
    //you cant change the value using char pointer inside main  only use it n functions
}