#include<stdio.h>
/*
Escreva um algoritimo para ler uma temperatura em graus fahrenheit,
calcular e escrever o valor correspondente em graus celsius (baseado na formula abaixo):

    C			F - 32
----------- = -------------
	5				9

*/
float F;
float C;

int main(){
		
	printf("Digite a temperatura em farenheit:");
	scanf("%f",&F);
	
	C = (F - 32 )/ 9 * 5; 
/*
esse * 5 é pq ele esta dividindo com o primeiro C, contudo, ele foi para o outro 
lado do sinal, então se transformou em multiplicação. Ficaria assim:
    F - 32
C = -------- * 5	
       9	
*/
	printf("A temperatura em Celsius eh: %f \n",C);
	
	return 0;
}
