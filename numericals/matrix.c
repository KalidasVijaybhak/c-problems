/*
Program for matrix manipulation
Author : KALIDAS VB
Roll no. : 338
Date : 2/9/2021
Experiment : 15
*/
#include <stdio.h>
#include <stdlib.h>

void matrix_read(int [10][10], int);
void matrix_display(int [10][10], int);
void matrix_sum(int [10][10], int [10][10], int [10][10],int);
void matrix_multiply(int [10][10], int [10][10], int [10][10], int);
void matrix_transpose(int[10][10], int [10][10], int);

int main(){
  int size, choice;
  int A[10][10], B[10][10], SUM[10][10], M[10][10], T[10][10];

  printf("\nMENU\n1. Sum\n2. Product\n3. Transpose\n4. Exit");
  printf("\n\nEnter the option :\n");
  scanf("%d", &choice);

  switch(choice){
    case 1:{
      printf("\nEnter the size of matrix:");
      scanf("%d", &size);

      printf("\nEnter the first matrix:\n");
      matrix_read(A, size);
      printf("\nEnter the second matrix:\n");
     matrix_read(B, size);
      printf("\nThe First Matrix:\n");
      matrix_display(A, size);
      printf("\nThe second Matrix:\n");
      matrix_display(B, size);

      printf("\nThe sum of two matrices:\n");
      matrix_sum(A, B, SUM, size);
      matrix_display(SUM, size);

      break;
    }
    case 2:{
      printf("\nEnter the size of matrix:");
      scanf("%d", &size);

      printf("\nEnter the first matrix:\n");
      matrix_read(A, size);
      printf("\nEnter the second matrix:\n");
      matrix_read(B, size);
      printf("\nThe First Matrix:\n");
      matrix_display(A, size);
      printf("\nThe second Matrix:\n");
      matrix_display(B, size);

      printf("\nThe product of two matrices:\n");
      matrix_multiply(A, B, M, size);
      matrix_display(M, size);

      break;
    }
    case 3:{
      printf("\nEnter the size of matrix:");
      scanf("%d", &size);

      printf("\nEnter the matrix:\n");
      matrix_read(A, size);
      printf("\nThe given Matrix:\n");
      matrix_display(A, size);

      printf("\nThe transpose of the matrix:\n");
      matrix_transpose(A, T, size);
      matrix_display(T, size);

      break;
    }
    case 4:{
      exit(0);
    }
    default:{
      printf("Please check you input\n");
    }
  }
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

void matrix_sum(int a[10][10], int b[10][10], int c[10][10], int s){
 int i,j;
 for(i = 0; i < s; i++){
   for(j = 0; j < s ; j++){
     c[i][j] = a[i][j] + b[i][j];
   }
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

void matrix_transpose(int x[10][10], int t[10][10], int s){
  int i, j;
  for(i = 0; i < s; i++){
    for(j = 0; j < s; j++){
      t[i][j] = x[j][i];
    }
  }
}
