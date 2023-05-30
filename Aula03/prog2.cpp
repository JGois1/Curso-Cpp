#include<stdio.h>
/*

Estruturas condicionais

Desvio condicional composto
1C - 2R  (v, f)

ex:
		if(condiçao){
				 v -> bloco do if
		}else{
		 	 f -> if 
		}	


Escreva um programa que leia o preço
e a quantidade de um produto.

A) O programa devera calcular o total a
pagar.

B) Calcular um desconto de 10% se o total
for maior que 1000, senão aplicar um desconto
de 5%.


C) Imprimir o total encontrado.

Obs: total = preço * quantidade

*/

// Global, Entrada
float preco;
int quantidade;

int main(){
	
	// local, Processamento 
	float total = 0;
	
	float desconto = 0;
	
	float totaldesc = 0;
	
	printf("Digite o preco : ");
	scanf("%f", &preco);
	
	printf("Digite a quantidade : ");
	scanf("%d", &quantidade);
	
	total = preco * quantidade;
	
	// Desvio condicional composto 	
	if(total > 1000){
		desconto = (total * 10)/100;
	}else{
		desconto = (total * 5)/100;
		
	}
	
	totaldesc = total - desconto;
	printf("Total a pagar : %0.2f \n", total);
	printf("Total a pagar com desconto : %0.2f \n", totaldesc);

	return 0;
}

