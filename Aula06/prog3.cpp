#include<stdio.h>
/*
Escreva um programa que leia um numero.

A) O programa devera imprimir a multiplicação
do numero de 0 a 10.
*/

int numero=0;

int main(){
	
	int mult=0;
	
	printf("Digite um numero:");
	scanf("%d",&numero);
	
	for(int i = 0; i <= 10; i++){
		mult = numero * i;
		printf("%d x %d = %d \n", numero, i, mult);
	}
	
	return 0;
}
