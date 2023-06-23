#include<stdio.h>
/*
 Matrizes
    
              C
          0       1
    0   (0,0)   (0,1)
 L  1   (1,0)   (1,1)

Primeira Linha -> L (0) ->  (0,0)(0,1)
Ultima  Coluna -> C (1) ->  (0,1)(1,1)
Diagonal Principal -> i == j -> (0, 0) (1, 1)

Escreva um programa que leia um matriz 3x3.
A) Calcular soma dos elementos da primeira linha.
B) Calcular a soma dos elementos da ultima coluna.
C) Calcular a soma da diagonal principal.
D) Imprimir os valores calculados.

*/

// 4 elementos
int mat[3][3];

void entrada(){
    // Linha
    for(int  i = 0; i < 3; i++){
        // Coluna
        for(int j = 0; j < 3; j++){
             printf("Mat[%d][%d] : ", i,j);
             scanf("%d", &mat[i][j]);
        }
    }
}


int calcularSomaPrimeiraLinha(){
    int soma = 0;
     for(int  i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
             if(i == 0){
                soma = soma + mat[i][j];  
             }
        }
    }
    return soma;
}

int calcularSomaUltimaColuna(){
    int soma = 0;
     for(int  i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
             if(j == 2){
                soma = soma + mat[i][j];  
             }
        }
    }

    return soma;
}

int calcularSomaDiagonalPrincipal(){
    int soma = 0;

    for(int  i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
             if(i == j){
                soma = soma + mat[i][j];  
             }
        }
    }

    return soma;
}


void saida(){
    printf("Soma Primeira Linha : %d \n", calcularSomaPrimeiraLinha());  
    printf("Soma Ultima Coluna : %d \n", calcularSomaUltimaColuna());  
    printf("Soma Diagonal  Principal  : %d \n", calcularSomaDiagonalPrincipal());  
}

int main(){
    entrada();
    saida();

    return 0;
}