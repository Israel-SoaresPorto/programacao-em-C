#include <stdio.h>
#include <locale.h>

float inflacionar(float preco)
{
	float novoPreco;
	
	if(preco >= 100) {
		novoPreco =  preco + (preco * 0.20);
	} else {
		novoPreco = preco + (preco * 0.10);
	}
	
	return novoPreco;
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float precoDoProduto, precoInflacionado;
	
	printf("digite o preço do produto: ");
	scanf("%f", &precoDoProduto);
	
	precoInflacionado = inflacionar(precoDoProduto);
	
	printf("preço do produto inflacionado: %.2f", precoInflacionado);
	
	return 0;
}
