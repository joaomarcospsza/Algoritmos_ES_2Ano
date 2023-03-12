#include <stdio.h>
#include <ctype.h>

struct imovel
{
    int numero_cadastro;
    int valor_imposto;
    int meses_atrasados;
    int valor_a_pagar;
};

int main()
{
    struct imovel imoveis[100];
    int count_imovel = 0, opcao = 0;
    char entrada[100];
    int valido = 1;
    int valor_multa = 10;

    while (opcao != 2)
    {
        printf("1 - Calcular nova Multa. \n");
        printf("2 - Sair. \n");
        printf("Opcao: ");
        scanf("%i", &opcao);
        printf("\n");

        while (opcao < 1 || opcao > 2)
        {
            printf("Opcao invalida. Por favor, insira uma opcao valida. \n");
            printf("1 - Calcular nova Multa. \n");
            printf("2 - Sair. \n");
            printf("Opcao: ");
            scanf("%i", &opcao);
            printf("\n");
        }

        if (opcao == 1)
        {
            do
            {
                printf("Numero Cadastro: ");
                scanf("%s", entrada);
                valido = 1;
                for (int i = 0; entrada[i] != '\0'; i++)
                {
                    if (!isdigit(entrada[i]))
                    {
                        valido = 0;
                        break;
                    }
                }

                if (!valido)
                {
                    printf("Entrada invalida. Digite apenas numeros. \n");
                }

            } while (!valido);
            imoveis[count_imovel].numero_cadastro = atoi(entrada);

            printf("Valor Imposto: ");
            scanf("%i", &imoveis[count_imovel].valor_imposto);

            printf("Quantos Meses Atrasados? ");
            scanf("%i", &imoveis[count_imovel].meses_atrasados);

            imoveis[count_imovel].valor_a_pagar = imoveis[count_imovel].meses_atrasados * valor_multa;

            printf("Valor a Pagar: R$ %i\n", imoveis[count_imovel].valor_a_pagar);

            count_imovel++;
        }
        else if (opcao == 2)
        {
            printf("Saindo do Programa... \n");
            break;
        }
    }

    return 0;
}
