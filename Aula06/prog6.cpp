#include<stdio.h>
/*
Fun��es 
Par�metros (entrada)
� a passagem de valor para fun��es.

EX:
Criar uma fun��o para iumprimir um numero.
*/

void imprimirNumero(int numero){
	printf("O valor do numero: %d \n", numero);
}

int main(){
	
	imprimirNumero(10);
	int a=100;
	imprimirNumero(a);
	
	return 0;
}
