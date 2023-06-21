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
        printf("Valor unitário: R$1,59\n\n");
        break;
    case 101:
        printf("Produto: Esponja\n");
        printf("Valor unitário: R$4,59\n\n");
        break;
    case 102:
        printf("Produto: Lã de aço\n");
        printf("Valor unitário: R$1,79\n\n");
        break;
    default:
        printf("Produto não Indentificado.\n\n");
        break;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao, codigo;

    do
    {
        printf("selecione uma opção\n");
        printf("1 - mostrar valor do produto\n");
        printf("0 - sair do programa\n");
        printf("> ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("digite o código do produto: ");
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
