#include <stdio.h>

int main()
{

    int matriz[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite os valores: [%i][%i]", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("Matriz completa: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i \n", matriz[i][j]);
        }
    }

    return 0;
}