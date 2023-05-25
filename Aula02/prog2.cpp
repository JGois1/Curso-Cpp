#include<stdio.h>
/*
Escreva um algoritimo para ler o salario mensal atual de um funcionario e o percentual de reajuste. 
calcular e escrever o valor do novo salário.
ex:
	entrada:
			salario = 1000, percentual = 10
	saida: 
			salario novo = 1100
			
*/


float sal1;
float percent;

int main(){
		
		float calculo=0;
		float sal2=0;
		//entrada
		printf("Digite o salario do funcionario:");
		scanf("%f",&sal1);
		
		printf("Digite o percentual do reajuste:");
		scanf("%f",&percent);
		//processamento
		calculo = (sal1 * percent)/100;
		sal2 = calculo + sal1;
		
		printf("dsadsada foi: %f",sal2);
		
	
	
	return 0;
}
