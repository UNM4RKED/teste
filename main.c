#include <stdio.h>
#include <stdlib.h>

int main(){
  float notas[10]={10.0,8.0,7.0,6.0,3,0,3.0,9.0,3.9,2,5,5.0};

   int num_alunos = 10;
   float soma_notas = 0.0;
   int num_alunos_aprovados = 0;

    for (int i = 0; i < num_alunos; i++) {
        if (notas[i] > 4) {
            soma_notas += notas[i];
            num_alunos_aprovados++;
        }
    }

    float media_funcional = 0.0;
    if (num_alunos_aprovados > 0) {
        media_funcional = soma_notas / num_alunos_aprovados;
    }
    printf("A média funcional é: %.2f\n", media_funcional);

    return 0;
}


