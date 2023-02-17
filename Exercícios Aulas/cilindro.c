#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan

int main() {
	float r, a, v;
		
//  & indica o endereço de memoria (demo: &a)
    printf("Informe a altura do cilindro: ");
    scanf("%f", &a);
    printf("Informe o raio do cilindro: ");
    scanf("%f", &r);
    v = a * 3.14 * (r * r);
    printf("O volume do cilindro eh: %f\n\n", v);
    return 0;
}