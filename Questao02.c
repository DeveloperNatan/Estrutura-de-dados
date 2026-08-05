#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Tarifa;
    int ConsumoMes, FaixaCliente;

    printf("Digite o valor da conta em kWh: ");
    scanf("%i", &ConsumoMes);

    if (ConsumoMes < 100)
    {
        Tarifa = 0.60;
        FaixaCliente = 1;
    }
    else if (ConsumoMes > 100 && ConsumoMes < 250)
    {
        Tarifa = 0.85;
        FaixaCliente = 2;
    }
    else
    {
        Tarifa = 1.10;
        FaixaCliente = 3;
    }

    printf("A tarifa paga pelo cliente é %.2f", Tarifa);
    printf("O Cliente se enquadra na %i faixa", FaixaCliente);

    return 0;
}