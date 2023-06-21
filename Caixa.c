#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void exibirProduto(int codigo)
{
    switch (codigo)
    {
    case 100:
        printf("Produto: Detergente\n");
        printf("Valor unit�rio: R$1,59\n\n");
        break;
    case 101:
        printf("Produto: Esponja\n");
        printf("Valor unit�rio: R$4,59\n\n");
        break;
    case 102:
        printf("Produto: L� de a�o\n");
        printf("Valor unit�rio: R$1,79\n\n");
        break;
    default:
        printf("Produto n�o Indentificado.\n\n");
        break;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao, codigo;

    do
    {
        printf("selecione uma op��o\n");
        printf("1 - mostrar valor do produto\n");
        printf("0 - sair do programa\n");
        printf("> ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("digite o c�digo do produto: ");
            scanf("%d", &codigo);

            exibirProduto(codigo);
            break;
        case 0:
            printf("saindo do programa...");
            break;
        default:
            printf("comando invalido");
            break;
        }

        sleep(7);
        system("cls || clear");
    } while (opcao != 0);
    
    return 0;
}
