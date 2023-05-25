#include<stdio.h>


float custofabric;
float newcar;
float porcent;
float imposto;    /*porcent = 28% imposto=45%*/

int main(){
	
	printf("Digite o custo de fabrica do carro:");
	scanf("%f",&custofabric);
	
	porcent = (custofabric * 28)/100;
	imposto = (custofabric * 45)/100;
	newcar = custofabric + porcent + imposto;
	
	printf("O Custo do carro novo eh: %0.2f \n", newcar);
	
	
	return 0;
}
