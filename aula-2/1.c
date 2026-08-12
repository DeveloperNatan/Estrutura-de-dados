/*
1. Construa um programa em C ANSI que defina uma estrutura Pessoa (ex.: nome, idade, peso)
e implemente duas funções: Pessoa lerPessoa(void) para preencher os campos via teclado e
void imprimirPessoa(Pessoa p) para exibir os dados na tela.
*/
#include <stdio.h>
#include <stdlib.h>

struct Pessoa
{
    char nome[20];
    int idade;
    float peso;
};

struct Pessoa LerPessoa(void)
{
    struct Pessoa p1;
    printf("Qual seu nome? \n");
    scanf("%99s", &p1.nome);

    printf("Qual seu idade? \n");
    scanf("%i", &p1.idade);

    printf("Qual seu peso? \n");
    scanf("%f", &p1.peso);
    return p1;
}

void ImprimirPessoa(struct Pessoa p1)
{
    printf("Seu nome é %s, você tem %i anos e pesa %.2f kg\n", p1.nome, p1.idade, p1.peso);
}

int main()
{
    struct Pessoa p1 = LerPessoa();
    ImprimirPessoa(p1);
    return 0;
}