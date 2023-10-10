#include <Stdio.h>

int main (){
    char nome[7][10];
    int i;

    printf("Digite Os Nomes \n");
        for (i=0;i<7;i++){
            printf("Nome %d: ", i+1);
            scanf("%s", nome[i]);
        }
    printf("Ordem Dos Nomes (Do Ultimo Para Primeiro): \n");
    for(i=7-1;i>=0;i--){
        printf("%s\n", nome[i]);
    }
    return 0;
}
