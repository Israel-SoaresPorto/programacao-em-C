#include <stdio.h>
#include <locale.h>

int calcularSoma(int n[])
{
    int soma, i;
    
    for (i = 0; i < 10; i++)
    {
        soma += n[i];
    }
    
    return soma;
}

void calcularMedia(int n[])
{
    int media;
    media = calcularSoma(n) / 10;
    printf("m�dia dos valores do vetor: %d", media);
}

int main()
{
    setlocale(LC_ALL, "");

    int numeros[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("digite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("soma dos valores do vetor: %d \n", calcularSoma(numeros));
    calcularMedia(numeros);

    return 0;
}
