#include <stdio.h>
#include <stdlib.h>

int main (){
    int mat[5][5];
    int i,j;
    int soma;

    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
            mat[i][j] =  i * 5 + j + 1;
            printf(" %2d ", mat[i][j]);


        }
        printf("\n");
    }
    printf("\ndiagonal: ");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i == j){
                printf(" %2d ", mat[i][j]);
            }
        }
    }
    printf("\n");

    for(i=0;i<5;i++){
            soma = 0;
        for(j=0;j<5;j++){
            soma += mat[i][j];
        }
        printf("Soma da Linha %d: %2d", i+1,soma);
        printf("\n");
    }

    return 0;
 }
