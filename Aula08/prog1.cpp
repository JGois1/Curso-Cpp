#include<stdio.h>
/*
Vetores
S�o estruturas utilizadas para agrupar variaveis do mesmo 
tipo. O vetor organiza a informa��o em apenas uma unica 
dimens�o.

int a; a = 10 -> [10];
		
		[i] -> vetor i -> inteiro que representa o tamanho
		
int numeros[5];
[0] = 10;
[1] = 20;
[2] = 30;
[3] = 40;
[4] = 50;

Escreva um programa que leia um vetor de 5 posi��es.
A) Imprimir os valores lidos.

*/
//0,1,2,3,4
int numeros[5];

void entrada(){
	printf("Digite um numero :");
	scanf("%d",&numeros[0]);	
	printf("Digite um numero :");
	scanf("%d",&numeros[1]);
	printf("Digite um numero :");
	scanf("%d",&numeros[2]);
	printf("Digite um numero :");
	scanf("%d",&numeros[3]);
	printf("Digite um numero :");
	scanf("%d",&numeros[4]);
}

void saida(){
	printf("\n-----------------\n");
	printf("Primeira posi��o : %d \n", numeros[0]);
	printf("Segunda posi��o : %d \n", numeros[1]);
	printf("Terceira posi��o : %d \n", numeros[2]);
	printf("Quarta posi��o : %d \n", numeros[3]);
	printf("Quinta posi��o : %d \n", numeros[4]);
}

int main(){
	
	entrada();
	saida();
	
	return 0;
}
