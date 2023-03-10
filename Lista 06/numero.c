#include <stdio.h>

int main()
{

    int numero[10];

    for (int cont = 0; cont < 10; cont++)
    {

        printf("Digite o %d valor:", cont + 1);
        scanf("%d", &numero[cont]);
    }

    for (int cont = 0; cont < 10; cont++)
    {
        printf("O %d valor e: %d \n", cont + 1, numero[cont]);
    }

    return 0;
}