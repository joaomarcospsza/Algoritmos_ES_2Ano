#include <stdio.h>

struct tecido
{
    int codigo_numerico;
    char descricao[100];
    float preco_metro;
    int quantida_estoque_metro;
};

int main()
{
    struct tecido tecidos[30];
    int count_tecido = 0, opcao = 0;

    while (opcao != 3)
    {

        int opcao_relatorio = 0, opcao = 0;
        int i;

        printf("1 - Armazenar novo Tecido. \n");
        printf("2 - Relatorios. \n");
        printf("3 - Sair. \n");
        printf("Opcao: ");
        scanf("%i", &opcao);

        while (opcao < 1 || opcao > 3)
        {
            printf("\nOpcao Invalida, Por Favor, informe novamente. \n");
            printf("1 - Armazenar novo Tecido. \n");
            printf("2 - Relatorio. \n");
            printf("3 - Sair. \n");
            printf("Opcao: ");
            scanf("%i", &opcao);
            printf("\n");
        }

        if (opcao == 1)
        {
            printf("Codigo Numerico: ");
            scanf("%i", &tecidos[count_tecido].codigo_numerico);

            printf("Descricao: ");
            scanf("%s", tecidos[count_tecido].descricao);

            printf("Preco por metro: ");
            scanf("%f", &tecidos[count_tecido].preco_metro);

            printf("Quantidade estoque em metros: ");
            scanf("%i", &tecidos[count_tecido].quantida_estoque_metro);

            printf("Tecido registrado com sucesso. \n");

            count_tecido++;
        }
        else if (opcao == 2)
        {
            if (count_tecido == 0)
            {
                printf("Nenhum Tecido registrado. \n");
            }
            else if (count_tecido != 0)
            {
                while (opcao_relatorio != 4)
                {
                    printf("1 - Tecidos cadastrados. \n");
                    printf("2 - Tecidos inferiores a 50 metros. \n");
                    printf("3 - Tecidos preco menor a R$0,60 o metro. \n");
                    printf("4 - Sair. \n");
                    printf("Opcao: ");
                    scanf("%i", &opcao_relatorio);
                    printf("\n");

                    while (opcao_relatorio < 1 || opcao_relatorio > 4)
                    {
                        printf("\nOpcao Invalida, Por Favor, informe novamente. \n");
                        printf("2 - Tecidos inferiores a 50 metros. \n");
                        printf("3 - Tecidos preco menor a R$0,60 o metro. \n");
                        printf("4 - Sair. \n");
                        printf("Opcao: ");
                        scanf("%i", &opcao_relatorio);
                        printf("\n");
                    }

                    if (opcao_relatorio == 1)
                    {
                        printf("Todos os Tecidos Registrados: \n");
                        for (int i = 0; i < count_tecido; i++)
                        {
                            printf("N:%i, Codigo Numerico:%i, Preco por Metro:%.2f, Quantidade Estoque em Metros:%i \n", i + 1, tecidos[i].codigo_numerico, tecidos[i].preco_metro, tecidos[i].quantida_estoque_metro);
                        }
                    }
                    else if (opcao_relatorio == 2)
                    {
                        int tecidos_com_estoque_baixo = 0;
                        for (int i = 0; i < count_tecido; i++)
                        {
                            if (tecidos[i].quantida_estoque_metro <= 50)
                            {
                                tecidos_com_estoque_baixo++;
                            }
                        }

                        if (tecidos_com_estoque_baixo > 0)
                        {
                            printf("Tecidos com Estoque inferior a 50 metros: \n");
                            for (int i = 0; i < count_tecido; i++)
                            {
                                if (tecidos[i].quantida_estoque_metro <= 50)
                                {
                                    printf("N:%i, Codigo Numerico:%i, Quantidade Estoque em Metros:%i \n", i + 1, tecidos[i].codigo_numerico, tecidos[i].quantida_estoque_metro);
                                }
                            }
                        }
                        else
                        {
                            printf("Todos os Tecidos estão com o estoque acima de 50 Metros. \n");
                        }
                    }
                    else if (opcao_relatorio == 3)
                    {
                        int tecidos_com_valor_baixo = 0;
                        for (int i = 0; i < count_tecido; i++)
                        {
                            if (tecidos[i].preco_metro <= 0.60)
                            {
                                tecidos_com_valor_baixo++;
                            }
                        }

                        if (tecidos_com_valor_baixo > 0)
                        {
                            printf("Tecidos com o valor abaixo R$0,60: \n");
                            for (int i = 0; i < count_tecido; i++)
                            {
                                if (tecidos[i].preco_metro <= 0.60)
                                {
                                    printf("N:%i, Codigo Numerico:%i, Preco por Metro:%.2f, Quantidade Estoque em Metros:%i \n", i + 1, tecidos[i].codigo_numerico, tecidos[i].preco_metro, tecidos[i].quantida_estoque_metro);
                                }
                            }
                        }
                        else
                        {
                            printf("Todos os Tecidos registrados possuem um valor maior que R$0,60 o Metro. \n");
                        }
                    }
                    else if (opcao_relatorio == 4)
                    {
                        printf("Saindo dos Relatorios... \n");
                    }
                }
            }
        }
        else if (opcao == 3)
        {
            printf("Finalizando o programa...");
            break;
        }
    }

    return 0;
}
