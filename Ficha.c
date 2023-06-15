#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Ficha
{
    char nome[100];
    int idade;
    float peso;
    float altura;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct Ficha pessoa;

    printf("digite o seu nome: ");
    gets(pessoa.nome);

    printf("digite a sua idade: ");
    scanf("%d", &pessoa.idade);

    printf("digite o seu peso: ");
    scanf("%f", &pessoa.peso);

    printf("digite a sua altura: ");
    scanf("%f", &pessoa.altura);

    system("cls");

    printf("nome: %s\n", pessoa.nome);
    printf("idade: %d\n", pessoa.idade);
    printf("peso: %.2f\n", pessoa.peso);
    printf("altura: %.2f\n", pessoa.altura);
    
    return 0;
}
