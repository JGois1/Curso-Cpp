#include<stdio.h>

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
