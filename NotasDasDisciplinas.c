#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void exibirDisciplina(char disciplina[])
{
    printf("disciplina %s \n", disciplina);
}

void mediaDasDisciplinas(char disciplina[][250], float media[])
{
    int i;

    for (i = 0; i < 3; i++)
    {
        exibirDisciplina(disciplina[i]);
        printf("média: %.1f \n", media[i]);
    }
}

void mostrarSituacao(char disciplina[][250], float media[])
{
    int i;

    for (i = 0; i < 3; i++)
    {
        exibirDisciplina(disciplina[i]);

        if (media[i] >= 7) {
            printf("situação: aprovado \n");
        } else if (media[i] >= 5) {
            printf("situação: em recuperação \n");
        } else {
            printf("situação: reprovado \n");
        }
    }
}

void exibirInformacoes(char disciplinas[][250], float notas[][2], float medias[])
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        exibirDisciplina(disciplinas[i]);

        for (j = 0; j < 2; j++)
        {
            printf("-%d° nota: %.1f \n", i + 1, notas[i][j]);
        }

        printf("média: %.1f \n", medias[i]);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, opcao;
    float notas[3][2], somaDasNotas, medias[3];
    char disciplina[3][250];

    for (i = 0; i < 3; i++)
    {
        printf("digite o nome da disciplina: ");
        gets(disciplina[i]);

        for (j = 0; j < 2; j++)
        {
            printf("%d nota: ", j + 1);
            scanf("%f", &notas[i][j]);

            somaDasNotas += notas[i][j];

            fflush(stdin);
        }

        medias[i] = somaDasNotas / 2;
        somaDasNotas = 0;

        fflush(stdin);

        printf("\n");
    }

    system("cls || clear");

    do {
        printf("digite uma opção: \n");
        printf("1 - Mostrar média das disciplinas \n");
        printf("2 - Situação das discliplinas \n");
        printf("3 - Exibir todas as informações \n");
        printf("0 - sair do programa \n");
        printf("> ");
        scanf("%d", &opcao);

        printf("\n");

        switch (opcao) {
        case 1:
            mediaDasDisciplinas(disciplina, medias);

            printf("\n");
            break;
        case 2:
            mostrarSituacao(disciplina, medias);

            printf("\n");
            break;
        case 3:
            exibirInformacoes(disciplina, notas, medias);

            printf("\n");
            break;
        case 0:
            printf("saindo do programa... \n");
            break;    
        default:
            printf("opcao invalida \n\n");
            break;
        }

        sleep(3);
        system("cls || clear");
    } while (opcao != 0);

    return 0;
}
