#include<stdio.h>
/*
Fun��es
Recursividade
� quando uma fun��o tem uma chamada interna a ela mesma.

ex:
		void nome_f(){
					if(condi��o){
						nome_f(); -> Recursividade
					}	
			}

Escreva um programa que imprima os numeros inteiros 
de 0 a 10.

*/

int numero;

void imprimirRecursivo(){
	 printf("%d \n", numero);
	 numero++;
	 
	 if(numero != 10){
	 	imprimirRecursivo();
	 }	
}

int main(){
	imprimirRecursivo();	
	return 0;
}
