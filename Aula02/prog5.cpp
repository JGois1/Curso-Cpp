#include<stdio.h>

int anos;
int meses;
int dias;
int age;
int calc1;
int calc2;

int main(){
	//entrada de dados
	printf("Digite sua idade em anos:");
	scanf("%d",&anos);
	
	printf("Digite sua idade em meses");
	scanf("%d",&meses);
	
	printf("Digite sua idade em dias:");
	scanf("%d",&dias);
	//process
	calc1 = anos * 365;
	calc2 = meses * 30;
	age = calc1 + calc2 + dias;
	
	printf("dsaidjas: %d", age);
	return 0;
}
