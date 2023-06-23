#include<stdio.h>
/*
Escreva um programa que leia uma matriz 2 x 2.
A) Calcular a soma e a media dos numeros.
B) Imprimir os valores calculados.
*/


// 4 elementos
int mat[2][2];

void entrada(){
    // Linha
    for(int  i = 0; i < 2; i++){
        // Coluna
        for(int j = 0; j < 2; j++){
             printf("Mat[%d][%d] : ", i,j);
             scanf("%d", &mat[i][j]);
        }
    }
}

int calcularSoma(){
    int soma = 0;
     for(int  i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
           soma = soma + mat[i][j];
        }
    }
    return soma;
}   

int calcularMedia(){
    int media = 0;
    media =  calcularSoma()/ 4;
    return media;
}

void saida(){
    printf("Soma : %d \n", calcularSoma());
    printf("Media : %d \n", calcularMedia());
}

int main(){
    entrada();
    saida();

    return 0;
}