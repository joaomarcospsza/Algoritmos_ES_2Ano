#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dias = 30;
    float temperatura[dias], temperatura_media = 0, temperatura_maxima = -273.15; // inicializa temperatura máxima com valor mínimo possível

    // srand(time(NULL)); // inicializa a semente para a geração de números aleatórios

    for (int i = 0; i < dias; i++)
    {
        printf("Digite a temperatura media do dia %d: ", i + 1);
        scanf("%f", &temperatura[i]);

        temperatura_media += temperatura[i]; // soma a temperatura do dia para calcular a média posteriormente

        if (temperatura[i] > temperatura_maxima)
        {
            temperatura_maxima = temperatura[i]; // verifica se a temperatura do dia é a mais alta do mês
        }
    }

    temperatura_media /= dias; // calcula a temperatura média do mês

    printf("Temperatura media do mes: %.2f\n", temperatura_media);
    printf("Temperatura mais alta do mes: %.2f\n", temperatura_maxima);

    return 0;
}
