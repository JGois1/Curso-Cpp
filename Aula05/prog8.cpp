#include<stdio.h>
/*
Escreva um programa que imprima
a quantidade de multiplos de 5 de 0 a 100.

ex:
	0,5,10,15,20,25
	quantidade = +1,+1,+1,+1,+1, = 5
*/

int main(){
	
	int i = 0;
	//CONTADOR, +1
	int cont =0;
	
	while(i<=100){
		
		if(i % 5 == 0){
			cont = cont +1;
		}
		
		i = i + 1;
	}
	
	printf("Quantidade de multiplos de 5: %d \n",cont);
	
	return 0;
}
