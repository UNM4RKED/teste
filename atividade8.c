#include <stdio.h>
#include <stdlib.h>

int main () {
    int matriz [3][3];
    int i,j;

    printf("Digite os Elementos da matriz 3x3\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d", &matriz[i][j]);

        }

    }
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(matriz[i][j] % 2 == 0 ){
                matriz[i][j] = 1;
            } else{
                matriz[i][j] = -1;
            }
        }
    }

    printf("Matriz Atualizada : \n ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", matriz[i][j]);
        }
        printf(" \n ");
    }


    return 0;
}
