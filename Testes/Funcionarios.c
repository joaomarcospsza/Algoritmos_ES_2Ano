#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FUNCIONARIOS 50
#define MAX_NOME 50
#define MAX_SETOR 30

struct Funcionario
{
    char nome[MAX_NOME];
    int idade;
    float salario;
    char setor[MAX_SETOR];
};

int main()
{
    struct Funcionario funcionarios[MAX_FUNCIONARIOS];
    int num_funcionarios;

    // Pedir ao usuário que insira as informações para cada funcionário
    printf("Quantos funcionarios ha na empresa (maximo %d)? ", MAX_FUNCIONARIOS);
    scanf("%d", &num_funcionarios);

    if (num_funcionarios > MAX_FUNCIONARIOS)
    {
        printf("O numero de funcionarios excede o limite maximo de %d\n", MAX_FUNCIONARIOS);
        return 1;
    }

    for (int i = 0; i < num_funcionarios; i++)
    {
        printf("\nInsira as informacoes do funcionario %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", funcionarios[i].nome);

        printf("Idade: ");
        scanf("%d", &funcionarios[i].idade);

        printf("Salario: ");
        scanf("%f", &funcionarios[i].salario);

        printf("Setor: ");
        scanf("%s", funcionarios[i].setor);
    }

    // Encontrar o setor com maior salário médio
    float maior_salario_medio = 0;
    char setor_maior_salario_medio[MAX_SETOR];

    for (int i = 0; i < num_funcionarios; i++)
    {
        // Encontrar a soma dos salários para cada setor
        float soma_salarios = 0;
        int num_funcionarios_setor = 0;
        for (int j = 0; j < num_funcionarios; j++)
        {
            if (strcmp(funcionarios[j].setor, funcionarios[i].setor) == 0)
            {
                soma_salarios += funcionarios[j].salario;
                num_funcionarios_setor++;
            }
        }

        // Calcular a média salarial do setor
        float media_salario = soma_salarios / num_funcionarios_setor;

        // Atualizar o setor com maior salário médio, se necessário
        if (media_salario > maior_salario_medio)
        {
            maior_salario_medio = media_salario;
            strcpy(setor_maior_salario_medio, funcionarios[i].setor);
        }
    }

    // Exibir o setor com maior salário médio
    printf("\nO setor com maior salario medio e: %s\n", setor_maior_salario_medio);

    return 0;
}
