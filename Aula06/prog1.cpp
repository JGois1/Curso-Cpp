#include<stdio.h>
/*
Escreva um programa que imprima a soma e 
a quantidade de numeros multiplos de 4 de 0 a 100
*/
int main(){
	
	int soma = 0;	
	int i = 0;		
	int cont =0; 	
	
	while(i < 100){
		if(i%4==0){
			soma=soma +i;
			cont=cont +1;
		}

		i=i+1;

	}
	
	printf("Soma dos multiplos de 4: %d \n", soma);
	printf("Quantidade dos multiplos de 4: %d \n", cont);
	
	
	return 0;
}
