#include<stdio.h>
/*
Escreva um programa que leia duas variaveis A e B.

A) O programa deverá efetuar a troca dos valores das variaveis.
*/

int main(){
	
	int A =0;
	int B =0;
	int auxiliar =0;

	printf("Digite o valor de A:");
	scanf("%d",&A);
	printf("Digite o valor de B:");
	scanf("%d",&B);
		
	auxiliar = A;
	A  = B;
	B  = auxiliar;
			
	printf("A variavel A agora eh: %d \n",A);
	printf("A variavel B agora eh: %d",B);

	return 0;
}
