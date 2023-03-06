/*. Ler 10 valores, calcular e escrever a média aritmética destes valores.*/

#include <stdio.h>

int main(void){
	int i, n;
	float a, j;
	for(i = 0;i < 10; i++) {
		printf("Digita: ");
		scanf("%d", &n);
		j = j + n;
	}
	a = j / i;
	printf("ai: %.2f\n", a);
	return 0;
}