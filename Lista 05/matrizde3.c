#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3];
    int i, j, x;

    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Matriz original:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Matriz multiplicada por %d:\n", x);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j] * x);
        }
        printf("\n");
    }

    return 0;
}
