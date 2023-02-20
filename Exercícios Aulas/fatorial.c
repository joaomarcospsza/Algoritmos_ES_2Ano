#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fatorial *= i;
    }

    printf("O fatorial de %d e: %d", num, fatorial);
    return 0;
}
