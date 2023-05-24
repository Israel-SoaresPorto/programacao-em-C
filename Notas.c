#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char resposta[3];
    float nota, somaDasNotas, media;
    int contador = 0;

    do {

        printf("digite uma nota: ");
        scanf("%f", &nota);

        fflush(stdin);

        somaDasNotas += nota;
        contador++;

        printf("deseja inserir outra nota(sim/nao)? \n");
        scanf("%s", resposta);

    } while(strcmp(resposta, "sim") == 0); 

    media = somaDasNotas / contador;

    printf("media: %.1f", media);

    return 0;
}
