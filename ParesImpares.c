#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero, pares = 0, impares = 0;
    int somaDePares; 
    int mediaDosPares;

    do {
<<<<<<< HEAD
        printf("digite um n�mero: ");
=======

        printf("digite um número: ");
>>>>>>> 63980b1afe6fd827d1a2e9946ea3807f0696985c
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

<<<<<<< HEAD
    printf("quantidade de n�meros pares: %d\n", pares);
    printf("quantidade de n�meros impares: %d\n", impares);
    printf("m�dia dos pares: %.2f", mediaDosPares);
=======
    printf("quantidade de números pares: %d\n", pares);
    printf("quantidade de números impares: %d\n", impares);
    printf("média dos pares: %d", mediaDosPares);
>>>>>>> 63980b1afe6fd827d1a2e9946ea3807f0696985c
   
    return 0;
}
