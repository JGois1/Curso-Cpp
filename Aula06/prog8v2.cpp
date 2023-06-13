#include<stdio.h>
/*

(PROG 8.1) Versão correta do programa anterior

*/

int a;
int b;

void entrada(){
	printf("Digite um numero: ");
	scanf("%d",&a);
	printf("Digite outro numero: ");
	scanf("%d",&b);
}
//TIPADA -> Processamento
int calcularSoma(){
	int soma = a + b;
	return soma;
}
//TIPADA -> Processamento
int calcularMedia(){
	int media = calcularSoma() / 2;
	return media;
}
void saida(){
	printf("O valor da soma : %d \n", calcularSoma());
	printf("O valor da media : %d \n", calcularMedia());
}

int main(){
	
	entrada();
	saida();
	
	return 0;
}
