#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idade;

    printf("informe a sua idade: ");
    scanf("%d", &idade);

    if (idade < 18 || idade > 65) {
        printf("voce n�o e obrigado a votar");
    } else {
        printf("voce � obrigado a votar");
    }
    
    return 0;
}
