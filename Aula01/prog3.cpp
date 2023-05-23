#include<stdio.h>
/*
Variaveis são estruturas utilizadas para guardar um valor em memoria.
defina-se primeiro o tipo e depois o nome

Tipos de dados 
char -> caracteres -> 'A' ('' para apenas letras) "Hello" ("" para palavras) --> %c
bool -> Lógico -> (true/flase) ou (1/0) --> %d
*/

int main(){
	
	//variavel do tipo caracteres de nome letra
	char letra = 'B';
	
	//variavel do tipo bool de nome logico
	bool logico = true;
	
	printf("O valor do caractere : %c \n", letra);
	printf("O valor logico : %d \n", logico);
	
	return 0;
}
