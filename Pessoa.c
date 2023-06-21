#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    char nomes[5][20];
    int idades[5], i;

    for (i = 0; i < 5; i++)
    {
        printf("%dª pessoa \n", i + 1);

        printf("nome: ");
        gets(nomes[i]);
        
        fflush(stdin);

        printf("idade: ");
        scanf("%d", &idades[i]);

        fflush(stdin);

        printf("\n");
    }

    for (i = 0; i < 5; i++)
    {
        printf("%dª pessoa \n", i + 1);
        printf("nome: %s \n", nomes[i]);
        printf("idade: %d \n", idades[i]);
        printf("\n");
    }

    
    
    return 0;
}
