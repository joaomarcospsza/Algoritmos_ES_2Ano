/* Elabore um programa em C que peça três números ao utilizador, e que indique qual dos três é o
maior.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2, num3, maior;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);

    while (num1 == num2 || num2 == num3 || num3 == num1)
    {
        printf("Um dos três valores e igual ao outro.\n");
        if(num1 == num2){
            printf("Por Favor, informe o primeiro valor novamente: ");
            scanf("%d", &num1);
        }else if(num2 == num3){
            printf("Por Favor, informe o segundo valor novamente: ");
            scanf("%d", &num2);
        }else{
            printf("Por Favor, informe o terceiro valor novamente: ");
            scanf("%d", &num3);
        }
    }

    if(num1 > num2 && num1 > num3)
    {
        maior = num1;
    }
    else if(num2 > num3 && num2 > num1)
    {
        maior = num2;
    }else{
        maior = num3;
    }

    printf("O maior valor e: %d\n", maior);
    return 0;
}
