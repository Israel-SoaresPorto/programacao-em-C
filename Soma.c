#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma, i;

    for (i = 1; i <= 5; i++)
    {
        printf("digite um numero: ");
        scanf("%d", &numero);

        fflush(stdin);

        soma += numero;
    }

    printf("soma dos numeros: %d\n", soma);
   
    return 0;
}
