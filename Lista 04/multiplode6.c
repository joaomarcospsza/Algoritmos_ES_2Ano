#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num[8], i, count = 8;

    printf("Informe os valores");
    for (i = 0; i < count; i++)
    {
        scanf("%i", &num[i]);
    }

    for (i = 0; i < count; i++)
    {
        if(num[i] %6 == 0){
            printf("%i o numero e multiplo de 6: \n", num[i])
        }
    }

return 0;
}