#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10][50];
    float notas[10][4];
    int i, j;

    for (i = 0; i < 10; i++)
    {
        printf("Informe o nome do aluno %d: ", i+1);
        scanf("%s", &nome[i]);

        printf("Digite as notas bimestrais do aluno %d:\n", i + 1);
        for (j = 0; j < 4; j++)
        {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\nAlunos Reprovados ou Aprovados:\n");
    for (i = 0; i < 10; i++)
    {
        float media = (notas[i][0] + notas[i][1] + notas[i][2] + notas[i][3]) / 4.0;
        printf("%s - ", nome[i]);
        if (media >= 6.0)
        {
            printf("aprovado\n");
        }
        else
        {
            printf("reprovado\n");
        }
    }

    return 0;
}
