#include<stdio.h>
/*
Escreva um programa que leia um vetor de 10 posições.

A) Calcular e imprimir a quanitidade de numeros 
pares e impares.
*/
int numeros[10];

void entrada(){
	for(int i = 0; i < 10; i++){
		printf("Digite um numero : ");
		scanf("%d",&numeros[i]);
	}
}

int calcularQtdPar(){
	int qtd = 0;
	for(int i = 0; i < 10; i++){
		if(numeros[i] % 2 == 0){
			qtd = qtd + 1;
		}
	}
	return qtd;
}
int calcularQtdImpar(){
	int qtd = 0;
	for(int i = 0; i < 10; i++){
		if(numeros[i] % 2 != 0){
			qtd = qtd + 1;
		}
	}
	return qtd;
}

void saida(){
	printf("\nQuantidade de numeros pares: %d \n",calcularQtdPar());
	printf("Quantidade de numeros impares: %d \n",calcularQtdImpar());
}

int main(){
	entrada();
	saida();
	return 0;
}
