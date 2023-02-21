
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
int main()
{
    int matriz[10][10] = {0}; // Inicializar a matriz com valores zero

    // Pedir ao usuário que insira os valores na matriz
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            int valor;
            printf("Insira o valor para a posicao (%d, %d): ", i, j);
            scanf("%d", &valor);
            while (valor < 0)
            {
                printf("O valor deve ser positivo, por favor insira novamente: ");
                scanf("%d", &valor);
            }
            matriz[i][j] = valor;
        }
    }

    // Calcular a média
    int soma = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            soma += matriz[i][j];
        }
    }
    float media = soma / 100.0;

    // Encontrar o valor máximo
    int maior = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }

    // Exibir a média e o valor máximo
    printf("A media dos valores e %.2f\n", media);
    printf("O maior valor digitado e %d\n", maior);

    return 0;
}
*/

int main() {
    int matriz[10][10] = {0};

    // Gerar valores aleatórios para preencher a matriz
    srand(time(NULL)); // Inicializar o gerador de números aleatórios
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 100; //número aleatório entre 0 e 99
        }
    }

    // media
    int soma = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            soma += matriz[i][j];
        }
    }
    float media = soma / 100.0;

    // Maior
    int maior = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    // Exibir a média e o valor máximo
    printf("A media dos valores e %.2f\n", media);
    printf("O maior valor gerado e %d\n", maior);

    return 0;
}
