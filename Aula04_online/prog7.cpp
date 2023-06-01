#include<stdio.h>

int nascimento;
int ingresso;

int main(){
	
	int idade = 0;
	int data = 0;
	
	printf("Digite seu ano de nascimento: ");
	scanf("%d",&nascimento);
	printf("Digite o ano que entrou na impresa: ");
	scanf("%d",&ingresso);
	
	idade = 2023 - nascimento;
	data = 2023 - ingresso;
	
	printf("sua idade eh : %d \n", idade);
	printf("seu tempo na empresa eh  : %d \n", data);
	
	if(idade >= 65){
		printf("Pode aposentar.");
	}else if(data >= 30){
		printf("Pode aposentar.");
	}else if(idade >= 60 && data >= 25){
		printf("Pode aposentar.");
	}else{
		printf("Nao pode aposentar.");
	}
	
	return 0;
}
