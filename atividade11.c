#include <stdio.h>
#include <stdlib.h>

int main (){
    int matriz[3][3];
    int i,j;

    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriz[i][j]= i + j ;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
