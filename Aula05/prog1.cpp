#include<stdio.h>

/*
Escreva um programa que leia duas notas de um aluno.

A) Calcular a media do aluno.

B) Imprimir o situação do aluno em relação a media encontrada:
	media >= 7 'aluno aprovado'
	media < 4 'aluno reprovado'
	media entre 4 e 7 'aluno em recuperação'
*/

	float nota1;
	float nota2;

int main(){
	
	float media=0;
	
	printf("Digite a primeira nota do aluno:");
	scanf("%f",&nota1);
	printf("Digite a segunda nota do aluno");
	scanf("%f",&nota2);
	
	media = (nota1 + nota2)/2;
	printf("A media do aluno foi: %f \n", media);
	
	if(media >= 7){
		printf("O aluno foi aprovado.");
	}
	else if(media < 4){
		printf("O aluno foi reprovado.");
	}else{
		printf("O aluno esta de recuperacao");
	}
	
	return 0;
}
