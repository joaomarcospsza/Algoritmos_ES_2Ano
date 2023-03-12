#include <stdio.h>
#include <ctype.h>
#include <math.h>

/*Defina um registro para armazenar os seguintes dados de clientes de um banco:
nome do cliente, código da agência, data de nascimento (formato dd/mm/aaaa),
saldo atual e situação (cliente ‘V’IP ou ‘N’ORMAL). */

struct cliente
{
    char nome[50];
    int codigo_agencia;
    int dia, mes, ano;
    float saldo_atual;
    char situacao;
};

int main()
{
    struct cliente clientes[100];
    int opcao = 0, count_cli = 0;
    char entrada[100];
    int valido = 1;

    while (opcao != 3)
    {
        printf("1 - Registrar novo cliente \n");
        printf("2 - Lista de Clientes \n");
        printf("3 - Sair \n");
        printf("Opcao: ");
        scanf("%i", &opcao);
        printf("\n");

        while (opcao < 1 || opcao > 3)
        {
            printf("Opcao invalida. Por favor, insira uma opcao valida: \n");
            printf("1 - Registrar novo cliente \n");
            printf("2 - Lista de Clientes \n");
            printf("3 - Sair \n");
            scanf("%i", &opcao);
            printf("\n");
        }

        if (opcao == 1)
        {
            printf("Nome Cliente: ");
            scanf("%s", clientes[count_cli].nome);

            // VALIDANDO APENAS NÚMEROS PARA O CODIGO DA AGENCIA
            do
            {
                printf("Codigo da Agencia: ");
                scanf("%s", entrada);

                valido = 1;
                for (int i = 0; entrada[i] != '\0'; i++)
                {
                    if (!isdigit(entrada[i]))
                    {
                        valido = 0; // encontrou um caractere não numérico
                        break;      // interrompe o loop
                    }
                }

                if (!valido)
                {
                    printf("Entrada invalida. Digite apenas numeros.\n");
                }

            } while (!valido);
            clientes[count_cli].codigo_agencia = atoi(entrada); // converte a entrada para um inteiro

            printf("Data Nascimento (DIA): ");
            scanf("%i", &clientes[count_cli].dia);
            printf("Data Nascimento (MES): ");
            scanf("%i", &clientes[count_cli].mes);
            printf("Data Nascimento (ANO): ");
            scanf("%i", &clientes[count_cli].ano);

            while (clientes[count_cli].dia > 31 || clientes[count_cli].mes > 12 || clientes[count_cli].ano > 2023 || clientes[count_cli].dia < 1 || clientes[count_cli].mes < 1 || clientes[count_cli].ano < 1900)
            {
                if (clientes[count_cli].dia > 31 || clientes[count_cli].dia < 1)
                {
                    printf("Dia invalido, informe novamente: ");
                    scanf("%i", &clientes[count_cli].dia);
                }
                else if (clientes[count_cli].mes > 12 || clientes[count_cli].mes < 1)
                {
                    printf("Mes invalido, informe novamente: ");
                    scanf("%i", &clientes[count_cli].mes);
                }
                else if (clientes[count_cli].ano > 2023 || clientes[count_cli].ano < 1900)
                {
                    printf("Ano invalido, informe novamente: ");
                    scanf("%i", &clientes[count_cli].ano);
                }
            }

            printf("Saldo atual: ");
            scanf("%f", &clientes[count_cli].saldo_atual);

            printf("Situacao (cliente 'V'(VIP) ou 'N'(NORMAL)): ");
            scanf("%s", &clientes[count_cli].situacao);
            clientes[count_cli].situacao = toupper(clientes[count_cli].situacao);

            while (clientes[count_cli].situacao != 'V' && clientes[count_cli].situacao != 'N')
            {
                printf("Opcao invalida. \n");
                printf("Informe a 'situacao' novamente (cliente 'V'(VIP) ou 'N'(NORMAL))");
                scanf("%s", &clientes[count_cli].situacao);
                clientes[count_cli].situacao = toupper(clientes[count_cli].situacao);
            }

            switch (clientes[count_cli].situacao)
            {
            case 'V':
                printf("Sua situacao e de um cliente VIP.");
                break;

            case 'N':
                printf("Sua situacao e de um cliente NORMAL.");
                break;
            }

            printf("\n Cliente cadastrado com sucesso!\n");
            printf("\n");

            count_cli++;
        }
        else if (opcao == 2)
        {
            if (count_cli == 0)
            {
                printf("Nenhum cliente registrado. \n");
            }
            else
            {
                printf("Lista de Clientes: \n");
                for (int i = 0; i < count_cli; i++)
                {
                    printf("Cliente: %i, Nome: %s, Codigo Agencia: %i, Data nascimento: %i/%i/%i, Saldo Atual:R$%.2f, Situacao: %c \n", i + 1, clientes[i].nome, clientes[i].codigo_agencia, clientes[i].dia, clientes[i].mes, clientes[i].ano, clientes[i].saldo_atual, clientes[i].situacao);
                    printf("\n");
                }
            }
        }
        else if (opcao == 3)
        {
            printf("Saindo do programa...");
            break;
        }
    }

    return 0;
}
