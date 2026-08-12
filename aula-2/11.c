/*
11. Implemente um programa em C ANSI que leia uma linha de texto e
crie uma função:

void paraMaiusculas(char *texto);

A função deve converter todos os caracteres alfabéticos para maiúsculo,
modificando o texto por referência.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void paraMaiusculas(char *texto)
{
    int i;

    for (i = 0; texto[i] != '\0'; i++)
    {
        texto[i] = (char)toupper((unsigned char)texto[i]);
    }
}

int main(void)
{
    char texto[200];

    printf("digite uma linha de texto: ");
    scanf(" %199[^\n]", texto);

    paraMaiusculas(texto);

    printf("Texto em maiusculas: %s\n", texto);

    return 0;
}