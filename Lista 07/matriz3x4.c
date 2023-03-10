#include <stdio.h>

/*Entrar com valores para uma matriz 3 X 4. Gerar e imprimir uma matriz B que é o triplo da matriz A.*/

int main()
{

    int matriz_A[3][4], matriz_B[3][4] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Informe o valore da matriz [%i][%i]", i + 1, j + 1);
            scanf("%i", &matriz_A[i][j]);

            matriz_B[i][j] = 3 * matriz_A[i][j];
        }
    }

    printf("Matriz B (triplo da matriz A): \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i \n", matriz_B[i][j]);
        }
    }

    return 0;
}