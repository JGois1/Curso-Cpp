#include<stdio.h>
/*
Variaveis:
S�o estruturas utilizadas para guardar um valor em memoria. 
defina-se primeiro o ntipo e depois o nome.
*/

//variavel do inteiro de nome num1
// obs: ela foi apenas declarada
int num1;

int main(){
	
	//inicializar a variavel (atribui��o -> =)
	num1 = 10;
	
	//criando outra variavel (float) decimal de nome num2
	//variavel declarada e nomeada.
	float num2 = 15.4;
	
	//O %d e %f s�o feitos para a maquina saber onde exibir o resultado da variavel. f para float e d para int
	printf("O valor do numero inteiro: %d \n", num1);
	printf("O valor do numero float: %f", num2);
	
		
	return 0;
}


