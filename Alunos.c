#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Aluno {
    char nome[100];
    int matricula;
    float notas[3];
} Alunos;

float maiorNotaPrimeiraProva(Alunos a[]) 
{
    int i;
    float maior = 0;

    for (i = 0; i < 5; i++)
    {
        if (a[i].notas[0] > maior)
        {
            maior = a[i].notas[0];
        }
    }

    return maior;
    
}

float maiorMedia(float medias[]) 
{
    int i;
    float maior = 0;

    for (i = 0; i < 5; i++)
    {
        if (medias[i] > maior)
        {
            maior = medias[i];
        }
    }

    return maior;
}

float menorMedia(float medias[])
{
    int i;
    float menor = INT_MAX;

    for (i = 0; i < 5; i++)
    {
        if (medias[i] < menor)
        {
            menor = medias[i];
        }
    }

    return menor;
}

void exibirSituacaoDoAluno(float medias[], Alunos a[])
{
    int i;

    for (i = 0; i < 5; i++)
    {
        if (medias[i] > 6) {
           printf("situaçao do aluno(a) %s: aprovado \n", a[i].nome);
        } else {
           printf("situaçao do aluno(a) %s: reprovado \n", a[i].nome);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float somaDasNotas, mediasDosAlunos[5];
    int i, j;
    struct Aluno alunos[5];

    for (i = 0; i < 5; i++)
    {
        printf("ALUNO N° %d\n", i + 1);
        printf("digite o nome do aluno: ");
        gets(alunos[i].nome);

        printf("número de matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);

        for (j = 0; j < 3; j++)
        {
            printf("%d nota: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);

            somaDasNotas += alunos[i].notas[j];
        }

        mediasDosAlunos[i] = somaDasNotas / 3;
        somaDasNotas = 0;

        fflush(stdin);
    }

    system("cls || clear");

    printf("maior nota da primeira prova: %.1f \n", maiorNotaPrimeiraProva(alunos));
    printf("maior média entre os alunos: %.1f \n", maiorMedia(mediasDosAlunos));
    printf("menor média entre os alunos: %.1f \n", menorMedia(mediasDosAlunos));
    exibirSituacaoDoAluno(mediasDosAlunos, alunos);
    
    return 0;
}
