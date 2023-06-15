#include<stdio.h>
/*
Escreva um programa que leia duas notas de um aluno.

A) Calcular a media do aluno.
B) Imprimir a situação em relação a media encontrada:
		media >= 7 'aprovado'
		media < 4 'reprovado'
		media entre 4 e 7 'recuperação'

*/

float n1;
float n2;

void entrada(){	
	printf("Digite a nota do aluno : ");
	scanf("%f", &n1);
	
	printf("Digite a nota do aluno : ");
	scanf("%f", &n2);	
	
}

float calcularMedia(){
	float media = 0;
	media = (n1 + n2)/2;
	return media;
}

void saida(){
	
	float media = calcularMedia();
	printf("Media : %0.2f \n", media);
	
	if(media >= 7){
		printf("Aprovado! \n");
		
	}else if(media < 4){
		printf("Reprovado! \n");
		
	}else{
		printf("Em recuperacao! \n");
		
	}
}
int main(){

	entrada();
	saida();
	
	return 0;
}

