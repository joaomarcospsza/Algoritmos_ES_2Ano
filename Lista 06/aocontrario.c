#include <stdio.h>

int main()
{

    int vet[30], invert[30];

    printf("Digite os 30 valores inteiros: ");
    for (int i = 0; i < 30; i++)
    {
        scanf("%i", &vet[i]);
    }

    for (int i = 0, j = 29; i < j; i++, j--)
    {
        int temp = vet[i];
        vet[i] = vet[j];
        vet[j] = temp;
    }

    printf("O vetor invertido ficara: ");
    for (int i = 0; i < 30; i++)
    {
        printf("%i \n", vet[i]);
    }
}