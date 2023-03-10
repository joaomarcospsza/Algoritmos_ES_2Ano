#include <stdio.h>

/*Criar um algoritmo que leia os elementos de uma matriz inteira 10 X 10 e escreva
os elementos da diagonal principal.*/

int main()
{

    int matriz[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Informe o valor da matrize [%i][%i]: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("Matriz principal: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%i \n", matriz[i][i]); // linha e coluna
    }

    return 0;
}