#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idade;

    printf("informe a sua idade: ");
    scanf("%d", &idade);

    if (idade < 18 || idade > 65) {
        printf("voce não e obrigado a votar");
    } else {
        printf("voce é obrigado a votar");
    }
    
    return 0;
}
