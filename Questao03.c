#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float valor, operacao;

    printf("Digite qual conversao deseja fazer\n ");
    printf("1 - Metros para centimetros: \n 2 - Kg para gramas: \n 3 - horas para minutos: \n 4 - Litros para ml: \n");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite a quantidade de metros: \n");
        scanf("%f", &valor);
        operacao = valor * 100;
        printf("a conversao é %.2f", operacao);

        break;
    case 2:
        printf("Digite a quantidade KG: \n");
        scanf("%f", &valor);
        operacao = valor * 1000;
        printf("a conversao é %.2f", operacao);
        break;
    case 3:
        printf("Digite a quantidade de horas");
        scanf("%f", &valor);
        operacao = valor * 60;
        printf("a conversão é %.2f", operacao);
        break;
    case 4:
        printf("Digite a quantidade de litros: ");
        scanf("%f", &valor);
        operacao = valor * 1000;
        printf("a conversao é %.2f", operacao);
        break;

    default:
        printf("saindo do programa...");
        break;
    }
}