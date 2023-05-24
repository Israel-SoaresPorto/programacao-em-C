#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int numero, pares = 0, impares = 0;
    int somaDePares; 
    float mediaDosPares;

    do {
        printf("digite um número: ");
        scanf("%d", &numero);

        fflush(stdin);

        if(numero % 2 == 0) {
            pares++;
            somaDePares += numero;
        } else {
            impares++;
        }
    } while(numero > 0);

    mediaDosPares = somaDePares / pares;

    printf("quantidade de números pares: %d\n", pares);
    printf("quantidade de números impares: %d\n", impares);
    printf("média dos pares: %.2f", mediaDosPares);
   
    return 0;
}
