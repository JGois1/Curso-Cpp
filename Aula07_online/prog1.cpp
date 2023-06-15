#include<stdio.h>
/*
Escreva um programa que leia o peso
e a altura de uma pessoa.

A) Calcular o IMC da pessoa.
B) Imprimir o IMC encontrado.

IMC = peso / altura * altura

*/

float peso;
float altura;

void entrada(){
	printf("Digite o peso : ");
	scanf("%f", &peso);
	
	printf("Digite a altura : ");
	scanf("%f", &altura);
		
}

float calcularIMC(){
	float imc = 0;
	imc = peso / (altura * altura);
	return imc;
}

void saida(){
	printf("IMC : %0.2f \n", calcularIMC());
}

int main(){
	entrada();
	saida();
	return 0;
}







