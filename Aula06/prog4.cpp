#include<stdio.h>
/* 
Um posto est� vendendo combust�veis com a seguinte tabela de descontos:

			at� 20 litros, desconto de 3% por litro �lcool
			acima de 20 litros, desconto de 5% por litro
			
			at� 20 litros, desconto de 4% por litro Gasolina
			acima de 20 litros, desconto de 6% por litro
			
Escreva um algoritmo que leia o n�mero de litros vendidos e o tipo de 
combust�vel (codificado da seguinte forma: 1-A-�lcool, 2-G-gasolina), 
calcule e imprima o valor a ser pago pelo cliente sabendo-se que o pre�o do litro 
da gasolina � R$ 5,46 e o pre�o do litro do �lcool � R$ 3,84.
*/

char tipo=0;
float litros=0;

float const precoa = 3.84;
float const precog = 5.46;

int main(){
	
	float preco =0;
	float precofinal=0;
	float desconto=0;
	
	printf("Selecione o tipo do combustivel: \n");
	printf("(A) - Alcool \n");
	printf("(G) - Gasolina \n");
	scanf("%s",&tipo);
	
	printf("Digite o numero de litros vendidos:");
	scanf("%f",&litros);
	
	switch(tipo){
		case 'A': case 'a':
			preco = litros * precoa;
			if(litros <= 20){
				desconto = (preco*3)/100;
			}else{
				desconto = (preco*5)/100;
			}
			
			precofinal = preco - desconto;
			printf("Combustivel: Alcool \n");
			break;
		case 'G': case 'g':
			preco = litros * precog;
			preco = litros * precoa;
			if(litros <= 20){
				desconto = (preco*4)/100;
			}else{
				desconto = (preco*6)/100;
			}
			
			precofinal = preco - desconto;
			break;
			printf("Combustivel: Gasolina \n");
		default:
			printf("Tipo de combustivel invalido! \n");
			break;
	}
	
	printf("Preco inicial: %0.2f \n", preco);
	printf("Desconto aplicado: %0.2f \n",desconto);
	printf("Preco final: %0.2f \n",precofinal);
	
	return 0;
}
