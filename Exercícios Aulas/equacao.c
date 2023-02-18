#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float a, b, c, delta, x1, x2;

    printf("Digite o valor dos coeficientes a, b, c, respectivamente: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes sao: %.2f e %.2f", x1, x2);
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("Raiz: %.2f", x1);
    }
    else
    {
        printf("Nao ha Raizes reais.");
    }

    return 0;
}
