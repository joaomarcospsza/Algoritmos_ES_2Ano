/*Escreva um programa em C para ler as notas da 1a. e 2a. avaliações de um aluno, calcular e
imprimir a média semestral. Faça com que o algoritmo só aceite notas válidas (0 a 10). Cada
nota deve ser validada separadamente*/

#include <stdio.h>

int main (void) {
	float media, x, y;
	
	printf("NOTAS DA 1 AVALIACAO E DA 2 AVALIACAO\n");
	do {
	
	printf("Nota da 1A: ");
	scanf("%f", &x);
	
	if(x > 10 || x < 0){
		printf("Nota invalida\n");
	}
	
	} while (x > 10 || x < 0);
	
	do {
	printf("Nota da 2A: ");
	scanf("%f", &y);
	
	if(y > 10 || y < 0){
		printf("Nota invalida\n");
	}
	
	} while (y > 10 || y < 0);
	
	media = (x + y) / 2;
	printf("%.2f", media);

	return 0;
}