#include<stdio.h>
/*
Escreva um programa que leia o preço
de 5 produtos.

A) Calcular o total a pagar.
B) Imprimir o total encontrado.

*/
int const N =5;
int precos[N];

void entrada(){
	for(int i = 0; i < N; i++){
		printf("Digite o preco : ");
		scanf("%d",&precos[i]);
	}	
}
int calcularPagar(){
	int preco;
	for(int i=0;i<5;i++){
		preco = preco + precos[i];
	}
	return preco;
}
void saida(){
	printf("O preco total a pagar sera de: %d \n",calcularPagar());
}

int main(){
	entrada();
	saida();
	return 0;
}
