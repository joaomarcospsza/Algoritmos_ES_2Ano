#include <stdio.h>
#include <ctype.h>

struct cliente
{
    char nome[50];
    char endereco[50];
    char plano_acesso_str[50];
    int plano_acesso; // (1 – ilimitado; 2 – 20 horas/mês; 3 – 10 horas/mês)
    float mensalidade;
    char situacao;
    char situacao_str[10]; // (A – Ativo ou I – Inativo)
};

int main()
{
    struct cliente clientes[50];
    int count_cliente = 0, opcao = 0;

    while (opcao != 3)
    {

        printf("1 - Novo Cliente. \n");
        printf("2 - Lista de Clientes. \n");
        printf("3 - Sair. \n");
        printf("Opcao: ");
        scanf("%i", &opcao);

        while (opcao < 1 || opcao > 3)
        {
            printf("\nOpcao Invalida, Por Favor, informe novamente. \n");
            printf("1 - Novo Cliente. \n");
            printf("2 - Lista de Clientes. \n");
            printf("3 - Sair. \n");
            printf("Opcao: ");
            scanf("%i", &opcao);
            printf("\n");
        }

        if (opcao == 1)
        {
            printf("Digite o nome do %i cliente: ", count_cliente + 1);
            scanf("%s", clientes[count_cliente].nome);

            printf("Digite o endereco do %i cliente: ", count_cliente + 1);
            scanf("%s", clientes[count_cliente].endereco);

            printf("Informe o plano de acesso do %i cliente:\n (1 – ilimitado;\n 2 – 20 horas/mês;\n 3 – 10 horas/mês)", count_cliente + 1);
            scanf("%i", &clientes[count_cliente].plano_acesso);

            while (clientes[count_cliente].plano_acesso < 1 || clientes[count_cliente].plano_acesso > 3)
            {
                printf("\nOpcao Invalida, Por Favor, informe novamente.\n");
                printf("Informe o plano de acesso do %i cliente:\n (1 – ilimitado;\n 2 – 20 horas/mês;\n 3 – 10 horas/mês)", count_cliente + 1);
                scanf("%i", &clientes[count_cliente].plano_acesso);
            }

            switch (clientes[count_cliente].plano_acesso)
            {
            case 1:
                printf("Ilimitado");
                break;

            case 2:
                printf("20 horas/mês");
                break;

            case 3:
                printf("10 horas/mês");
                break;
            }

            printf("Informe a mensalidade do %i cliente: ", count_cliente + 1);
            scanf("%f", &clientes[count_cliente].mensalidade);

            printf("Digite a situacao do %i clinte (A – Ativo ou I – Inativo): ", count_cliente + 1);
            scanf("%c", &clientes[count_cliente].situacao);
            clientes[count_cliente].situacao = toupper(clientes[count_cliente].situacao);

            while (clientes[count_cliente].situacao != 'A' && clientes[count_cliente].situacao != 'I')
            {
                printf("\nOpcao Invalida, Por Favor, informe novamente.\n");
                printf("Digite a situacao do %i clinte (A – Ativo ou I – Inativo): ", count_cliente + 1);
                scanf("%c", &clientes[count_cliente].situacao);
                clientes[count_cliente].situacao = toupper(clientes[count_cliente].situacao);
            }

            printf("O %i primeiro cliente, foi registrado com Sucesso.");

            count_cliente++;
        }
        else if (opcao == 2)
        {
            if (count_cliente == 0)
            {
                printf("Nenhum clientes registrado no momento. \n");
            }
            else if (count_cliente != 0)
            {
                printf("Lista de Clietes: \n");
                for (int i = 0; i < count_cliente; i++)
                {
                    printf("Cliente:%i, Nome:%s, Endereco:%s, plano de acesso:%s , mensalidade:%.2f , situacao:%s", i + 1, clientes[i].nome, clientes[i].endereco, clientes[i].plano_acesso_str, clientes[i].situacao_str);
                }
            }
        }
        else if (opcao == 3)
        {
            printf("Saindo do Programa...");
        }
    }
    return 0;
}
