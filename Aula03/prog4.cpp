#include<stdio.h>
/*
Operadores aritimeticos
% mod -> ele retorna o resto de uma divisão.

10 / 2 = 5;
10 % 2 = 0;

9 / 2 = 4;
9 % 2 = 1;

*/
int main(){
	int numero = 9;
	int q = numero / 2;
	int r = numero % 2;
	
	printf("Resultado da divisao: %d \n", q);
	printf("Resto da divisao: %d \n", r);
	
	return 0;
}
