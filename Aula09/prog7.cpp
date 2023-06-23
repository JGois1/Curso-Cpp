#include<stdio.h>
/*
Escreva um programa que leia os dados de um
produto.
(nome, preço e quantidade)

A) Calcular o total a pagar.

B) Calcular um desconto de 10% caso o total seja maior que 500, senão aplicar
um desconto de 5%.

C) Imprimir os dados  e o total calculado.

*/

struct Produto{
    char nome[20];
    int quantidade;
    float preco;
};

struct Produto p;

void entrada(){
    printf("Digite o nome  : ");
    scanf("%s", &p.nome);

    printf("Digite o preço  : ");
    scanf("%f", &p.preco);
    
    printf("Digite a quantidade  : ");
    scanf("%d", &p.quantidade);
    
}


float calcularTotal(){
    float total=  0;
    total = p.preco * p.quantidade;
    return total;
}

float calcularDescontoTotal(){
    float desconto = 0;
    float total = calcularTotal();
    if(total > 500){
         desconto = (total * 10)/100;
    }else{
        desconto = (total * 5 )/100;
    }

    return desconto;
}

float calcularTotalNovo(){
    float totalNovo = 0;
    totalNovo = calcularTotal() - calcularDescontoTotal();
    return totalNovo;
}

void saida(){
    printf("Produto de Nome %s , preço %0.2f e quantidade %d \n",
    p.nome, p.preco, p.quantidade);
    printf("Total a pagar : %0.2f \n", calcularTotal());
    printf("Total a pagar com desconto : %0.2f \n", calcularTotalNovo());

}


int main(){
    entrada();
    saida();

    return 0;
}