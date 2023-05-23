#include <stdio.h>

int main() 
{
    // VARIÁVEIS
    int numero;

    // ENTRADA DE DADOS DO PROGRAMA
    printf("digite um numero: ");
    scanf("%d", &numero);

    // VERIFICA SE O NÚMERO É MAIOR, MENOR OU IGUAL A 10
    if(numero > 10) {
        printf("MAIOR QUE 10");
    } else if (numero == 10) {
        printf("O NUMERO E IGUAL A 10");
    } else {
        printf("NAO E MAIOR QUE 10");
    }

    return 0;
}