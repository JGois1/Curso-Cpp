#include<stdio.h>
/*
Escreva um programa que leia dois numeros

A) Calcular a soma e a media dos numeors lidos.
B) Imprimit os valores calculados

Entrada de dados - processamento - saida de dados ==> Isso é chamado de Algoritimo.
*/

float num1;
float num2;

int main(){
	
	float soma=0;
	float media=0;
	
	//entrada de dados
	printf("Digite um numero:");
	scanf("%f",&num1);
	
	printf("Digite um numero:");
	scanf("%f",&num2);
	
	//processamento
	soma = num1 + num2;
	media = soma / 2;
	
	//saida de dados
	printf("Soma : %f \n", soma);
	printf("Media : %f", media);
	
	return 0;
}
