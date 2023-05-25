#include<stdio.h>

float n1;
float n2;
float n3;
float mediafinal;

int main(){
	
	printf("Digita a nota 1:");
	scanf("%f",&n1);
	
	printf("Digita a nota 2:");
	scanf("%f",&n2);
	
	printf("Digita a nota 3:");
	scanf("%f",&n3);
	
	mediafinal= (n1 *2 + n2 * 3 + n3 * 5)/10;
	
	printf("A media do aluno final foi: %0.2f \n", mediafinal);
	
	
	return 0;
}
