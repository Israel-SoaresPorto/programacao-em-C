#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    // variÃ¡veis
    int numero1, numero2, soma, produto;
    float media;

    //entrada de dados
    printf("digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("digite o segundo número: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    produto = numero1 * numero2;
    media = soma / 2;

    //saida de dados
    printf("soma: %d \n", soma);
    printf("produto: %d \n", produto);
    printf("média: %.2f \n", media);

    if(numero1 > numero2) {
        printf("maior valor: %d \n", numero1);
        printf("menor valor: %d \n", numero2);
    } else if(numero2 < numero1) {
        printf("maior valor: %d \n", numero2);
        printf("menor valor: %d \n", numero1);
    } else {
        printf("os dois numeros são iguais");
    }

    return 0;
}