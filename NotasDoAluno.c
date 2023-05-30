#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i;
    float notas[4], somaDasNotas, media;

    for (i = 0; i < 4; i++)
    {
        printf("digite a %dª nota: ", i + 1);
        scanf("%f", &notas[i]);

        fflush(stdin);

        somaDasNotas += notas[i];
    }

    media = somaDasNotas / i;

    for (i = 0; i < 4; i++)
    {
        printf("%dª nota: %.2f \n", i + 1, notas[i]);
    }

    printf("média: %.2f \n", media);

    if(media >= 7) {
        printf("aluno está aprovado.");
    } else if(media >= 5) {
        printf("aluno está em recuperação");
    } else {
        printf("aluno está reprovado");
    }   
    
    return 0;
}
