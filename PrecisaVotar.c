#include <stdio.h>

int main()
{
    int idade;

    printf("informe a sua idade: ");
    scanf("%d", &idade);

    if (idade < 18 || idade > 65) {
        printf("voce nao e obrigado a votar");
    } else {
        printf("voce e obrigado a votar");
    }
    
    return 0;
}
