#include <stdio.h>

int main()
{
    int num, soma = 0;

    soma = 0;

    do
    {
        printf("Digite um numero inteiro positivo (digite 0 para sair): ");
        scanf("%d", &num);
        soma += num;
    } while (num != 0);
    printf("A soma dos numeros e: %d\n", soma);

    return 0;
}
