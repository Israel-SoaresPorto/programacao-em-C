#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, numeros[10], negativos, somaPositivos;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);

        if(numeros[i] >= 0) {
            somaPositivos += numeros[i];
        } else {
            negativos++;
        }
    }
    
    printf("quantidade de números negativos: %d \n", negativos);
    printf("soma de todos os números positivos: %d \n", somaPositivos);
    
    return 0;
}
