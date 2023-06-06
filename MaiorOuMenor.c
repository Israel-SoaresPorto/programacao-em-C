#include <stdio.h>
#include <locale.h>

int maiorValor(int n[])
{
    int maior = 0, i;

    for (i = 0; i < 5; i++)
    {
        if(n[i] > maior)
        {
            maior = n[i];
        }
    }

    return maior;
}

int menorValor(int n[])
{
    int menor = __INT_MAX__, i;

    for (i = 0; i < 5; i++)
    {
        if(n[i] < menor)
        {
            menor = n[i];
        }
    }

    return menor;
}

int main()
{
    setlocale(LC_ALL, "");

    int numeros[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);

        fflush(stdin);

    }

    printf("números: |");
    for (i = 0; i < 5; i++)
    {
        printf(" %d |", numeros[i]);
    }
    
    printf("\n");

    printf("maior valor: %d \n", maiorValor(numeros));
    printf("menor: %d \n", menorValor(numeros));

    return 0;
}
