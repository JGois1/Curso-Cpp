#include<stdio.h>
/*
Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. 
Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas 
até R$ 1.500,00 mais 5% sobre o que ultrapassar este valor, calcular 
e escrever o seu salário total.
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
