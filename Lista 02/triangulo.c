/*Dado 3 valores (X, Y, Z) que representam os lados de um triangulo, verifique se estes valores
formam um triangulo eqüilátero, isósceles ou escaleno.
Dica: o triangulo eqüilátero tem os três lados iguais, isósceles dois lados iguais e escaleno os três
lados diferentes.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, y, z;
    
    printf("Digite os valores de X, Y e Z: ");
    scanf("%d %d %d", &x, &y, &z);

    //verifica se forma um triangulo
    if (x < y + z && y < x + z && z < x + y) {
        //equilátero
        if (x == y && y == z) {
            printf("Triangulo equilatero\n");
        }
        //isósceles
        else if (x == y || x == z || y == z) {
            printf("Triangulo isosceles\n");
        }
        // escaleno
        else {
            printf("Triangulo escaleno\n");
        }
    }
    else {
        printf("Nao formam um triangulo\n");
    }
    
    return 0;
}
