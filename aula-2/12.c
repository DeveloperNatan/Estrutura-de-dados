/*
12. Implemente uma função em C ANSI com a seguinte assinatura:

void media(const int *v, int n, float *m);

A função deve receber um vetor por ponteiro e seu tamanho n, calcular
a média dos elementos e gravar o resultado em *m.

Valide se n é maior que zero. No main, leia o tamanho do vetor, preencha
o vetor e imprima a média calculada.
*/
#include <stdio.h>
#include <stdlib.h>

void media( int *v, int n, float *m)
{
    int i;
    int soma;

    soma = 0;

    if (n <= 0)
    {
        *m = 0;
        return;
    }

    for (i = 0; i < n; i++)
    {
        soma = soma + v[i];
    }

    *m = (float)soma / n;
}

int main(void)
{
    int v[100];
    int n;
    int i;
    float m;
    do
    {
        printf("digit o tamanho do vetor, entre 1 e 100: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    for (i = 0; i < n; i++)
    {
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    media(v, n, &m);

    printf("media = %.2f\n", m);

    return 0;
}