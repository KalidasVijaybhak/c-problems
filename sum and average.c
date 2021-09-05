#include<stdio.h>

float sum(float array[],int);
float average(float,int);
int main(){
    float elements[100];
    int size = 0,i = 0;

    printf("enter the total no. of elements: ");
    scanf("%d",&size);

    while(i<size){
        printf("enter element[%d]: ",i+1);
        scanf("%f",&elements[i]);
i++;
    }
    printf("\nSum: %f",sum(elements,size));
    printf("\nAverage %f",average(sum(elements,size),size));

}
float sum (float array[],int size){
    float sum = 0;int i = 0;// i can only have integral values.

    while(i<size){
        sum+=array[i];
        i++;
    }
    return sum;
}

float average(float sum,int size){
    return sum/size;
}


