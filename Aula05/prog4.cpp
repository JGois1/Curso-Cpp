#include<stdio.h>
/*
Estruras de repetição 
Representam rotinas executadas automaticamento 
pelo programa.

Enquanto(condição) Verdadeira, Falsa
	bloco do enquanto
Fim enquanto

Loop infinito
	while(true){
		printf("Ola");
	}

Escreva um programa que imprima os numeros inteiros de 0 a 10.

*/

int main(){
	//inicio, indice
	int i = 0;
	
	// Condição de existência 
	// True, -> 0,1,2,3...9,10 -> False
	while(i < 10){
		printf("%d \n", i);
		
		// Incremento da variavel i de 1 em 1
		i = i + 1;
	}
	
	printf("O valor do i : %d \n", i);
	
	return 0;
}
