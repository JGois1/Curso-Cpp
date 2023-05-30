#include<stdio.h>
/*
Escreva um programa que leia um numero.

A) Verificar se o numero é positivo, negativo ou neutro.

*/

int numero;

int main(){
	
	printf("Digite um numero (pode ser positivo, negativo ou neutro): \n");
	scanf("%d",&numero);
	
	if(numero<0){
		printf("O numero eh negativo. \n");
	}else if(numero >0){
		printf("O numero eh positivo. \n");
	}else{
		printf("O numero eh neutro. \n");
	}
	
	return 0;
}

