#include <stdio.h>

int main()
{
    int i;
    float atu, num[5];

    for (i = 1; i <= 5; i++)
    {
        printf("Informe o preco do %i produto: ", i);
        scanf("%f", &atu);
        atu = (atu * 0.10) + atu;
        num[i] = atu;
    }
    printf("Novos valores dos produtos:\n");
    for (i = 1; i <= 5; i++)
    {
        printf("R$ %.2f\n", num[i]);
    }
    return 0;
}