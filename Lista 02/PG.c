/*Entrar com a razão de uma PG e o valor do 1º termo. Calcular e imprimir o 5o termo.
Formula: quintotermo = primeirotermo * razão (quintaposicao – 1)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float primeiroTermo, razao, quintoTermo;
    int posicao = 5;

    printf("Digite o primeiro Termo: ");
    scanf("%f", &primeiroTermo);

    printf("Digite a razao: ");
    scanf("%f", &razao);

    quintoTermo = primeiroTermo * razao * (posicao-1);

    printf("O quinto termo da PG e: %.2f", quintoTermo);

    return 0;

}
