#include<stdio.h>
/*
Escreva um programa que leia dois numeros.

A)  Calcular a soma e a media dos numeros lidos.

B) Imprimir os valores calculados.
entrada - processamento - saida
  1F            2F          3F

(ESSE PROG FOI FEITO APENAS PARA EXEMPLIFICAR UM ERRO, MOSTRAR OQUE EH INUTIL DE SER FEITO)
*/

int a;
int b;
int soma;
int media;

void entrada(){
	printf("Digite um numero: ");
	scanf("%d",&a);
	printf("Digite outro numero: ");
	scanf("%d",&b);
}
void calcularSoma(){
	soma = a + b;
}
void calcularMedia(){
	media = soma / 2;
}
void saida(){
	printf("O valor da soma : %d \n", soma);
	printf("O valor da media : %d \n", media);
}

int main(){
	
	entrada();
	calcularSoma();
	calcularMedia();
	saida();
	
	return 0;
}
