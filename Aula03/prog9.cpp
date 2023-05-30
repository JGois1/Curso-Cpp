#include<stdio.h>
/*
Ler as notas da primeira e segunda . Avaliações de um aluno.
Calcular a media aritimetica simples 
e escrever uma mensagem que diga se o aluno foi ou não aprovado 
(considerar que nota igual ou maior que 6 o aluuno é aprovado).
Ecrever também a média calculada.
*/
float n1;
float n2;
int main(){
	
	float media=0;
	
	printf("Digite sua primeira nota: \n");
	scanf("%f",&n1);
	printf("Digite sua segunda nota: \n");
	scanf("%f",&n2);
	
	media = (n1 + n2)/2;
	printf("Sua nota foi: %0.2f \n",media);
	
	if(media >= 6.0){
		printf("Parabens, voce foi aprovado!");
	}else{
		printf("Infelizmente voce foi reprovado...");
	}
	
	
	return 0;
}

