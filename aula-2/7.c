#include <stdio.h>

void fatorial(int n, double *fat)
{
    int i;

    *fat = 1;

    for (i = 1; i <= n; i++)
    {
        *fat = *fat * i;
    }
}

int main(void)
{
    int n;
    double fat;

    do
    {
        printf("Digite um inteiro maior ou igual a zero: ");
        scanf("%d", &n);
    } while (n < 0);

    fatorial(n, &fat);

    printf("%d! = %.0f\n", n, fat);

    return 0;
}