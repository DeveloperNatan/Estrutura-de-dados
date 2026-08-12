/*
10. Implemente um programa em C ANSI que leia um nome completo
armazenado em uma string.

Crie a função:

void primeiraMaiuscula(char *nome);

A função deve receber a string por referência, utilizando um ponteiro,
e alterar o primeiro caractere de cada palavra para letra maiúscula,
apenas se esse caractere estiver em letra minúscula.

Considere que as palavras do nome são separadas por espaço. As demais
letras de cada palavra não devem ser modificadas.

Exemplo:

Entrada:
manfred heil junior

Saída:
Manfred Heil Junior
*/

#include <stdio.h>
#include <ctype.h>

void primeiraMaiuscula(char *nome)
{
    int i;
    int inicioPalavra;

    inicioPalavra = 1;

    for (i = 0; nome[i] != '\0'; i++)
    {
        if (nome[i] == ' ')
        {
            inicioPalavra = 1;
        }
        else if (inicioPalavra == 1)
        {
            if (islower((unsigned char)nome[i]))
            {
                nome[i] = (char)toupper((unsigned char)nome[i]);
            }

            inicioPalavra = 0;
        }
    }
}

int main(void)
{
    char nome[100];

    printf("Digite o nome completo: ");
    scanf(" %99[^\n]", nome);

    primeiraMaiuscula(nome);

    printf("Nome corrigido: %s\n", nome);

    return 0;
}