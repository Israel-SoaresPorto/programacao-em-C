#include <stdio.h>
#include <locale.h>

void calcularIMC(float altura, float peso)
{
	float IMC;
	IMC = peso / (altura * altura);
	
	printf("o seu IMC é de %.2f", IMC);
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float peso, altura;
	
	printf("digite a sua altura: ");
	scanf("%f", &altura);
	
	printf("digite o seu peso: ");
	scanf("%f", &peso);
	
	calcularIMC(altura, peso);
	
	return 0;
}
