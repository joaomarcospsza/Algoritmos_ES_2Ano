#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ALUNOS 20
#define NUM_NOTAS 4

int main()
{
    char nomes[NUM_ALUNOS][50];
    float notas[NUM_ALUNOS][NUM_NOTAS];

    // Pedir ao usuário que insira as informações para cada aluno
    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        printf("Insira o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        for (int j = 0; j < NUM_NOTAS; j++)
        {
            printf("Insira a nota do aluno %d para o %d bimestre: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Encontrar o aluno com a maior nota no terceiro bimestre
    int indice_maior_nota = 0;
    for (int i = 1; i < NUM_ALUNOS; i++)
    {
        if (notas[i][2] > notas[indice_maior_nota][2])
        {
            indice_maior_nota = i;
        }
    }

    // Exibir o nome do aluno com a maior nota no terceiro bimestre
    printf("O aluno com a maior nota no terceiro bimestre e: %s\n", nomes[indice_maior_nota]);

    return 0;
}
