#include<stdio.h>


int main(){
	
	int soma = 0;
	
	int i = 0;
	
	while(i<100){
		
		if(i % 3 == 0){
			soma = soma + i;
		}
		
		i = i + 1;
	}
	
	printf("Somatorio dos multiplos de 3: %d", soma);
	
	return 0;
}
