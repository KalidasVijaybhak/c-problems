#include<stdio.h>
#include<string.h>

void returnArray(int x,int *result){
    int i;
    for(i=0;i<x;i++){
        result[i] = i;
    }
}
void returnCharArray(int x,char *result){
    int i;
    char s[] = {'1','2','3','4','5'};
    for(i=0;i<x;i++){
        result[i] = s[i];
    }
}

// void returnString(char *result){
//     int i;
//     char s[100] = "hellow";
     
//         result= s;
    
// }

char* getString(){  //this is good if string value doesnot change
    return "hello";
    
}

void returnString(char* str){ //the correct way for dynamic
  strcpy(str,"hello 1");
    
}

int main() {
    int x = 5;
    int arr[5];
     char arr1[5];
     char str[100];
    returnString(str);
    returnArray(x,arr);
    returnCharArray(x,arr1);
    int i;
    for (i = 0; i < x; i++)
    {
         printf("\nArray %d",arr[i]);
          
    }
     for (i = 0; i < x; i++)
    {
         printf("\nChar Array %c",arr1[i]);
          
    }
    
    printf("\nString = %s",str);
     printf("\nString = %s",getString());
    
}