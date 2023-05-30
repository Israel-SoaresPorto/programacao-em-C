#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float media = 0;

    do {
        printf("digite a sua média: ");
        scanf("%f", &media);
    } while(media < 0 || media > 10);

    if (media >= 7)
    {
        printf("você está aprovado.");
    }
    else if (media >= 5)
    {
        printf("você está em recuperação.");
    }
    else
    {
        printf("você está reprovado.");
    }
    
    return 0;
}
