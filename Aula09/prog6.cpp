#include<stdio.h>
/*
Struct 
Utilizado para agrupar variaveis de tipos diferentes. 

Escreva um programa que leia os dados de uma pessoa.
(nome, idade, sexo)
A) Imprimir os valores lidos.

*/

struct Pessoa{
    char nome[20];
    int idade;
    char sexo;
};

// Onde p é uma variavel do tipo struct Pessoa
struct Pessoa p;

void entrada(){
    printf("Digite o nome : ");
    scanf("%s", &p.nome);

    printf("Digite a idade : ");
    scanf("%d", &p.idade);

    printf("Digite o sexo com (m) , (f) ou (o) : ");
    scanf("%s", &p.sexo);
    
}

void saida(){
    printf("Pessoa de nome %s e idade %d e sexo %c \n", 
    p.nome, p.idade, p.sexo);

}


int main(){
    entrada();
    saida();

    return 0;
}