#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float definirPreco(int codigo)
{
    float preco;

    switch (codigo) {
    case 100:
        preco = 1.70;
        break;
    case 101:
        preco = 2.30;
        break;
    case 102:
        preco = 2.60;
        break;
    case 103:
        preco = 2.40;
        break;
    case 104:
        preco = 2.50;
        break;
    case 105:
        preco = 1.00;
        break;
    }

    return preco;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float precoUnitario, precoTotal;
    int quantidade, codigo;

    do {
        printf("digite o codigo do lanche: ");
        scanf("%d", &codigo);

        if(codigo > 105) 
        {
            printf("ERRO, código incorreto\nDigite um código válido. \n\n");
        }
    } while (codigo > 105);

    printf("digite a quantidade pedida: ");
    scanf("%d", &quantidade);

    precoUnitario = definirPreco(codigo);
    precoTotal = precoUnitario * quantidade;

    printf("Valor a pagar: %.2f ", precoTotal);

    return 0;
}
