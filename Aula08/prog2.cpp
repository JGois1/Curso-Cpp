#include<stdio.h>
/*
Escreva um programa que liea um vetor de 5 posições.
A) Imprimir os valores lidos.
*/

//0,1,2,3,4
int numeros[5];

void entrada(){
	//0,1,2,3,4 -> 5 repetições
	for(int i = 0; i < 5; i++){
		printf("Digite um numero : ");
		scanf("%d",&numeros[i]);
	}
}

void saida(){
	printf("\n ----------------------------------------- \n");
	for(int i = 0; i < 5; i++){
		printf("Numeros[%d] : %d \n",i,numeros[i]);
	}	
}

int main(){
	
	entrada();
	saida();
	
	
	return 0;
}
