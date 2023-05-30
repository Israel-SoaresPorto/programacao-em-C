#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    // VARIÁVEIS
    int numero;

    // ENTRADA DE DADOS DO PROGRAMA
    printf("digite um número: ");
    scanf("%d", &numero);

    // VERIFICA SE O NÚMERO É MAIOR, MENOR OU IGUAL A 10
    if(numero > 10) {
        printf("MAIOR QUE 10");
    } else if (numero == 10) {
        printf("O NÚMERO E IGUAL A 10");
    } else {
        printf("NÃO E MAIOR QUE 10");
    }

    return 0;
}