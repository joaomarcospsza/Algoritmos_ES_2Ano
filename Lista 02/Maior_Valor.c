/* Escreva um programa em C para ler 2 valores (considere que não serão informados valores
iguais) e escrever o maior deles. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2, maior;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    while (num1 == num2)
    {
        printf("Valores identicos.\n");
        printf("Por Favor, informe o primeiro valor novamente: ");
        scanf("%d", &num1);
    }

    if (num1 > num2)
    {
        maior = num1;
    }
    else
    {
        maior = num2;
    }

    printf("O maior valor e: %d\n", maior);
    return 0;
}
