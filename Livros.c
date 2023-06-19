#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Livro {
    char nome[200];
    char autor[200];
    char categoria[200];
    float preco;
} Livros;

void exibirInformacoes(Livros l[])
{
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Livro n° %d \n", i + 1);
        printf("nome: %s \n", l[i].nome);
        printf("autor: %s \n", l[i].autor);
        printf("categoria: %s \n", l[i].categoria);
        printf("preço: R$%.2f \n\n", l[i].preco);
    }
    
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct Livro livros[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Livro n° %d \n", i + 1);

        printf("digite o nome do livro: ");
        gets(livros[i].nome);

        fflush(stdin);

        printf("nome do autor do livro: ");
        gets(livros[i].autor);

        fflush(stdin);

        printf("categoria do livro: ");
        gets(livros[i].categoria);

        printf("preço: ");
        scanf("%f", &livros[i].preco);

        fflush(stdin);
    }

    exibirInformacoes(livros);
    
    return 0;
}
