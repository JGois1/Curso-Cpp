#include<stdio.h>
/*
Escreva um programa que imprima 
os numeros inteiros de 10 a 0.
*/

int main(){

	int i = 10;
	
	// Condição de existência 
	// True, -> 0,1,2,3...9,10 -> False
	while(i > 0){
		printf("%d \n", i);
		
		// Decremento da variavel i de 1 em 1
		i = i - 1;
	}
	
	printf("O valor do i : %d \n", i);
	
	return 0;
}
