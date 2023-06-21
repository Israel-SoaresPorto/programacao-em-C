#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Aluno
{
    char nome[100];
    int matricula;
    int cogidoDaDisciplina;
    float notas[2];
} Alunos;

float calcularMedia(Alunos a)
{
    float somasDasNotas;

    somasDasNotas = a.notas[0] + a.notas[1];

    return somasDasNotas / 2;
}

void exibirInformacoes(Alunos a[])
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("ALUNO N° %d \n", i + 1);
        printf("nome: %s \n", a[i].nome);
        printf("número de matricula: %d \n", a[i].matricula);
        printf("codígo da discliplina: %d \n", a[i].cogidoDaDisciplina);
        printf("1ª nota: %.1f \n", a[i].notas[0]);
        printf("2ª nota: %.1f \n", a[i].notas[1]);
        printf("média: %.1f \n\n", calcularMedia(a[i]));
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j;
    struct Aluno alunos[10];

    for (i = 0; i < 10; i++)
    {
        printf("ALUNO N° %d\n", i + 1);
        printf("digite o nome do aluno: ");
        gets(alunos[i].nome);

        printf("número de matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);

        printf("codigo da disciplina do aluno: ");
        scanf("%d", &alunos[i].cogidoDaDisciplina);

        for (j = 0; j < 2; j++)
        {
            printf("%d nota: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }

        fflush(stdin);
    }

    system("cls || clear");

    exibirInformacoes(alunos);

    return 0;
}