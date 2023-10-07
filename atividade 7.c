#include <stdio.h>
#include <stdlib.h>

int main (){
    int numFil =8;
    float faturamentos[numFil];
    float soma = 0.0;
    int contlucro = 0;

    printf ("Digite os Faturamentos das Filiais \n");
    for (int i =0; i<numFil;i++){
        printf("Faturamento da Filial %d: ",i+1);
        scanf("%f", &faturamentos[i]);

        soma+=faturamentos[i];

        if (faturamentos[i]>0){
            contlucro++;
        }
    }

    printf("Soma dos faturamentos: %.2f\n",soma);
    printf("Numero das Filial com Lucro: %d\n",contlucro);

    return 0;
}
