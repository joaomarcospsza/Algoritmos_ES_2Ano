#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan
int main(void) {

	float g = 7.10, a = 6.05, d = 6.10, abastecido, total;
	char tipo;

    printf("Informe o tipo de combustivel: (g/a/d) ");
    scanf("%c", &tipo);
    printf("Infrme a quantidade de combustivel aplicada:");
    scanf("%f", &abastecido);

    switch (tipo){
    	case 'a':
    		total = a * abastecido;
    		break;
    		
    	case 'g':
    		total = g * abastecido;
			break;
			
		case 'd':
			total = d * abastecido;
			break;
			
		default:
			printf("Tipo de combustivel invalido!");
		}

	printf("O total gasto com combustivel eh: %.2f\n\n", total);
    return 0;
}