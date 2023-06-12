#include <stdio.h>
#include <locale.h>

void media(float somaDasNotas)
{
    float media = somaDasNotas / 4;

    printf("média: %.2f \n", media);

    if(media >= 7) {
        printf("aluno está aprovado.");
    } else if(media >= 5) {
        printf("aluno está em recuperação");
    } else {
        printf("aluno está reprovado");
    }

}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    float notas[4], somaDasNotas;

    for (i = 0; i < 4; i++)
    {
        printf("digite a %dª nota: ", i + 1);
        scanf("%f", &notas[i]);

        fflush(stdin);

        somaDasNotas += notas[i];
    }

    media(somaDasNotas);

    return 0;
}
