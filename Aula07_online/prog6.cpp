#include<stdio.h>
/*

*/

float salFixo;
float valorVenda;

void entrada(){
	printf("Digite o salario fixo: \n");
	scanf("%f",&salFixo );
	printf("Digite o valor das vendas: \n");
	scanf("%f",&valorVenda);
}

float CalcularBonus(){
	float bonus=0;
	if(valorVenda <= 1500){
		bonus = (valorVenda *3)/100;
	}else{
		bonus = 45 + ((valorVenda - 1500)*5)/100;
	}
	return bonus;
}

float CalcularSalFinal(){
	float salFinal=0;
	salFinal = salFixo + CalcularBonus();
	return salFinal;
}

void saida(){
	printf("Salario final : %0.2f \n", CalcularSalFinal());
}


int main(){
	
	entrada();
	saida();
	
	return 0;
}
