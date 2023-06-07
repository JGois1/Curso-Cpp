#include<stdio.h>
/*
Estrutura de comparação ( == )
Utilizado para verificar um conjunto de possibilidades finitas;

int, char -> variavel do switch 
switch(variavel){
		case'valor':
			break;
	}

Menu -> Controle de estoque 

*/

int opcao;

int main(){
	
	printf("Menu: \n");
	printf(" 1 - Adicionar produto: \n");
	printf(" 2 - Listar produtos: \n");
	printf(" 3 - Remover produto: \n");
	printf(" 4  - Atualizar produto: \n");
	scanf("%d",&opcao);	
	
	
	switch(opcao){
		
		case 1:
			printf("Produto foi adicionado com sucesso. \n");
			break;
			
		case 2:
			printf("Lista de produtos \n");
			break;
		case 3:
			printf("Produto foi removido com sucesso. \n");
			break;
		case 4:
			printf("Produto foi alterado com sucesso. \n");
			break;
		default:
			printf("Opcao invalida! \n");
			break;
	}
	
	return 0;
}
