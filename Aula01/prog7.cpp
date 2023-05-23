#include<stdio.h>
/*
exercicio 2:
Escreva um programa que leia um numero.
A) calcular e imprmir o antecessor e o sucessor do numero.
*/


int main(){
	
	//introduzindo as variaveis
	int num=0;
	int ant=0;
	int suc=0;
	//entrada de dados
	printf("Digite um numero:");
	scanf("%d",&num);
	//processamento
 	ant = num - 1;
 	suc = num + 1;
	//saida de dados
	printf("o antecessor eh %d \n", ant);
	printf("o sucessor eh %d \n", suc);	
	
	
	return 0;
}
