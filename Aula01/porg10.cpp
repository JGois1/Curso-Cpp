#include<stdio.h>
/*
Escreva um programa que leia base 
e a altura de um retangulo.

A) Calcular a area e o perimetro da figura.
B) Imprimir os valores calculados.
*/

float base;
float altura;

int main(){
	//variaveis
	float area=0;
	float peri=0;
	//entrada...
	printf("Digite a base do retangulo:");
	scanf("%f",&base);
	
	printf("Digite a altura do retangulo:");
	scanf("%f",&altura);
	//processamento
	area= base*altura;
	peri= base + base +altura +altura;
	//saida...
	printf("A area do retangulo eh: %0.2f \n", area);//%0.2f delimita as casas decimais ate duas.
	printf("O Perimetro do retangulo eh: %0.2f \n", peri);
	
	
	
	return 0;
}
