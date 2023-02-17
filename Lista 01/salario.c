/*Escreva um algoritmo para ler o salário mensal e o percentual de reajuste. Calcular e escrever o
valor do novo salário.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, reajuste, novo_salario, aumento;

    printf("Digite o salário atual: ");
    scanf("%f", &salario);

    printf("Percentual do reajuste: ");
    scanf("%f", &reajuste);

    reajuste = reajuste/100;
    aumento = salario * reajuste; 
    novo_salario = salario + aumento;

    printf("Novo salário é: R$: %.2f", novo_salario);

    return 0;
}