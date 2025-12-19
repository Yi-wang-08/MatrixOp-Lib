#include <stdio.h>
#include "MartixOP.h"

void add(int A[SIZE][SIZE],int B[SIZE][SIZE],int C[SIZE][SIZE]){
for(int i=0;i<SIZE;i++){
    for(int j=0;j<SIZE;j++){
        C[i][j]=A[i][j]+B[i][j];
    }
}
}
void sub(int A[SIZE][SIZE],int B[SIZE][SIZE],int C[SIZE][SIZE]){ 
   for (int i = 0;i<SIZE;i++){ 
         for(int j=0;j<SIZE;j++){ 
            C[i][j] = A[i][j] - B[i][j]; 
        } 
    } 
}
//sub
void mulelm(int A[SIZE][SIZE],int B[SIZE][SIZE],int C[SIZE][SIZE]){ 
 for (int i = 0;i<SIZE;i++){ 
for(int j=0;j<SIZE;j++){ 
C[i][j] = A[i][j] * B[i][j]; 
 } 
 } 
}//mulelm
void mul(int A[SIZE][SIZE],int B[SIZE][SIZE],int C[SIZE][SIZE]){ 
 for (int i = 0;i<SIZE;i++){ 
for(int j=0;j<SIZE;j++){ 
int sum = 0;
for (int k = 0; k < SIZE; k++) { 
sum += A[i][k] * B[k][j]; 
 } 
 C[i][j] = sum; 
 } 
} 
}
void transpose(int A[SIZE][SIZE],int C[SIZE][SIZE]){ 
 for (int i = 0; i < SIZE; i++) { 
 for (int j = 0; j < SIZE; j++) { 
 C[j][i] = A[i][j]; 
 } 
 } 
} //transpose

int det(int A[SIZE][SIZE]){ 
int a = A[0][0], b = A[0][1], c = A[0][2]; 
int d = A[1][0], e = A[1][1], f = A[1][2]; 
int g = A[2][0], h = A[2][1], i = A[2][2]; 
 
int det = a * (e * i - f * h) 
- b * (d * i - f * g) 
 + c * (d * h - e * g); 
 
return det; 
}//det

void adjoint(int A[SIZE][SIZE],int C[SIZE][SIZE]){ 
int a = A[0][0], b = A[0][1], c = A[0][2]; 
int d = A[1][0], e = A[1][1], f = A[1][2]; 
int g = A[2][0], h = A[2][1], i = A[2][2]; 
 
int C00 = (e * i - f * h); 
int C01 = -(d * i - f * g); 
int C02 = (d * h - e * g); 
 
int C10 = -(b * i - c * h); 
int C11 = (a * i - c * g); 
int C12 = -(a * h - b * g); 
 
int C20 = (b * f - c * e); 
int C21 = -(a * f - c * d); 
int C22 = (a * e - b * d); 
 
C[0][0] = C00; C[0][1] = C10; C[0][2] = C20; 
 C[1][0] = C01; C[1][1] = C11; C[1][2] = C21; 
 C[2][0] = C02; C[2][1] = C12; C[2][2] = C22; 
} //adjointgit add .
git commit -m "adjoint "
git push


int inverse(int A[SIZE][SIZE],double C[SIZE][SIZE]){ 
int d = det(A); 
if (d == 0) { 
return 0; 
 } //inverse
 
 
int adj[SIZE][SIZE]; 
adjoint(A, adj);  
 
for (int i = 0; i < SIZE; i++) { 
for (int j = 0; j < SIZE; j++) { 
C[i][j] = (double)adj[i][j] / (double)d; 
 } 
 } 
 
return 1; 
} 





void print(int A[SIZE][SIZE]){
for(int i=0;i<SIZE;i++){
    for(int j=0;j<SIZE;j++){
        printf("%d",A[i][j]);
    }
    printf("\n");
}

}
