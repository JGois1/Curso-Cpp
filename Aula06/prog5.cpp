#include<stdio.h>
/*
Funções 
Consiste em subdividir o programa em rotinas menores. Cada 
sub=rotina é responsavel por executar apenas uma unica ação.

Organização e reutilização de código.

ex:
	void nome_f(){
		bloco da função
	}
		
Escreva um programa que imprima uma mensagem de boas vindas.
*/
void imprimirMensagem(){
	printf("Hello World\n");
}

int main(){
	
	imprimirMensagem();
	imprimirMensagem();
	imprimirMensagem();
	
	return 0;
}
