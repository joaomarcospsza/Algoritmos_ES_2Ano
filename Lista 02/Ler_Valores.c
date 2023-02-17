/*Faça um programa em C que leia 5 valores e determine o menor deles.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, count = 5, numero, menor = 0;

    for (i = 0; i < count; i++)
    {
        printf("Informe o valor do %d numero: ", i+1);
        scanf("%d", &numero);

        if(numero > menor){
            menor = numero;
        }  
    }
    printf("O maior numero digitado foi: %d", menor);
    return 0;
}
