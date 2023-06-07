#include <stdio.h>
#include <locale.h>

void conversao(float m)
{
	float centimetros = m * 100;
	
	printf("o valos em centimetro é de: %.2f", centimetros);
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float metros;
	
	printf("digite um valor em metros para ser convertido em centrimetros: ");
	scanf("%f", &metros);
	
	conversao(metros);
	
	return 0;
}
