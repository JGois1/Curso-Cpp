#include<stdio.h>
/*
Escreva um programa que efetue a entrada dos numeros 
digitados de forma recursiva.

A) A entrada devera ser interrompida quando 
for digitado o valor zero.

*/

int numero;

void imprimirRecursivo(){
	 printf("Digite um numero: ");
	 scanf("%d",&numero);
	 
	 if(numero != 0){
		imprimirRecursivo();
	}
}

int main(){
	imprimirRecursivo();	
	return 0;
}
