#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float media = 0;

    do {
        printf("digite a sua m�dia: ");
        scanf("%f", &media);
    } while(media < 0 || media > 10);

    if (media >= 7)
    {
        printf("voc� est� aprovado.");
    }
    else if (media >= 5)
    {
        printf("voc� est� em recupera��o.");
    }
    else
    {
        printf("voc� est� reprovado.");
    }
    
    return 0;
}
