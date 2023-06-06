#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i, j, peso[3], somaDosPesos;
    float notas[3][3], somaDasNotas, medias[3];
    char disciplina[3][250];

    peso[0] = 3;
    peso[1] = 3;
    peso[2] = 4;

    for(i = 0; i < 3; i++)
    {
        printf("digite o nome da disciplina: ");
        gets(disciplina[i]);

        for (j = 0; j < 3; j++)
        {
            printf("%d nota: ", j + 1);
            scanf("%f", &notas[i][j]);

            somaDasNotas += notas[i][j] * peso[j];
            somaDosPesos += peso[j];

            fflush(stdin);
        }

        medias[i] = somaDasNotas / somaDosPesos;
        somaDasNotas = 0;
        somaDosPesos = 0;

        fflush(stdin);

        printf("\n");
    }

    printf("\n");

    for(i = 0; i < 3; i++)
    {
        printf("notas da disciplina: %s \n", disciplina[i]);

        for (j = 0; j < 3; j++)
        {
            printf("-%d nota: %.2f \n", j + 1, notas[i][j]);
        }

        printf("-média: %.2f \n", medias[i]);
    }

    return 0;
}

