#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media = 0;

    do {
        printf("digite a sua media: ");
        scanf("%f", &media);
    } while(media < 0 || media > 10);

    if (media >= 7)
    {
        printf("voce esta aprovado.");
    }
    else if (media >= 5)
    {
        printf("voce esta em recuperacao.");
    }
    else
    {
        printf("vocer esta reprovado.");
    }
    
    return 0;
}
