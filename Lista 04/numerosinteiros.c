#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor1[5], vetor2[5], vetor_soma[5];
    int i;

    printf("Digite os valores do primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Informe os valores do segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 5; i++) {
        vetor_soma[i] = vetor1[i] + vetor2[i];
    }

    printf("Vetor soma:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor_soma[i]);
    }

    return 0;
}
