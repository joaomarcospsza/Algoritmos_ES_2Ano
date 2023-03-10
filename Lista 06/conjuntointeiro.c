#include <stdio.h>

int main() {
    int conju1[20], conju2[20], comun[20] = {0}; // inicializando vetor comun com 0 em todas as posições
    
    for (int cont = 0; cont < 20; cont++) {
        printf("Digite o %d valor do primeiro vetor: ", cont+1);
        scanf("%d", &conju1[cont]);
    }

    for (int cont = 0; cont < 20; cont++) {
        printf("Digite o %d valor do segundo vetor: ", cont+1);
        scanf("%d", &conju2[cont]);
    }

    // encontrando os elementos comuns e armazenando no vetor comun
    for (int cont1 = 0; cont1 < 20; cont1++) {
        for (int cont2 = 0; cont2 < 20; cont2++) {
            if (conju1[cont1] == conju2[cont2]) {
                comun[cont1] = conju1[cont1];
            }
        }
    }

    // exibindo os valores que se repetem
    printf("Os valores que se comunem são: \n");
    for (int cont = 0; cont < 20; cont++) {
        if (comun[cont] != 0) { // exibindo apenas valores diferentes de zero
            printf("%d \n", comun[cont]);
        }
    }

    return 0;
}
