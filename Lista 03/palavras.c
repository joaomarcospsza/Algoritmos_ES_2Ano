/*Faça um programa em C que leia palavras digitadas pelo usuário e que, para cada uma delas,
imprima a frase "Você digitou a palavra: xxxx" (onde "xxxx" é a palavra digitada). O programa
deve repetir essas operações até o usuário digitar a palavra "fim". O programa não deve
imprimir a frase de resposta quando a palavra digitada for "fim". */

#include <stdio.h>
#include <string.h>

int main (void) {
	char frase[200]; //Variável
	do {
		printf("Escreva uma frase: ");
		scanf("%s",  &frase);
		printf("Voce digitou a palavra: %s\n", frase);
	} while (strcmp(frase, "fim")); //strcmp (compara a variável com a string)
	printf("Voce encerrou o codigo.");
}