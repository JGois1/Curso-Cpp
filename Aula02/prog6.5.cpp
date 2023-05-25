#include<stdio.h>
/*
Uma revendedora de carros usados paga a seus funcionarios vendedores 
um salario fixo por mes, mais uma comissao tambem fixa para cada carro 
vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritimo
que leia o numero de carros por ele vendidos, o valor total de suas vendas
*/

//OBS: essa e a minha versao do exercicio, que fiz mais simplificado porem sem comissao 1 e 2 no printf final

int ncarros;
float valorTotal; /*vendedores ganham 5% -> * 5)/100*/
float salFixo;
float valorcarro;
float salariofinal;
int main(){

	printf("Digite o numero de carros que voce vendeu:");
	scanf("%d",&ncarros);
	
	printf("Digite o valor total de suas vendas:");
	scanf("%f",&valorTotal);
	
	printf("Digite o valor fixa da comissao:");
	scanf("%f",&valorcarro);
	
	printf("Digite seu salario fixo:");
	scanf("%f",&salFixo);
	
	salariofinal = (valorcarro * ncarros) + (valorTotal * 5)/100 + salFixo;

	printf("Salario Final: %0.2f \n:", salariofinal);


	return 0;
}
