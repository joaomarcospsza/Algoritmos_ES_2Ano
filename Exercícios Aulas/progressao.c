#include <stdio.h>
#include <stdlib.h>

int main() {
    float razao, primeirotermo, termo;
    int posicao, cont;

    printf("Digite a razão da PA: ");
    scanf("%f", &razao);

    printf("Digite o primeiro termo da PA: ");
    scanf("%f", &primeirotermo);

    printf("Digite o número de termos da PA: ");
    scanf("%d", &posicao);

    for (cont = 0; cont <= posicao; cont++) {
        termo = primeirotermo + cont * razao;
        printf("%.0f ", termo);
    }

    return 0;
}