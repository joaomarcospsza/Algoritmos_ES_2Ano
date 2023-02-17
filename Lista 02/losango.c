/*. Criar um programa em C que calcule e imprima a área de um losango.
Formula: (diagonal maior * diagonal menor) dividido por 2
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float area, diagonal_menor, diagonal_maior;

    printf("Informe a Diagonal Maior do losango: ");
    scanf("%f", &diagonal_maior);

    printf("Informe a Diagonal Menor do losango: ");
    scanf("%f", &diagonal_menor);

    area = (diagonal_maior * diagonal_menor)/2;

    printf("área = (%.0f * %.0f)/2 = %.2f", diagonal_maior, diagonal_menor, area);

    return 0;
}