#include<stdio.h>

float valorhora;
int nhoras;

int main(){
	
	float salario = 0;
	
	printf("Digite o valor da hora :");
	scanf("%f",&valorhora);
	printf("Digite o numero de horas :");
	scanf("%d",&nhoras);
	
	if(nhoras <= 160){
		salario = valorhora * nhoras;
	}else{
		salario = ((nhoras-160)*(valorhora*1.5)) + (160 * valorhora);
	}
	printf("Salario : %0.2f \n ", salario);
	return 0;
}
