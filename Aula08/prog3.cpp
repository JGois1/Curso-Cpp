#include<stdio.h>
/*
Escreva um programa que liea um vetor de 5 posições.
A) Calcular a soma 
B) Calcular a media
*/

//0,1,2,3,4
int numeros[5];

int const N = 5;

void entrada(){
	//0,1,2,3,4 -> 5 repetições
	for(int i = 0; i < N; i++){
		printf("Digite um numero : ");
		scanf("%d",&numeros[i]);
	}
}

int CalcularSoma(){
	int soma=0;
	
	for(int i = 0; i < N; i++){
		//10,20,30,40,50
		soma = soma + numeros[i];
	}
	
	return soma;
}
int CalcularMedia(){
	int media=0;
	media = CalcularSoma() / N;
	return media;
}

void saida(){
	printf("\nSoma: %d \n",CalcularSoma());
	printf("Media: %d \n",CalcularMedia());	
}

int main(){
	
	entrada();
	saida();
	
	
	return 0;
}
