#include<stdio.h>
/*
Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, 
calcular e escrever o valor correspondente em graus Celsius 
(baseado na fórmula abaixo):

	 C 			F - 32
 ---------- = -----------
 	5 			  9 

*/

float F;

void entrada(){
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f",&F);
}

float CalcularC(){
	float C = 0;
	C = (F - 32)/9 * 5;
	return C;
}

void saida(){
	printf("\nA temperatura digitada foi convertida para %0.1f graus Celsius \n", CalcularC());	
}

int main(){
	
	entrada();
	saida();
	
	return 0;
}
