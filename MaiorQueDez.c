#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    // VARI�VEIS
    int numero;

    // ENTRADA DE DADOS DO PROGRAMA
    printf("digite um n�mero: ");
    scanf("%d", &numero);

    // VERIFICA SE O N�MERO � MAIOR, MENOR OU IGUAL A 10
    if(numero > 10) {
        printf("MAIOR QUE 10");
    } else if (numero == 10) {
        printf("O N�MERO E IGUAL A 10");
    } else {
        printf("N�O E MAIOR QUE 10");
    }

    return 0;
}