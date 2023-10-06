#include <stdio.h>
#include <stdlib.h>

int main (){

    float emp[10];
    int i;
    int filiais_prejuizo = 0;

    printf("Valores de Cada Filial \n");
    for (i = 0; i < 10; i++){
        printf("Filial %d:", i+1);
        scanf("%f", &emp[i]);
        if (emp[i]< 0){
            filiais_prejuizo++;
        }
    }

    printf("Filais que Estao Dando Prejuizo: %d\n", filiais_prejuizo);

    printf("Filiais com prejuizo:  ");
    for (i = 0; i < 10; i++) {
        if (emp[i] < 0) {
            printf("Filial %d ", i + 1);
        }
    }
   return 0;
}
