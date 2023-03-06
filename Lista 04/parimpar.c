#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num[15], i;

    printf("Informe os 15 valores:\n");
    for (i = 0; i < 15; i++)
    {
        scanf("%i", &num[i]);
    }

    for (i = 0; i < 15; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("%i e par\n", num[i]);
        }
        else
        {
            printf("%i e impar\n", num[i]);
        }
    }

    return 0;
}
