
#ifndef MARTIXOP_H
#define MARTIXOP_H
#define SIZE 3
void add(int A[SIZE][SIZE],int B[SIZE][SIZE],int C[SIZE][SIZE]);
void sub(int A[SIZE][SIZE],int B[SIZE][SIZE],int C[SIZE][SIZE]);
void mulelm(int A[SIZE][SIZE],int B[SIZE][SIZE],int C[SIZE][SIZE]);
void mul(int A[SIZE][SIZE],int B[SIZE][SIZE],int C[SIZE][SIZE]);
void transpose(int A[SIZE][SIZE],int C[SIZE][SIZE]);
int det(int A[SIZE][SIZE]); 
void adjoint(int A[SIZE][SIZE],int C[SIZE][SIZE]);
int inverse(int A[SIZE][SIZE],double C[SIZE][SIZE]);
void print(int A[SIZE][SIZE]);

#endif
