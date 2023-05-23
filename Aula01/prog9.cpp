#include<stdio.h>
/*
Escreva um programa que leia o raio 
de uma circunferencia.

A) calcular a area e o comprimento da mesma.
B) print nos valores

OBS Variaveis constantes -> sao variaveis criadas com
a assinatura somente para leitura. (nao podem ser modificadas depois.)
*/

float const PI = 3.14;
float r;


int main(){
	
	float area=0;
	float c=0;
	
	//entrada de dados
	printf("Digite o raio da circunferencia: ");
	scanf("%f",&r);
	//processamento
	c = 2 * PI * r;
	area = PI * r * r;
	//saida de dados
	printf("O Comprimento do raio eh: %f \n", c);
	printf("A area do raio eh: %f \n", area);
	
	
	return 0;
}
