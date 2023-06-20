#include<stdio.h>
/*
Escreva um programa que leia 10 notas de uma
turma.
A) O programa devera verificar qual foi a maior nota 
tirada.
B) Calcular a media geral da turma.
C) Calcular a quantidade de alunos que tiraram notas abaixo de 5.
	C1) Imprimir que estão de recuperação
D) Impriir todos os valores calculados.
*/
int const N = 10;
float notas[N];

void entrada(){
	for(int i = 0; i < N; i++){
		printf("Digite a nota do aluno: ");
		scanf("%f",&notas[i]);
	}	
}
float calcularMaiorNota(){
	float nota = notas[0];
	for(int i=0;i<N;i++){
		if(notas[i] > nota){
			nota = notas[i];
		}
	}
	return nota;
}

float CalcularSoma(){
	float soma=0;
	for(int i = 0; i < N; i++){
		soma = soma + notas[i];
	}
	return soma;
}
float calcularMedia(){
	float media=0;
	media = CalcularSoma() / N;
	return media;
}

int calcularQtdRec(){
	int qtdrec=0;
	for(int i = 0; i < N; i++){
		if(notas[i] < 5){
			qtdrec = qtdrec +1;
		}
	}
	return qtdrec;
}

void saida(){
	printf("\n---------------------------------------------------------\n");
	printf("A maior nota tirada foi: %0.2f \n",calcularMaiorNota());
	printf("A media da turma foi: %0.2f \n",calcularMedia());
	printf("A quantidade de alunos que ficaram de recuperacao (notas<5) foi: %d \n",calcularQtdRec());
}

int main(){
	entrada();
	saida();
	return 0;
}
