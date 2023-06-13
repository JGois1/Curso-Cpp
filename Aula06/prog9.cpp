#include<stdio.h>
/*
Escreva um programa que leia o preço 
e a quantidade de um produto

A) Calcular o total a pagar.

B) Imprimir o total encontrado.

*/

int preco;
int quant;

void entrada(){
	printf("Digite o preco do produto: ");
	scanf("%d",&preco);
		printf("Digite a quantidade do produto: ");
	scanf("%d",&quant);
}
int topay(){
	int total = preco * quant;
	return total;
}
void saida(){
	printf("\nO total a ser pago eh: %d \n", topay());
}

int main(){

	entrada();
	saida();

	return 0;
}
