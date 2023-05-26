#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero, pares = 0, impares = 0;
    int somaDePares; 
    int mediaDosPares;

    do {

        printf("digite um número: ");
        scanf("%d", &numero);

        fflush(stdin);

        if (numero > 0) {
            if(numero % 2 == 0) {
                pares++;
                somaDePares += numero;
            } else {
                impares++;
            }
        }

    } while(numero > 0);

    mediaDosPares = somaDePares / pares;

    printf("quantidade de números pares: %d\n", pares);
    printf("quantidade de números impares: %d\n", impares);
    printf("média dos pares: %d", mediaDosPares);
   
    return 0;
}
