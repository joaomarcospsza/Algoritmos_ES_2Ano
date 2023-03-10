#include <stdio.h>
#include <math.h>

int main()
{

    int v[10], w[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        printf("Informe o %i valor do vetor v:\n: ", i + 1);
        scanf("%i", &v[i]);
        w[i] = pow(v[i], 2);
    }

    printf("Vetor w com os quadrados dos elementos de v:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("O %i valor fica: %i \n", i, w[i]);
    }

    return 0;
}