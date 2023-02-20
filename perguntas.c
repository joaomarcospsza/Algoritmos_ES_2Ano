#include <stdio.h>

int main()
{
    int idade, mulheresIdade = 0, homensAltura = 0;
    float altura;
    char sexo;

    while (1)
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        if (idade == 0)
        {
            break;
        }
        printf("Informe a altura (em metros): ");
        scanf("%f", &altura);
        printf("Digite o sexo (m ou f):");
        scanf(" %c", &sexo);
        printf("\n");

        if (sexo == 'f' && idade >= 20 && idade <= 35)
        {
            mulheresIdade++;
        }
        else if (sexo == 'm' && altura > 1.80)
        {
            homensAltura++;
        }
    }

    printf("Mulheres entre 20 e 35 anos: %d\n", mulheresIdade);
    printf("Homens com altura superior a 1.80m: %d\n", homensAltura);

    return 0;
}
