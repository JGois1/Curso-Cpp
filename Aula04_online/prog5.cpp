#include<stdio.h>
/* 
Escreva um programa que leia um numero.

A) O programa devera verificar se o numero eh valido.

Obs: Numero valido esta entre 0 e 10.
*/
int numero;

int main(){
	 
	printf("Digite um numero: ");
	scanf("%d",&numero);
	
	if(numero >= 0 && numero <=10){
		printf("Seu numero eh valido.");
		return 0;
	}
	
	printf("Seu numero eh invalido");
	
	return 0;
}
