#include<stdio.h>

/*
Escreva um programa que leia dois numeros.
A) Verificar e imprimir o maior entre eles.

Operadores relacionais (V ou F)
< , > , <= , >= , !- , ==
*/

int n1;
int n2;

int main(){
	
    int maior=0;
	
	printf("Digite um numero: \n");
	scanf("%d",&n1);
	printf("Digite outro numero: \n");
	scanf("%d",&n2);
	
	if(n1>n2){
		printf("O primeiro eh o maior. \n");
    }else if(n1==n2){
    	printf("Os numeros sao iguais. \n");
	}else{
		printf("O segundo eh o maior. \n");
	}
	
	
	return 0;
}
