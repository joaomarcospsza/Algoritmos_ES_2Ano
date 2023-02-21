#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CARROS 30

struct Carro
{
    char modelo[50];
    int ano;
    float preco;
    char placa[8];
};

int main()
{
    struct Carro carros[MAX_CARROS];

    // Pedir ao usuário que insira as informações para cada carro
    int num_carros;
    printf("Quantos carros estao a venda? ");
    scanf("%d", &num_carros);

    for (int i = 0; i < num_carros; i++)
    {
        printf("\nInsira as informacoes do carro %d:\n", i + 1);

        printf("Modelo: ");
        scanf("%s", carros[i].modelo);

        printf("Ano: ");
        scanf("%d", &carros[i].ano);

        printf("Preco: ");
        scanf("%f", &carros[i].preco);

        printf("Placa: ");
        scanf("%s", carros[i].placa);
    }

    // Encontrar o carro mais barato
    int indice_mais_barato = 0;
    for (int i = 1; i < num_carros; i++)
    {
        if (carros[i].preco < carros[indice_mais_barato].preco)
        {
            indice_mais_barato = i;
        }
    }

    // Exibir o modelo e ano do carro mais barato
    printf("\nO carro mais barato e o modelo %s do ano %d\n", carros[indice_mais_barato].modelo, carros[indice_mais_barato].ano);

    return 0;
}
