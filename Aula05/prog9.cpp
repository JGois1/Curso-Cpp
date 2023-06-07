#include<stdio.h>
/*
Escrva um proigrama que imprima
os numeros multiplos de 2 e 3 de 0 a 100.
*/
int main(){

	int i = 0;
	
	while(i<100){
		
		if(i % 2 == 0 && i % 3 ==0){
			printf("%d \n",i);
		}
		
		i = i + 1;
	}
	
	return 0;
}
