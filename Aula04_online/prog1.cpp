#include<stdio.h>
/*
Escreva um programa que leia o pre�o 
de um produto.

A) O programa devera calcular um desconto de acordo
com a seguinte tabela:
	pre�o >= 3000 , 15% de desconto
	pre�o < 1000, 6% de desconto
	pre�o entre 1000 e 3000 , 12%
	
B) Imprimir o novo pre�o do produto.
*/

float preco;

int main(){
	
	float desconto = 0;
	float preconovo =0;
	float desconto2 = 0;
	float desconto3 = 0;
	
	printf("Digite o preco do produto: \n");
	scanf("%f",&preco);
	
	if(preco >= 3000){
		desconto = (preco * 15)/100;
	}else if(preco < 1000){
		desconto2 = (preco * 6)/100;	
	}else{
		desconto3 = (preco * 12)/100;
	}
	
	preconovo = preco - desconto;
	printf("O preco ficou:")
	
	return 0;
}
