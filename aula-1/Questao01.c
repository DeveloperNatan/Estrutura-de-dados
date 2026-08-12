#include <stdio.h>
#include <stdlib.h>

int main()
{
    int LitrosEntregues;
    float LitrosValor, Desconto, Percentual, ValorBruto, ValorDescontado, ValorLiquido;

    printf("Digite a quantidade de litros entregues: ");
    scanf("%i", &LitrosEntregues);
    printf("Digite a quantidade do valor pago pelo litro: ");
    scanf("%f", &LitrosValor);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &Desconto);

    Percentual = Desconto / 100;
    ValorBruto = LitrosEntregues * LitrosValor;
    ValorDescontado = Percentual * ValorBruto;
    ValorLiquido = ValorBruto - ValorDescontado;

    printf("Valor bruto: %.2f", ValorBruto);
    printf("\n");
    printf("Valor do desconto: %.2f", ValorDescontado);
    printf("\n");
    printf("Valor liquido: %.2f", ValorLiquido);
    printf("\n");

    return 0;
}