#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int pares[6], count = 0, numero, i;

    while(count < 6) 
    {
        printf("digite um número par: ");
        scanf("%d", &numero);

        if(numero % 2 == 0) {
            pares[count] = numero;
            count++;
        } else {
            printf("o número não é par \n");
        }
    }

    printf("\nmostrando os números em ordem inversa\n");
    for(i = count - 1; i >= 0; i--)
    {
        printf("%d\n", pares[i]);
    }

    return 0;
}
