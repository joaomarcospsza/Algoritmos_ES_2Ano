/* Escreva um programa em C que imprima os dez primeiros números inteiros maiores que 100. */

#include <stdio.h>

int main() {
    int count = 0;
    int num = 101;

    while (count < 10) {
        printf("%d\n", num);
        num++;
        count++;
    }

    return 0;
}
