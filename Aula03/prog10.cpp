#include<stdio.h>
/*

*/

int anoatual;
int anonasc;

int main(){
	
	int idade=0;
	
	printf("Digite seu ano de nascimento: \n");
	scanf("%d",&anonasc);
	printf("Digite o ano que nos estamos: \n");
	scanf("%d",&anoatual);
	
	idade = anoatual - anonasc;
	printf("Idade : %d \n", idade);
	
	if(idade >= 16){
		printf("Voce ja pode votar.\n");
	}else{
		printf("Voce ainda nao pode votar.");
	}
	
	
	return 0;
}

