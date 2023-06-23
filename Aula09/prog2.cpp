
#include<stdio.h>

/*
Matrizes 
Estrutura utilizada para agrupar variaveis o mesmo
tipo. Uma matriz organiza a informação em linhas e colunas.
[i][j] => i linha; j coluna;
int mat[2][2]; 
QTDE =  i x j = 4 elementos,  Quadrática i == j
               C
         0      1
    0   (0,0)   (0,1)
L
    1   (1,0)    (1,1)

mat[0][0] = 10;
mat[0][1] = 20;
mat[1][0] = 30;
mat[1][1] = 40;

Escreva um programa que leia um matriz. O 
programa dever imprimir os valores lidos.

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
void saida(){
    printf("\n ----------------- \n");
    
      // Linha
    for(int  i = 0; i < 2; i++){
        // Coluna
        for(int j = 0; j < 2; j++){
             printf("Mat[%d][%d] : %d \n", i,j, mat[i][j]);
             
        }

    }
}

int main(){
    entrada();
    saida();

    return 0;
}