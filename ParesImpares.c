#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero, pares = 0, impares = 0;
    int somaDePares; 
    int mediaDosPares;

    do {
        printf("digite um n�mero: ");
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

    printf("quantidade de n�meros pares: %d\n", pares);
    printf("quantidade de n�meros impares: %d\n", impares);
    printf("m�dia dos pares: %.2f", mediaDosPares);
   
    return 0;
}
