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