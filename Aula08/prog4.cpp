#include<stdio.h>
/*
Escreva um programa que liea um vetor de 5 posições.
A) Verificar qual o maior e o menor numero(s).
*/

int numeros[5];

void entrada(){
	//0,1,2,3,4 -> 5 repetições
	for(int i = 0; i < 5; i++){
		printf("Digite um numero : ");
		scanf("%d",&numeros[i]);
	}
}

int verificarMaior(){
	int numero = numeros[0];
	for(int i=0; i < 5; i++){
		if(numeros[i] > numero){
			numero = numeros[i];
		}
	}
	
	return numero;
}
int verificarMenor(){
	int numero = numeros[0];
	for(int i=0; i < 5; i++){
		if(numeros[i] < numero){
			numero = numeros[i];
		}
	}
	return numero;
}

void saida(){
	printf("O maior : %d \n",verificarMaior());
	printf("O menor : %d \n",verificarMenor());
}

int main(){
	entrada();
	saida();
	return 0;
}
