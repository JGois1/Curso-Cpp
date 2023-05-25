#include<stdio.h>
/*
Escreva um programa que leia duas notas de um aluno.

A) calcular a media do aluno
B) imprimir os valores calculados.

*/


float nota1;
float nota2;

int main(){
	 
	float media=0;
	
	printf("Digite a nota 1 do aluno:");
	scanf("%f",&nota1);
	
	printf("Digite a nota 2 do aluno:");
	scanf("%f",&nota2);
	
	media= (nota1 + nota2)/ 2;
	
	printf("A media das duas notas do aluno foi: %0.2f \n", media);
	
	return 0;
}
