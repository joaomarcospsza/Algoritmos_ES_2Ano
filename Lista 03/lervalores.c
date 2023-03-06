/*Escreva um programa em C para ler 2 valores (se o segundo valor informado for ZERO
apresentará a seguinte mensagem "Valor inválido" e deverá ler um novo valor até que ele seja
um valor válido) e imprimir o resultado da divisão do primeiro pelo segundo. */


#include <stdio.h>

int main (void) {
	float div, x, y;
	
	printf ("Digite o Primeiro Valor: ");
	scanf("%f", &x);
	do {
		printf("Digite o Segundo valor: ");
		scanf("%f", &y);
		if (y == 0){
			printf("Valor invalido\n");
		}
	} while (y == 0);
	
	div = x/y;
	printf("%f", div);
	
	return 0;
}