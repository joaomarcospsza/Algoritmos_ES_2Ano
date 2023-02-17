/*Ler dois números inteiros e imprimir a soma.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, soma;

    printf("Informe o valor de 'X': ");
    scanf("%i", &x);

    printf("Informe o  valor de 'Y': ");
    scanf("%i", &y);

    soma = x + y;

    printf("Soma: %i + %i = %i", x, y, soma);

    return 0;
}