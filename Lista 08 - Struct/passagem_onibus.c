#include <stdio.h>
#include <ctype.h>

/*Numa viação, uma passagem de ônibus inclui os seguintes campos: número,
código do local de partida, código do local de chegada, poltrona, tipo de assento (J
– janela e C – corredor). Faça a definição do registro relativo a esta passagem.
*/

struct passagem
{
    int numero;
    int codigo_partida;
    int codigo_chegada;
    int poltrona;
    char tipo_assento;
};

int main()
{

    struct passagem passagens[100];
    int opcao = 0, count_passagem = 0;

    while (opcao != 3)
    {
        printf("1 - Nova Passagem. \n");
        printf("2 - Lista de Passagens Registradas. \n");
        printf("3 - Sair. \n");
        printf("Opcao: ");
        scanf("%i", &opcao);
        printf("\n");

        while (opcao < 1 || opcao > 3)
        {
            printf("Opcao invalida. Por favor, insira uma opcao valida. \n");
            printf("1 - Nova Passagem. \n");
            printf("2 - Lista de Passagens Registradas. \n");
            printf("3 - Sair. \n");
            printf("Opcao: ");
            scanf("%i", &opcao);
            printf("\n");
        }

        if (opcao == 1)
        {
            printf("Numero: ");
            scanf("%i", &passagens[count_passagem].numero);

            printf("Codigo Partida: ");
            scanf("%i", &passagens[count_passagem].codigo_partida);

            printf("Codigo Chegada: ");
            scanf("%i", &passagens[count_passagem].codigo_chegada);

            printf("Poltrona: ");
            scanf("%i", &passagens[count_passagem].poltrona);

            printf("Tipo Assento ('J' janela e 'C' corredor): ");
            scanf(" %c", &passagens[count_passagem].tipo_assento);
            passagens[count_passagem].tipo_assento = toupper(passagens[count_passagem].tipo_assento);

            while (passagens[count_passagem].tipo_assento != 'J' && passagens[count_passagem].tipo_assento != 'C')
            {
                printf("Opcao invalida. \n");
                printf("Informe o tipo assento novamente ('J' janela e 'C' corredor): ");
                scanf(" %c", &passagens[count_passagem].tipo_assento);
                passagens[count_passagem].tipo_assento = toupper(passagens[count_passagem].tipo_assento);
            }

            printf("\nPassagem registrada com sucesso.\n");
            printf("\n");
            count_passagem++;
        }
        else if (opcao == 2)
        {
            if (count_passagem == 0)
            {
                printf("Nenhuma passagem encontrada. \n");
            }
            else
            {
                printf("Lista de Passagem: \n");
                for (int i = 0; i < count_passagem; i++)
                {
                    printf("Numero: %i, Codigo Partida: %i, Codigo Chegada: %i, Poltrona: %i, Tipo Passagem: %c \n", passagens[i].numero, passagens[i].codigo_partida, passagens[i].codigo_chegada, passagens[i].poltrona, passagens[i].tipo_assento);
                    printf("\n");
                }
            }
        }
        else if (opcao == 3)
        {
            printf("Saindo do Programa..");
            break;
        }
    }

    return 0;
}
