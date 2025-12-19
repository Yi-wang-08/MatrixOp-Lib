#include <stdio.h>
#include "MartixOP.h"

int main(){
    int A[SIZE][SIZE]={{1,2,3},{2,1,3},{3,1,2}};
    int B[SIZE][SIZE]={{4,5,6},{6,5,4},{3,4,5}};
    int C[SIZE][SIZE];

    add(A,B,C);
    sub(A,B,C);
    mulelm(A,B,C);
    mul(A,B,C);
    transpose(A,C);
    det(A);
    adjoint(A,C);
    inverse(A,C);
    print(C);
}