/*Ler dois números inteiros e imprimir a soma.*/
/*Entrar com dois números e imprimir a média aritmética*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, media;

    printf("Primeiro número: ");
    scanf("%i", &num1);

    printf("Primeiro número: ");
    scanf("%i", &num2);

    media = (num1 + num2) / 2;

    printf("Media: (%i + %i)/2 = %i", num1, num2, media);

    return 0;
}