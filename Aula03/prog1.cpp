#include<stdio.h>
/*
Exercicio com if:
Estruturas condicionais representam um fluxo alternativo na execução do programa.
Desvio condicional simples
1C - 1R
Ex: 
	Aceita -> bloco do if  N Aceita -> pular o bloco do if
	if(condição){
		bloco do if
	}

Escreva um programa que leia o preço
e a quantidade de um produto.
A) O programa devera calcular o total a
pagar.
B) Calcular um desconto de 10% se o total
for maior que 1000.
C) Imprimir o total encontrado.
Obs: total = preço * quantidade
*/
float price;
int quantidade;


int main(){
		
	float total=0;
	float desconto=0;
	float totaldesconto=0;
	
	printf("Digite o preco do produto: \n");
	scanf("%f",&price);
	printf("Digite a quantidade do produto: \n");
	scanf("%d",&quantidade);
	
	total = price * quantidade;
	
	if(total > 1000){
		
		desconto = (total * 10)/100;
		totaldesconto = total - desconto;
		printf("Total a pagar : %0.2f \n",total);
		printf("Total a pagar com desconto : %0.2f \n", totaldesconto);
		
		return 0;
	}
	
	
	printf("O total a ser pago sera: %0.2f \n",total);
	
	return 0;

}
