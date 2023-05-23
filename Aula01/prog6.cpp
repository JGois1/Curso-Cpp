#include<stdio.h>
/*
Escreva um programa que leia dois numeros.
A) O programa deverá efetuar as 4 operações básicas
da matematica
B) Imprimir os valores calculados

Operadores aritimeticos
+,-,*,/.
*/

float num1;
float num2;


int main(){
	
	float soma=0;
	float sub=0;
	float mult=0;
	float div=0;
	
	printf("Digite um numero: ");
	scanf("%f",&num1);
	
	printf("Digite um numero: ");
	scanf("%f",&num2);
	
	soma=num1 + num2;
	sub=num1 - num2;
	mult=num1 * num2;
	div=num1 / num2;
	
	printf("Adicao: %f \n", soma);
	printf("Subtracao: %f \n", sub);
	printf("Multiplicacao: %f \n",mult);
	printf("Divisao: %f ", div);
	
	
	return 0;
}
