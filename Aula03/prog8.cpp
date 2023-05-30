#include<stdio.h>
/*

*/

int macas;

int main(){
	
	float preco =0;
	float total = 0;
	
	printf("Digite quantas macas foram compradas: \n");
	scanf("%d",&macas);
	
	if(macas < 12){
		preco = 1.30;
	}else if(macas >= 12){
		preco = 1.00;
	}
	
	total = preco * macas;
	
	printf("O custo total da compra ficou de : %0.2f \n",total);
	
	return 0;
}

