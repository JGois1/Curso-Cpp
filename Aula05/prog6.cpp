#include<stdio.h>
/*
Escreva um programa que imprima
os numeros inteiros pares de 0 a 100.
*/

int main(){
// MEU JEITO (semi-errado)
	int i = 0;
	
	while(i<=100){
		
		printf("%d \n", i);
	
		i = i + 2;
	}
	
	return 0;
}
/* Jeito certo:
	
	int i = 0;
	
	while(i<=100){
		
		if(i % 2 == 0){
			printf("%d \n", i);
		}
		
		i = i + 1;
	}




*/
