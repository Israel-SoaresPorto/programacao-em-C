#include <stdio.h>
#include <locale.h>

void mostrarTabuada(int numero)
{
	int i, produto;
	
	printf("tabuada do número %d \n\n", numero);
	
	for(i = 1; i <= 10; i++)
	{
		produto = i * numero;
		printf("%d x %d = %d \n", numero, i, produto);
	}
}

int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	printf("digite um número para mostrar a sua tabuada: ");
	scanf("%d", &numero);
	
	printf("\n");
	
	mostrarTabuada(numero);
	
	return 0;
}
