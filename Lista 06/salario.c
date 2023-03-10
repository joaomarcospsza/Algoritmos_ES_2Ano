#include <stdio.h>
int main()
{

    int salario[20];

    for (int cont = 0; cont < 20; cont++)
    {

        printf("Digite o %d valor:", cont + 1);
        scanf("%d", &salario[cont]);

        salario[cont] = salario[cont] * 1.08;
    }

    for (int cont = 0; cont < 20; cont++)
    {
        printf("O %d valor do reajuste e: R$:%d \n", cont + 1, salario[cont]);
    }

    return 0;
}