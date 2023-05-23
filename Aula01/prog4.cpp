#include<stdio.h>
/*
Escreva um programa que 
leia um numero.(Entrada de dados)

A)Exibir o valor lido.
(saida de dados)
*/

int num1;

int main(){
	printf("Digite um numero : ");
	//Entrada de dados
	//scanf é tipo o input
	// & -> aponta para a variavel
	scanf("%d",&num1);
	
	//saida dos dados
	printf("O valor lido : %d \n", num1);
	
	return 0;
}
