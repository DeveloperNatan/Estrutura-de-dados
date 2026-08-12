/*
4. Construa um programa em C ANSI que leia a, b e c (com a != 0) e 
calcule as raízes da equação do 2º grau usando uma função bhaskara
(float a, float b, float c, float *x1, float *x2) que grave os valores 
em *x1 e *x2, tratando delta < 0 com uma mensagem “sem raízes reais”.*/

#include <stdio.h>
#include <math.h>

void Bhaskara(float a, float b, float c, float *x1, float *x2)
{
    float delta;

    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("sem raiz real\n");
        return;
    }

    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);
}

int main(void)
{
    float a, b, c;
    float x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    while (a == 0)
    {
        printf("O valor de a deve ser diferente de zero.\n");
        printf("Digite outro valor para a: ");
        scanf("%f", &a);
    }

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    Bhaskara(a, b, c, &x1, &x2);


    if (b * b - 4 * a * c >= 0)
    {
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}