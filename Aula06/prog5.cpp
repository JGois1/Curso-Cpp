#include<stdio.h>
/*
Fun��es 
Consiste em subdividir o programa em rotinas menores. Cada 
sub=rotina � responsavel por executar apenas uma unica a��o.

Organiza��o e reutiliza��o de c�digo.

ex:
	void nome_f(){
		bloco da fun��o
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
