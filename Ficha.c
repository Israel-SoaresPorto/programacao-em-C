#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Ficha
{
    char nome[100];
    int idade;
    float peso;
    float altura;
    char endereco[100];
} Pessoa;

void exibirInformacoes(Pessoa p[]) 
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("ficha da pessoa n° %d \n", i + 1);
        printf("nome: %s\n", p[i].nome);
        printf("idade: %d\n", p[i].idade);
        printf("peso: %.2f\n", p[i].peso);
        printf("altura: %.2f\n", p[i].altura);
        printf("endereço: %s \n\n",p[i].endereco);
    }
    
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct Ficha pessoas[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("pessoa n° %d \n", i + 1);

        printf("digite o seu nome: ");
        gets(pessoas[i].nome);

        printf("digite a sua idade: ");
        scanf("%d", &pessoas[i].idade);

        printf("digite o seu peso: ");
        scanf("%f", &pessoas[i].peso);

        printf("digite a sua altura: ");
        scanf("%f", &pessoas[i].altura);

        fflush(stdin);

        printf("digite o seu endereço: ");
        gets(pessoas[i].endereco);

        fflush(stdin);
    }

    system("cls || clear");

    exibirInformacoes(pessoas);

    return 0;
}
