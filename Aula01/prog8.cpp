#include<stdio.h>
/*
Escreva um programa que leia a base
e a altura de um triangulo.

A) Calcular a area da figura.

B) Imprimir o valor encontrado.

Formula: A = (base * altura)/2;
*/

int main(){
	//variaveis
	float base=0;
	float altura=0;
	float area=0;
	//entrada de dados
	printf("Digite a base do triangulo :\n");
	scanf("%f",&base);
	
	printf("Digite a altura do triangulo :\n");
	scanf("%f",&altura);
	//processamento
	area= (base * altura)/2;
	//saida de dados
	printf("Area %f", area);
	
	return 0;
}
