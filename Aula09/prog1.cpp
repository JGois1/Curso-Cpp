#include<stdio.h>
/*
Escreva um programa que leia um vetor de 5 posições.
A) Imprimir os valores lidos.

Ordenação 
É o processo de organização da informação dentro de
um vetor, matriz ou arquivo.

Método bolha
Consiste em fazer uma serie de comparações sucessivas até que o 
valor selecionado alcance a posição desejada.

            0  1  2  3  4 
            23 38 10 45 17      10 17 23 38 45
                       > (v)
0 - 4       23 38 10 17 45      10 23 30 17 45 
1 - 3               > (f)                  > (F)
2 - 2       23 38 10 17 45      10 23 30 17 45 
3 - 1            > (v)                  > (V)
4 - 0       23 10 30 17 45      10 23 17 30 45 
              > (V)                  >(F)

            10 23 30 17 45      10 23 30 17 45 
*/

int const TAM= 5;
int numeros[TAM];

void entrada(){
     for(int i = 0; i < TAM; i++){
         printf("Digite um numero: ");
         scanf("%d", &numeros[i]);
     }
}

void saida(){
    for(int i  = 0; i < TAM; i++){
         printf("%d | ", numeros[i]);
    }
}

void ordenacao(){

    int aux = 0;

    // 0,1,2,3 
    for(int j = 0; j < TAM-1; j++){

        for(int i = TAM-1; i >j; i--){
               if(numeros[i-1] >  numeros[i]){
                    aux = numeros[i];
                    numeros[i] = numeros[i-1];
                    numeros[i-1] = aux;

               }
        }

    }


}

int main(){
    entrada();
    ordenacao();
    saida();

    return 0;
}