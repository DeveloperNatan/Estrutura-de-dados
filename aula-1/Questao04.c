#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade = 0;
    float venda, total = 0, media;

    printf("Digite o valor das vendas (digite 0 para encerrar):\n");
    scanf("%f", &venda);

    while (venda != 0)
    {
        total = total + venda;
        quantidade++;

        printf("Digite o valor das vendas (digite 0 para encerrar):\n");
        scanf("%f", &venda);
    }

    if (quantidade == 0)
    {
        printf("Nao houve movimento no caixa.");
    }
    else
    {
        media = total / quantidade;

        printf("Quantidade de vendas registradas: %i\n", quantidade);
        printf("Valor total vendido: %.2f\n", total);
        printf("Valor medio por venda: %.2f\n", media);
    }

    return 0;
}