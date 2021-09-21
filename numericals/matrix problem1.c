 
#include <stdio.h>
#include <stdlib.h>
void matrix_read(int [10][10], int);
void matrix_display(int [10][10], int);
void matrix_sum(int [10][10], int [10][10], int [10][10],int);
 

int main(){
  int size, choice;
  int A[10][10], B[10][10], SUM[10][10], M[10][10], T[10][10];

   
      printf("\nEnter the size of matrix:");
      scanf("%d", &size);

      printf("\nEnter the A matrix:\n");
      matrix_read(A, size);
      printf("\nEnter the B matrix:\n");
     matrix_read(B, size);
      printf("\nThe A Matrix:\n");
      matrix_display(A, size);
      printf("\nThe B Matrix:\n");
      matrix_display(B, size);

      printf("\nThe result:\n");
      matrix_sum(A, B, SUM, size);
      matrix_display(SUM, size);

   
  return 0;
}

void matrix_read(int x[10][10], int s){
  int i, j;
  for(i = 0; i < s; i++){
    for(j = 0; j < s; j++){
        printf("Enter value for [%d][%d]:", i, j);
         scanf("%d", &x[i][j]);
     
    }
  }
}

void matrix_display(int x[10][10], int s){
  int i, j;
  for(i = 0; i < s; i++){

    for(j = 0; j < s; j++){
      printf("%d ", x[i][j]);
    }
        printf("\n");
  }
}

 
void matrix_multiply(int a[10][10], int b[10][10], int m[10][10], int s){
 int i, j, k;
 for(i = 0; i < s; i++){
   for(j = 0; j < s; j++){
     m[i][j] = 0;
     for(k = 0; k < s; k++){
       m[i][j] += a[i][k] * b[k][j];
     }
   }
  }
}

 

 
void matrix_sum(int a[10][10], int b[10][10], int c[10][10], int s){
 int    M[10][10],d[10][10];
 int i,j;
 matrix_multiply(b,b,M,s);
 for(i = 0; i < s; i++){
   for(j = 0; j < s ; j++){
       if (i == j){
                d[i][j] = 1;//this will print identity matrix of vakue 1
                }
            else{
               d[i][j] = 0;}
               
               
     c[i][j] = a[i][j] + d[i][j]+M[i][j];
   }
 }
}
