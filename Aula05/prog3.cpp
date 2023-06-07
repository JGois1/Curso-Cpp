#include<stdio.h>
/*
Escreva um programa que leia dois numeros.

A) O programa devera conter um menu com as operações básicas da matematica.

B) Imprimir o valor da operação selecionada.

*/

int calc;
int a;
int b;

int main(){
	
	int ope=0;
	
	printf("Digite um numero:\n");
	scanf("%d",&a);
	
	printf("Digite outro numero: \n");
	scanf("%d",&b);
	
	printf("Calculadora basica: \n");
	printf(" 1 - soma: \n");
	printf(" 2 - subtracao: \n");
	printf(" 3 - Multiplicacao: \n");
	printf(" 4  - divisao: \n");
	scanf("%d",&calc);	
	
	switch(calc){
		
		case 1:
			ope = a+b;
			printf("Adicao: %d \n", ope);
			break;
		case 2:
			ope = a-b;
			printf("Subtracao: %d \n", ope);
			break;
		case 3:
			ope = a*b;
			printf("Multiplicacao: %d \n", ope);
			break;
		case 4:
			if(b==0){
				printf("Nao ha divisao por zero! \n");
				break;
			}
			ope = a/b;
			printf("Divisao: %d \n", ope);
			break;
		
		default:
			printf("Operacao invalida! \n");
			break;
	}
	
	return 0;
}






