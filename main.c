#include <stdio.h>
#include <stdlib.h>

int main (){
    int cidade[3][3];
    int i,j,indice,somaidades=0;

    printf(" Digite as Idade das Cidade \n ");
    for(i=0;i<3;i++){
        printf(" Para o Estado %d\n ",i+1);
        for(j=0;j<3;j++){
            printf(" A idade da Cidade %d: ", j+1);
            scanf("%d", &cidade[i][j]);
        }

    }
    printf("Escolha um Indice da Linha 0-1-2: \n");
    scanf("%d", &indice);

    for(j=0;j<3;j++){
        somaidades += cidade[indice][j];
    }
    float media_idade = somaidades/3;

    printf("A media das Cidades Escolhida para o estado %d e: %.2f anos",indice +1, media_idade);

    return 0;
}
