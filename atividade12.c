#include <stdio.h>

int main (){
    int A[2][3]= {{1,2,3}, {4,5,6}};
    int B[2][3]= {{7,8,9}, {10,11 ,12 }};
    int C[2][3];
    int i,j;

    printf("Defina Matriz A:\n");
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%2d", A[i][j]);
        }
        printf("\n");
    }
    printf("Defina Matriz B:\n");
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%2d ", B[i][j]);
        }
        printf("\n");
    }
    printf("Somas das Matrizes (Matriz C: \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            C[i][j] = A[i][j] + B[i][j];
            printf("%2d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
