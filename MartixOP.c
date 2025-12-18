#include <stdio.h>
#include "MartixOP.h"

void add(int A[SIZE][SIZE],int B[SIZE][SIZE],int C[SIZE][SIZE]){
for(int i=0;i<SIZE;i++){
    for(int j=0;j<SIZE;j++){
        C[i][j]=A[i][j]+B[i][j];
    }
}
}

void print(int A[SIZE][SIZE]){
for(int i=0;i<SIZE;i++){
    for(int j=0;j<SIZE;j++){
        printf("%d",A[i][j]);
    }
    printf("\n");
}

}
