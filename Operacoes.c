#include <stdio.h>

int main()
{
    // variáveis
    int numero1, numero2, soma, produto;
    float media;

    //entrada de dados
    printf("digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("digite o segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    produto = numero1 * numero2;
    media = soma / 2;

    //saida de dados
    printf("soma: %d \n", soma);
    printf("produto: %d \n", produto);
    printf("media: %.2f \n", media);

    if(numero1 > numero2) {
        printf("maior valor: %d \n", numero1);
        printf("menor valor: %d \n", numero2);
    } else if(numero2 < numero1) {
        printf("maior valor: %d \n", numero2);
        printf("menor valor: %d \n", numero1);
    } else {
        printf("os dois numeros sao iguais");
    }

    return 0;
}