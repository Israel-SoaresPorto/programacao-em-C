#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i, numeros[3];

    for (i = 0; i < 3; i++)
    {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    for (i = 0; i < 3; i++)
    {
        printf("%d� n�mero: %d \n", i + 1, numeros[i]);
    }
    
    return 0;
}
