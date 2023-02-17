/*
Entrar com os valores dos catetos de um triângulo retângulo e imprimir a hipotenusa.
Formula: hipotenusa = raiz (b2 + c2);
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float hipotenusa, cateto_a, cateto_b;

    printf("Informe o valor do cateto A: ");
    scanf("%f", &cateto_a);

    printf("Informe o valor do cateto B: ");
    scanf("%f", &cateto_b);

    hipotenusa = sqrt((cateto_a * cateto_a) + (cateto_b*cateto_b));

    printf("A hipotenusa é: %.2f", hipotenusa);

    return 0;

}