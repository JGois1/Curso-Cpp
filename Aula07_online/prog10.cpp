#include<stdio.h>
/*
Uma empresa quer verificar se um empregado está qualificado para a aposentadoria 
ou não. Para estar em condições, um dos seguintes requisitos deve ser satisfeito:

 - Ter no mínimo 65 anos de idade.
 - Ter trabalhado no mínimo 30 anos.
 - Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
 
Com base nas informações acima, faça um algoritmo que leia: o ano
de seu nascimento e o ano de seu ingresso na empresa. O programa deverá 
escrever a idade e o tempo de trabalho do empregado e a mensagem 
'Requerer aposentadoria' ou 'Não requerer'.
*/

int nasc;
int ingresso;
int ANOATUAL = 2023;

void entrada(){
	printf("Digite o ano de seu nascimento: ");
	scanf("%d",&nasc);
	printf("Digite o ano em que vc entrou na empresa: "); 
	scanf("%d",&ingresso);
}

int CalcularIdade(){
	float idade =0;
	idade = 2023 - nasc;
	return idade;
}
int CalcularWorktime(){
	int worktime=0;
	worktime = 2023 - ingresso;
	return worktime;
}

void saida(){
	
	printf("Idade : %d \n",CalcularIdade());
	printf("Tempo de trabalho: %d \n", CalcularWorktime());
	
	if(CalcularWorktime() >= 30){
		printf("Voce esta apto a se aposentar.");
	}else if(CalcularIdade() >= 65){
		printf("Voce esta apto a se aposentar");
	}else if(CalcularIdade() >= 60 && CalcularWorktime() >= 25){
		printf("Voce esta apto a se aposentar");
	}else{
		printf("Nao pode aposentar.");
	}
}

int main(){
	
	entrada();
	saida();
	
	return 0;
}
