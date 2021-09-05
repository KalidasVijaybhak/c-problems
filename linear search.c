#include<stdio.h>

int linearsearch(float array[],int size,float searchElement);


int main(){
    float array[100];
    float searchElement;
    int size = 0, i = 0;

    printf("Enter the no. of elements: ");
    scanf("%d",&size);

    printf("Enter the array of elements:\n");
    while(i<size){
        printf("Element [%d]: ",i+1);
        scanf("%f",&array[i]);
        i++;
    }

    printf("\nEnter the element to be searched: ");
    scanf("%f",&searchElement);

    if(linearsearch(array,size,searchElement)==-1){
        printf("Element not found ");

    }
    else{
        printf("Element found ");
    }
}

int linearsearch(float array[],int size,float searchElement){
    int i = 0;
    while(i<size){
        if(array[i]==searchElement){
            return 1;
            break;
        }
        i++;
    }
    return -1;
}