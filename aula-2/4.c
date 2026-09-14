#include <stdio.h>
#include <math.h>

int bhaskara(float a, float b, float c, float *x1, float *x2);

int main(void)
{
    float a, b, c, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("O valor de A deve ser diferente de zero.\n");
        return 1;
    }

    if (bhaskara(a, b, c, &x1, &x2) == 0) {
        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
    }

    return 0;
}

int bhaskara(float a, float b, float c, float *x1, float *x2)
{
    float delta;

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("sem raízes reais\n");
        return 0;
    }

    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);

    return 1;
}