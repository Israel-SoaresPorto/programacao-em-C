#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int pares[6], count = 0, numero, i;

    while(count < 6) 
    {
        printf("digite um n�mero par: ");
        scanf("%d", &numero);

        if(numero % 2 == 0) {
            pares[count] = numero;
            count++;
        } else {
            printf("o n�mero n�o � par \n");
        }
    }

    printf("\nmostrando os n�meros em ordem inversa\n");
    for(i = count - 1; i >= 0; i--)
    {
        printf("%d\n", pares[i]);
    }

    return 0;
}
