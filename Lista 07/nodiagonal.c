#include <stdio.h>

int main()
{
    int matriz[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Informe o valor da matriz [%i][%i]: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("Elementos da matriz (exceto diagonal principal):\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i != j)
            {
                printf("%i \n", matriz[i][j]);
            }
        }
    }
    return 0;
}
