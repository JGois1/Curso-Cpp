#include<stdio.h>
/*

Escreva um programa que leia duas notas de cinco alunos de um turma.

A) O programa devera calcular a media da turma.

B) Imprimir os valores calculados.

    5   3   6   7   4
    4   2   5   4   8

    2   3
    5   4
    6   4
    3   2
    1   7
*/

float notas[5][2];

void entrada(){
    // Linha
    for(int  i = 0; i < 5; i++){
        // Coluna
        for(int j = 0; j < 2; j++){
             printf("Nota (%d) do Aluno (%d) ",j+1, i+1);
             scanf("%f", &notas[i][j]);
        }
    }
}


float calcularMediaAluno(float nota1, float nota2){
     float media = (nota1 + nota2)/2;
     return media;
}

float calcularMediaTurma(){
    float media = 0;    
    float soma = 0;
    for(int  i = 0; i < 5; i++){
        for(int j = 0; j < 1; j++){
             soma = soma + calcularMediaAluno(notas[i][j], notas[i][j+1]);
         }

    }
    media = soma / 5 ;
    return media;
}

void saida(){
    printf("Media da turma : %0.2f \n", calcularMediaTurma());
}

int main(){
    entrada();
    saida();

    return 0;
}