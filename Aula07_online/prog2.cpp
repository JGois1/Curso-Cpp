#include<stdio.h>
/*
    - TREINANDO FUN��ES.
O custo de um carro novo ao consumidor � a soma do custo de f�brica 
com a porcentagem do distribuidor e dos impostos (aplicados ao custo 
de f�brica). Supondo que o percentual do distribuidor seja de 28% e os 
impostos de 45%, escrever um algoritmo para ler o custo de f�brica 
de um carro,calcular e escrever o custo final ao consumidor. 
*/

float custo_fabrica;

void entrada(){
	printf("Digite o custo de fabrica do carro: ");
	scanf("%f",&custo_fabrica);
}

float CalcularImpostos(){
	float impostos = 0;
	impostos = (custo_fabrica * 45)/100;
	return impostos;
}

float CalcularDistribuidor(){
	float distribuidor = 0;
	distribuidor = (custo_fabrica * 28)/100;
	return distribuidor;
}

float CalcularCustoFinal(){
	float custo_final =0;
	custo_final = (custo_fabrica + CalcularDistribuidor() + CalcularImpostos());	
	return custo_final;
}

void saida(){
	printf("O custo final ao consumidor ficou: %0.2f \n", CalcularCustoFinal());
}

int main(){
	
	entrada();
	saida();
	
	return 0;
}
