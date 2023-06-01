#include<stdio.h>
/*
Estruturas condicionais

IF SEQUENCIAL 
2C -> 
		if(cond1){
			}
		if(cond2){
			}

Escreva um programa que leia o preço
e a quantidade de um produto.

A) Calcular o total a pagar.

B) O programa devera calcular um desconto
de 10%  se o preço for maior que 300.

C) O programa devera calcular um desconto
de 8% se quantidade for maior que 5.

D) Calcular e imprimir o novo valor
total a pagar.

*/

float preco;
int quantidade;

int main(){
	
	float desc1 =0;
	float desc2 =0;
	float total =0;
	float totaldesc = 0;
	
	
	printf("Digite o preco : ");
	scanf("%f", &preco);
	
	printf("Digite a quantidade : ");
	scanf("%d", &quantidade);
	
	total = preco * quantidade;

	if(preco > 300){
		desc1 = (total * 10)/100;
	}
	
	// IF SEQUENCIAL 
	
	if(quantidade > 5){
		desc2 = (total * 8)/100;
	}
	
	totaldesc = total - (desc1 + desc2);
	printf("Desconto 1 : %0.2f \n", desc1);
	printf("Desconto 2 : %0.2f \n", desc2);
	printf("Total : %0.2f \n", total);
	printf("Total com desconto : %0.2f \n", totaldesc);

	return 0;
}














