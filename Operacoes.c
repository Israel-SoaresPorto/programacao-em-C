#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // vari�veis
    int numero1, numero2, soma, diferenca, produto, quiocente, operacao;

    // entrada de dados
    do {
        printf("digite o primeiro n�mero: ");
        scanf("%d", &numero1);

        printf("digite o segundo n�mero: ");
        scanf("%d", &numero2);

        printf("opera��o correspondente \n");
        printf("1 - adi��o \n");
        printf("2 - subtra��o \n");
        printf("3 - mu�ltiplica��o \n");
        printf("4 - divis�o \n");
        printf("0 - sair do programa \n");
        printf("> ");
        scanf("%d", &operacao);

        switch (operacao) {
        case 1:
            soma = numero1 + numero2;
            printf("%d + %d = %d \n", numero1, numero2, soma);
            break;
        case 2:
            diferenca = numero1 - numero2;
            printf("%d - %d = %d \n", numero1, numero2, diferenca);
            break;
        case 3:
            produto = numero1 * numero2;
            printf("%d * %d = %d \n", numero1, numero2, produto);
            break;
        case 4:
            quiocente = numero1 / numero2;
            printf("%d / %d = %d \n", numero1, numero2, quiocente);
            break;
        case 0:
            printf("saindo...");
            break;
        default:
            printf("valor inv�lido");
            break;
        }

        sleep(3);
        system("cls || clear");
    } while (operacao != 0);

    return 0;
}