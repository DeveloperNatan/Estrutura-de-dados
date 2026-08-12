/*
5. Construa um programa em C ANSI que leia o raio r e calcule a área
do círculo em uma função void areaCirculo(float r, float *area) que
grave o resultado em *area. Use pi = 3.141592 e, no main, imprima
a área com duas casas decimais.
*/
#include <stdio.h>
#include <stdlib.h>

void areaCirculo(float r, float *area)
{
    float pi;

    pi = 3.141592f;
    *area = pi * r * r;
}

int main(void)
{
    float r;
    float area;

    printf("Digite o raio: ");
    scanf("%f", &r);

    areaCirculo(r, &area);

    printf("Area = %.2f\n", area);

    return 0;
}