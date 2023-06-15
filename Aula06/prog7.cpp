#include<stdio.h>
/*
Tipos de funções 

void -> procedimentos.
Não possuem a capacidade de retornar um valor de saida.

Tipadas -> processamentos.
Possuem a capacidade de retornar um valor de saida.

Obs: return, palavra reservada para efetuar a saida da função,
pode ou não retornar um valor.


Ex:
	Criar uma função que efetue/imprimir a soma de dois numeros.
*/

// void -> procedimento
void imprimirSoma(int n1, int n2){
	// variavel local 
	int soma = n1 + n2;
	printf("Soma : %d \n", soma);
	
}

// tipada -> processamento
// Função  + variavel
int calcularSoma(int n1, int n2){
	// variavel local
	int soma = n1 + n2;
	return soma; 
}

int main(){
	
	imprimirSoma(10, 20);
	int s  = calcularSoma(30, 20);
	printf("O valor da soma : %d \n", s);
	printf("O valor da media : %d \n", s/2);
	printf("O valor da soma : %d \n", calcularSoma(40, 50));
	
	return 0;
}











