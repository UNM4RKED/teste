#include <stdio.h>
#include <stdlib.h>

int main (){

    int ids[]= {1,2,3,4,5,6,7,8,9,10};
    int IdsInserido;
    int num_filias = 10;
    int encontrado = 0;
    int i;

    printf("Insira um Id:");
    scanf("%d", &IdsInserido);

    for (i = 0; i <num_filias;i++){
        if(IdsInserido == ids[i]){
            printf("O ID Inserido %d Pertencial a Uma Filial da Lista, a Filial %d", IdsInserido,ids[i]);
            encontrado = 1;
            break;


        }

        }
        if (!encontrado){
            printf("O ID Inserido %d Nao Pertence a uma filial da lista", IdsInserido);

    }
    return 0;
}
