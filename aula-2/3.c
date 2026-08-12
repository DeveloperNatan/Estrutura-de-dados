/*
3. Construa um programa em C ANSI que defina uma estrutura Peca com código, nome, cor, peso e preço, implemente lerPeca(Peca *p) e imprimirPeca(Peca *p).
*/

#include <stdio.h>
#include <stdlib.h>

struct Peca
{
    char codigo[50];
    char nome[50];
    char cor[50];
    float peso;
    float preco;
};

void LerPeca(struct Peca *p)
{
    printf("Qual o código da peça? \n");
    scanf("%50s", p->codigo);

    printf("Qual nome da peça? \n ");
    scanf("%50s", p->nome);

    printf("Qual a cor da peça? \n");
    scanf("%50s", p->cor);

    printf("Qual a peso da peça? \n");
    scanf("%f", &p->peso);

    printf("Qual a preço da peça? \n");
    scanf("%f", &p->preco);
}

void ImprimirPeca(struct Peca *p)
{
    printf("Cadastro da peça\n"
           "Cod: %s | Nome: %s | Cor: %s | Peso: %.2f | Preco: %.2f \n",
           p->codigo, p->nome, p->cor, p->peso, p->preco);
}

int main(void)
{
    struct Peca pecas[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\n -- Cadastro de peça --\n");
        LerPeca(&pecas[i]);
    }

    printf("\n -- Peças cadastradas -- \n");
    for (int i = 0; i < 5; i++)
    {
        ImprimirPeca(&pecas[i]);
    }
}