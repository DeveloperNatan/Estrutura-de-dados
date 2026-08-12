#include <stdio.h>

void somar(int *a, int *b, int *res)
{
    *res = *a + *b;
}

void subtrair(int *a, int *b, int *res)
{
    *res = *a - *b;
}

void multiplicar(int *a, int *b, int *res)
{
    *res = *a * *b;
}

int main(void)
{
    int a, b;
    int soma, subtracao, multiplicacao;

    printf("Digite o primeiro inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo inteiro: ");
    scanf("%d", &b);

    somar(&a, &b, &soma);
    subtrair(&a, &b, &subtracao);
    multiplicar(&a, &b, &multiplicacao);

    printf("soma = %d\n", soma);
    printf("subtracao = %d\n", subtracao);
    printf("multi = %d\n", multiplicacao);

    return 0;
}