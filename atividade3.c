#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fil[20];
    int i;
    int num_lucros = 0;
    double total_lucros = 0;

    printf("Digite os Valores das Filiais:\n");
    for (i = 0; i < 20; i++)
    {
        printf("Filial Valor %d: ", i + 1);
        scanf("%lf", &fil[i]);

        if (fil[i] >= 0)
        {
            num_lucros++;
            total_lucros += fil[i];
        }
    }

    printf("Filiais Lucrativas: ");
    for (i = 0; i < 20; i++)
    {
        if (fil[i] >= 0)
        {
            printf("%d ", i + 1);
        }
    }

    printf("\n");

    double media_lucros = (num_lucros > 0) ? total_lucros / num_lucros : 0.0;

    printf("Média dos Lucros: %.2lf\n", media_lucros);

    return 0;
}


