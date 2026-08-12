/*
6. Construa um programa em C ANSI que leia dois inteiros a e b e
implemente três funções:

void somar(int *a, int *b, int *res);
void subtrair(int *a, int *b, int *res);
void multiplicar(int *a, int *b, int *res);

As funções devem receber as entradas por ponteiro e gravar o resultado
em *res. Imprima os três resultados no main.
*/
#include <stdio.h>
#include <stdlib.h>

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