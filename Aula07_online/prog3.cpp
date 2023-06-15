#include<stdio.h>
/*

*/

float F;

void entrada(){
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f",&F);
}

float CalcularC(){
	float C = 0;
	C = (F - 32)/9 * 5;
	return C;
}

void saida(){
	printf("\nA temperatura digitada foi convertida para %0.1f graus Celsius \n", CalcularC());	
}

int main(){
	
	entrada();
	saida();
	
	return 0;
}
