#include <stdio.h>

int main()
{
    //variaveis
    char nomeDoAluno[20];
    int idade, i;
    float nota, somaDasNotas, media;

    //entrada de dados do usuário
    printf("insira o seu nome: ");
    scanf("%s", nomeDoAluno);

    printf("sua idade: ");
    scanf("%d", &idade);

    for (i = 1; i <= 3; i++)
    {
        printf("digite a %d nota: ", i);
        scanf("%f", &nota);

        somaDasNotas += nota;
    }

    media = somaDasNotas / i;

    system("cls");

    // saida de dados do programa
    printf("nome do aluno: %s \n", nomeDoAluno);
    printf("idade: %d \n", idade);
    printf("media: %.1f \n", media);

    if(media > 7) {
        printf("aluno(a) esta aprovado");
    } else {
        printf("aluno(a) esta reprovado");
    }
    
    return 0;
}