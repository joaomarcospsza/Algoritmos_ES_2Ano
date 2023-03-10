#include <stdio.h>

/*Entrar com valores para uma matriz A 4 X 4 e para uma matriz B 4 X 4. Gerar e imprimir a matriz soma 4 X 4.*/

int main()
{
    int matrizA[4][4], matrizB[4][4], soma_matrizes[4][4] = {0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Informe o valor da matriz A [%i][%i]: ", i + 1, j + 1);
            scanf("%i", &matrizA[i][j]);

            printf("Informe o valor da matriz B [%i][%i]: ", i + 1, j + 1);
            scanf("%i", &matrizB[i][j]);

            soma_matrizes[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Soma: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i \n", soma_matrizes[i][j]);
        }
    }

    return 0;
}

