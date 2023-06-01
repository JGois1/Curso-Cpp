#include<stdio.h>

float a;
float b;
float c;

int main(){
	
	printf("Digite um lado do triangulo: ");
	scanf("%f",&a);
	printf("Digite um lado do triangulo: ");
	scanf("%f",&b);
	printf("Digite um lado do triangulo: ");
	scanf("%f",&c);
	
	if(a < (b + c) && b < (a + c) && c < (a + b)){
		printf("eh um triangulo \n");
		
		if(a==b && a ==c){
			printf("Equilatero. \n");
		}else if(a != b && b != c && a != c){
			printf("Escaleno. \n");
		}else{
			printf("Isosceles. \n");
		}
	}else{
		printf("Nao eh um triangulo");
	}
	
	
	return 0; 
}
