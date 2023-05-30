#include<stdio.h>
/*
Escreva um programa que leia um numero.
A) O programa deverá verificar se o numero é par ou ímpar.
*/

int numero;

int main(){
	
	printf("Digite um numero: \n");
	scanf("%d",&numero);
	if(numero % 2 == 0){
		printf("O numero eh par. \n");
	}else{
		printf("O numero eh impar. \n");
	}
	
	
	return 0;
}
/*
Ou, poderia ficar assim:

int numero;

int main(){
	
	int resto=0;
	
	printf("Digite um numero: \n");
	scanf("%d",&numero);
	
	resto = numero % 2;
	
	if(resto == 0){
		printf("O numero eh par. \n");
	}else{
		printf("O numero eh impar. \n");
	}
	
	
	return 0;
}

*/
