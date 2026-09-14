#include <stdio.h>
#include <stdlib.h>

void ordenar(int *a);
void troca(int *a, int *b);

int main(void)
{
    int n[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite %i numero: ", i + 1);
        scanf("%i", &n[i]);
    }

    ordenar(n);

    for (int i = 0; i < 10; i++)
        printf("%i, ", n[i]);

    return 0;
}

void ordenar(int *a)
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (a[i] < a[j])
            {
                troca(&a[i], &a[j]);
            }
        }
    }
}

void troca(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}