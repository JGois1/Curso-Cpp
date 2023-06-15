#include<stdio.h>
/*
Escreva um programa que efetue a entrada dos numeros 
digitados de forma recursiva.

A) A entrada devera ser interrompida quando 
for digitado o valor zero.

B) Imprimir a soma dos numeros digitados quando
for digitado o zero.

*/

int numero;
int soma;

void imprimirRecursivo(){
	 printf("Digite um numero: ");
	 scanf("%d",&numero);
	 
	 soma = soma + numero;
	 
	 if(numero != 0){
		imprimirRecursivo();
	}else{
		printf("A soma dos numeros ficou: %d \n",soma);
	}
}

int main(){
	imprimirRecursivo();	
	return 0;
}
