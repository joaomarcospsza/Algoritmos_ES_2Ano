#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 10;
    int numeros[n];
    int soma = 0;
    float media;

    // Seed do gerador de números aleatórios
    srand(time(NULL));

    // Gera os números aleatórios e os soma
    for (int i = 0; i < n; i++)
    {
        numeros[i] = rand() % 100; // Gera um número aleatório entre 0 e 99
        soma += numeros[i];
    }

    // Calcula a média aritmética
    media = (float)soma / n;

    // Imprime os números e a média
    printf("Numeros aleatorios gerados: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numeros[i]);
    }
    printf("\nMedia aritmetica: %.2f\n", media);

    return 0;
}
