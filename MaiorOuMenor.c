#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int numeros[5];
    int maior = 0;
    int menor = __INT_MAX__;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);

        fflush(stdin);

        if(numeros[i] > maior) 
        {
            maior = numeros[i];
        }

        if(numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    printf("números: |");
    for (i = 0; i < 5; i++)
    {
        printf(" %d |", numeros[i]);
    }
    
    printf("\n");

    printf("maior valor: %d \n", maior);
    printf("menor: %d \n", menor);

    return 0;
}
