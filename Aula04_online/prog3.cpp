#include<stdio.h>
/*

Estruturas condicionais 
2C -> IF ANINHADO OU INTERNO  
		if(cond1){
			if(cond2){
			}
		}
Escreva um programa que leia o salario e o numero de filhos 
de um funcionario.

A) Calcular um bonus de 10% se o valor do salario for menor que 
1000 e o numero de filhos maior que 2.

B) Imprimir o novo valor do salario.

*/

float salario;
int nfilhos;

int main(){
	
	float bonus = 0;
	float salarionovo = 0;
	
	printf("Digite o salario : ");
	scanf("%f", &salario);
	
	printf("Digite o numero de filhos : ");
	scanf("%d", &nfilhos);
	
	if(salario < 1000){
		if(nfilhos > 2){
			bonus = (salario * 10)/100;
		}
		
	}	
	
	salarionovo = salario + bonus;
	printf("Salario novo : %0.2f \n", salarionovo);	
	
	return 0;
}

