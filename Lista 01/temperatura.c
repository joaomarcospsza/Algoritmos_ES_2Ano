/*
Elabore um Algoritmo para converter uma temperatura em graus Celsius para Fahrenheit (ºF=32
+ 1.8ºC).
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float celsius, fahrenheit;

    printf("Informe a  temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = 32 + 1.8 * celsius;

    printf("A temperatura em Fahrenheit é: %.2f\n",fahrenheit);

    return 0;
}