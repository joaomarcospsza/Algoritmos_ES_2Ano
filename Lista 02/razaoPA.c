/*
. Entrar com a razão de uma PA e o valor do 1º termo. Calcule e imprima o 10o termo.
Formula: decimotermo = primeirotermo + (posição desejada – 1) * razão
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float razao,  primeirotermo, decimotermo;

    printf("Digite o valor do 1º termo: ");
    scanf("%f", &primeirotermo);

    printf("Digite a razão: ");
    scanf("%f", &razao);

    decimotermo = primeirotermo + (10 - 1) * razao;
    printf("O decimo termo sera: %.0f", decimotermo);

    return 0;

}