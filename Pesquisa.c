#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroDeFilhos, somaFilhos, mediaFilhos, familias = 0;
    float salario, somaSalarios, mediaSalarios;

    while(salario >= 0) 
    {
        printf("digite a quantidade de filhos que tem na sua familia: \n");
        scanf("%d", &numeroDeFilhos);

        fflush(stdin);

        printf("digite a renda salarial da sua familia: \n");
        scanf("%f", &salario);

        if(salario >= 0)
        {
            somaFilhos += numeroDeFilhos;
            somaSalarios += salario;
            familias++;
        }
    }

    mediaFilhos = somaFilhos / familias;
    mediaSalarios = somaSalarios / familias;

    printf("quantidade de familias que responderan a pesquisa: %d\n", familias);
    printf("media de filhos por familia: %d\n", mediaFilhos);
    printf("media salarial por familia: R$%.2f\n", mediaSalarios);

    return 0;
}
