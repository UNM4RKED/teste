#include <stdio.h>
#include <stdlib.h>


int main (){

    float notas [15];
    int i;

    printf("Digite as Notas dos Estudantes\n");
    for(i=0; i < 15 ;i++){
        printf("Nota do Estudante %d:", i);
        scanf("%f", &notas[i]);


    }
    float media = 0;
    for (i= 0; i<15; i++)
         media = media + notas [i];
    media = media / 15;

    if (media > 8){
        media = 10;
        printf("Media Perfeita da Turma: %.2f\n",media);
    } else {
        printf("media Imperfeita da Turma: %.2f\n", media);
    }
}
