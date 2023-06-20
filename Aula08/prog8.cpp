#include<stdio.h>
#include<stdlib.h>
/*
Escreva um programa que leia o pedido de 5 pessoas
no restaurante.

A) Calcular o total a pagar.

 Cardapio:
	1- Bife com batata frita -> 19.00
	2- Bife com purê -> 22.00
	3- Arroz com ovo -> 10.00
	4- Frango grelhado com legumes -> 16:00

C) Imprimir o total a pagar.
*/
int const N = 5;
int itens[N];

void entrada(){
	
	for(int i = 0; i < N; i++){
		printf("Menu: \n");
		printf("1- Bife com batata frita -> 19.00 \n");
		printf("2- Bife com pure de batata -> 22.00\n");
		printf("3- Arroz com ovo -> 10.00\n");
		printf("4- Frango grelhado com legumes -> 16.00\n");
		scanf("%d",&itens[i]);
		system("cls");
	}
}
float calcularTotal(){
	float preco=0;
	for(int i = 0; i < N; i++){
		switch(itens[i]){
			case 1:
				preco = preco + 19.00;
				break;
			case 2:
				preco = preco + 22.00;
				break;
			case 3:
				preco = preco + 10.00;
				break;
			case 4:
				preco = preco + 16.00;
				break;
		}
	}
	return preco;
}

void saida(){
	printf("O total a pagar eh: %0.2f \n",calcularTotal());	
}

int main(){
	entrada();
	saida();
	return 0;
}

