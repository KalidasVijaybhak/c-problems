#include <stdio.h>
#include<string.h>

int main() {
  float x[100];
  int i,k;
  float sum = 0;
  printf("Enter the no. of elements: ");
  scanf("%d",&k);
  
  for (int i = 0;i<k;i++) {
    printf("Enter no[%d]:",i+1);
    scanf("%f",&x[i]);
    sum+=x[i];
  }
  printf("Sum: %f",sum);
}
