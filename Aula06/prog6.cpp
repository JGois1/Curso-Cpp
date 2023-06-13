#include<stdio.h>
/*
Funções 
Parâmetros (entrada)
é a passagem de valor para funções.

EX:
Criar uma função para iumprimir um numero.
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
