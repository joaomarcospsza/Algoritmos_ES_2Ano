#include <stdio.h>

int main()
{
    int conjunto1[20], conjunto2[20], elementos_comuns[20], i, j, c = 0;

    printf("Digite os elementos do primeiro conjunto:\n");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &conjunto1[i]);
    }

    printf("Digite os elementos do segundo conjunto:\n");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &conjunto2[i]);
    }

    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            if (conjunto1[i] == conjunto2[j])
            {
                elementos_comuns[c] = conjunto1[i];
                c++;
                break;
            }
        }
    }

    printf("Os elementos em comum entre os conjuntos sao:\n");
    for (i = 0; i < c; i++)
    {
        printf("%d\n", elementos_comuns[i]);
    }
    return 0;
}
