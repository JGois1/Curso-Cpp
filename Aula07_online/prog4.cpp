#include<stdio.h>
/*
Ler o ano atual e ano de nascimento de uma pessoa. Escrever 
uma mensagem que diga se ela poderá ou não votar este ano(não é necessário 
considerar o mes em que a pessoa nasceu
*/

int nasc;
int atual; 

void entrada(){
	printf("Digite o ano do seu nascimento: ");
	scanf("%d",&nasc);
	printf("Digite o ano em que vc esta vendo isto: ");
	scanf("%d",&atual);
}

int CalcularIdade(){
	int idade = 0;
	idade = atual - nasc;
	return idade;
}
void saida(){
	int idade = CalcularIdade();
	printf("Idade: %d \n", idade);
	if(idade >= 18){
		printf("Voce pode votar. \n");
	}else if(idade >= 16 && idade <= 18){
		printf("Voce pode votar, porem nao eh obrigado a isto.");
	}else{
		printf("Voce nao pode votar. \n");
	}
}

int main(){
	
	entrada();
	saida();
	
	return 0;
}
