#include<stdio.h>
/*

Desvio condicional escalonado
1C - NR+2 =  5 - 2 = 3 : 3 - 2 = 1;

Ex:
	if() ..
	
	else if() ...
	
	else() ...
	

Escreva um programa que leia um numero.
A) Verificar se o numero é maior, menor ou igual a 10.

*/
int numero;

int main(){
	
	printf("Digite um numero de 1 a 20: \n");
	scanf("%d",&numero);
	
	if(numero > 10){
		printf("Seu numero eh maior que 10. \n");
	}else if(numero < 10){
		printf("Seu numero eh menor que 10. \n");
	}else{
		printf("Seu numero eh 10. \n");
	}
	
	return 0;
}
