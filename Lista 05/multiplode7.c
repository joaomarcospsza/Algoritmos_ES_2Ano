#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor[10], i, cont = 0;

    for (i = 0; i < 10; i++)
    {
       printf("Informe o %i valor: ", i+1);
       scanf("%i", &valor[i]);

       if(valor[i] % 7 == 0){
            cont++;
        }
    }

    printf("Existem %i numeros multiplos de 7.", cont);
    
    return 0;
}
