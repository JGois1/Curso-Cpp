#include<stdio.h>
/*
Uma revendedora de carros usados paga a seus funcion�rios vendedores 
um sal�rio fixo por m�s, mais uma comiss�o tamb�m fixa para cada carro 
vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo 
que leia o n�mero de carros por ele vendidos, o valor total de suas vendas, 
o sal�rio fixo e o valor que ele recebe por carro vendido. Calcule e escreva 
o sal�rio final do vendedor. 
			
*/

int ncarros;
float valorvendas;
float salariofixo;
float valorcarro;

int main(){
	
	float com1 = 0;
	float com2 = 0;
	
	float salariofinal = 0;
	
	printf("Digite a quantidade de carros : ");
	scanf("%d", &ncarros);
	
	printf("Digite o valor total das vendas : ");
	scanf("%f", &valorvendas);
	
	printf("Valor da comissao por carro vendido : ");
	scanf("%f", &valorcarro);
	
	printf("Salario fixo : ");
	scanf("%f", &salariofixo);
	
	com1 = ncarros * valorcarro;
	com2 = (valorvendas * 5)/100;
	
	

	salariofinal = salariofixo + com1 + com2;
	
	printf("Comissao 1: %0.2f \n", com1);
	printf("Comissao 1: %0.2f \n", com2);
	printf("Salario final:  %0.2f \n", salariofinal);
	
	return 0;
}


