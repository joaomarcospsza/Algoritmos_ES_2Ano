#include <stdio.h>
#include <ctype.h>

/*Um vendedor de automóveis armazena os seguintes dados de um veículo:
fabricante, modelo, ano, placa, cor, tipo de combustível (A é álcool e G é
gasolina), preço e valor do IPVA. Escreva a declaração de um registro para estes
dados.*/

struct veiculo
{
    char fabricante[50];
    char modelo[50];
    int ano;
    char placa[10];
    char cor[20];
    char tipo_combustivel; // A para álcool e G para gasolina
    float preco;
    float valor_ipva;
};

int main()
{
    struct veiculo carros[100];
    int opcao = 0, count_veiculo = 0;

    while (opcao != 2)
    {
        printf("1 - Cadastrar novo Veiculo \n");
        printf("2 - Sair \n");
        printf("Informe a opcao: ");
        scanf("%i", &opcao);

        if (opcao == 1)
        {
            printf("Digite o fabricante: ");
            scanf("%s", carros[count_veiculo].fabricante);

            printf("Digite o modelo: ");
            scanf("%s", carros[count_veiculo].modelo);

            printf("Digite o ano: ");
            scanf("%d", &carros[count_veiculo].ano);

            printf("Digite a placa: ");
            scanf("%s", carros[count_veiculo].placa);

            printf("Digite a cor: ");
            scanf("%s", carros[count_veiculo].cor);

            printf("Digite o tipo de combustivel (A ou G): ");
            scanf(" %c", &carros[count_veiculo].tipo_combustivel);

            while(carros[count_veiculo].tipo_combustivel != 'A' || carros[count_veiculo].tipo_combustivel != 'G');
            {
                printf("Tipo de combustivel errado..");
                printf("Digite o tipo de combustivel (A ou G): ");
                scanf(" %c", &carros[count_veiculo].tipo_combustivel);
            }
            
            printf("Digite o preco: ");
            scanf("%f", &carros[count_veiculo].preco);

            printf("Digite o valor do IPVA: ");
            scanf("%f", &carros[count_veiculo].valor_ipva);

            printf("\nVeiculo cadastrado com sucesso!\n");
            count_veiculo++;
        }
        else if (opcao == 2)
        {
            printf("Finalizando...\n");
        }
        else
        {
            printf("Essa opcao nao existe.\n");
        }
    }

    printf("Carros cadastrados:\n");
    for (int i = 0; i < count_veiculo; i++)
    {
        printf("%s\n", carros[i].modelo);
    }

    return 0;
}
