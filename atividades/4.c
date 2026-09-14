/*4. Implemente uma função recursiva em C ANSI que retorne o maior elemento de um vetor de inteiros.


int maiorValor(int v[], int n) {

    // Sua função aqui

}


Considere que n é o tamanho do vetor. A função deve comparar os elementos de forma recursiva e
retornar o maior valor armazenado.

R */
#include <stdio.h>

int maiorValor(int v[], int n)
{
    if (n == 1)
    {
        return 1;
    }

    int maior = maiorValor(v, n - 1);

    if (v[n - 1] > maior)
    {
        return v[n - 1];
    }
    else
    {
        return maior;
    }
}

int main(void)
{
    int v[] = {1, 37, 178, 9, 12};
    int n = sizeof(v) / sizeof(v[0]);

    printf("O maior numero número da lista de vetores é: %i\n", maiorValor(v, n));

    return 0;
}