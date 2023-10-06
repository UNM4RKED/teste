#include <stdio.h>
#include <stdlib.h>

int main (){
    float altura [6];
    int i;

    printf("Digite a Altura dos 6 Amigos\n");
    for (i=0; i< 6; i++){
        printf("Amigo %d: ", i+1);
        scanf("%f",&altura[i]);
    }

    float maior_altura, menor_altura = altura[0];
    int  posmaior , posmenor = 0;

    for (i=0; i<6; i++){
        if(altura[i] > maior_altura){
            maior_altura = altura[i];
            posmaior = i;
        }
        if (altura[i] < menor_altura){
            menor_altura = altura[i];
            posmenor = i;
        }
    }

    printf("Maior Altura : %.2f (amigo %d)\n ", maior_altura,posmaior +1);

    printf("Menor Altura: %.2f (amigo %d)\n", menor_altura, posmenor +1);


    printf("\nAlturas em ordem crescente:\n");
    for (i = 0; i < 6; i++) {
        int j;
        for (j = i + 1; j < 6; j++) {
            if (altura[i] > altura[j]) {
                float temp = altura[i];
                altura[i] = altura[j];
                altura[j] = temp;
            }
        }
        printf("%.2f ", altura[i]);
    }







    return 0;
}
