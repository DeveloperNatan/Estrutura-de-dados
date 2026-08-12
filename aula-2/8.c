/*
8. Construa um programa em C ANSI que leia três inteiros a, b e c e
ordene os valores em ordem crescente usando uma função:

void ordenar3(int *a, int *b, int *c);

A função deve realizar as trocas por referência. Depois, imprima os
valores ordenados no main.
*/
#include <stdio.h>
#include <stdlib.h>

void ordenar3(int *a, int *b, int *c)
{
    int temp;

    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a > *c)
    {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main(void)
{
    int a, b, c;

    printf("Digite tres inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    ordenar3(&a, &b, &c);

    printf("Ordem crescente: %d %d %d\n", a, b, c);

    return 0;
}