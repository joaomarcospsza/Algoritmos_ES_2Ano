/*Escreva um algoritmo que calcule o diâmetro, a área e a circunferência de um círculo, sabendo
que o único dado disponível é o seu raio.
Diâmetro = 2 * Raio
Área = PI * Raio2
Circunferência= 2 * PI * Raio
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float raio, diametro, area, circunferencia;
    float pi = 3.14159265359;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    diametro = 2 * raio;
    area = pi * pow(raio, 2);
    circunferencia = 2 * pi * raio;

    printf("O diâmetro do círculo é: %.2f\n", diametro);
    printf("A área do círculo é: %.2f\n", area);
    printf("A circunferência do círculo é: %.2f\n", circunferencia);

    return 0;
}