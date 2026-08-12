#include <stdio.h>
#include <math.h>

typedef struct
{
    float a;
    float b;
    float c;
    float x1;
    float x2;
} Equacao;

void bhaskara(float a, float b, float c, float *x1, float *x2)
{
    float delta;

    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("sem raízes reais\n");
        return;
    }

    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);
}

int main(void)
{
    Equacao eq;
    float delta;

    printf("Digite o valor de a: ");
    scanf("%f", &eq.a);

    while (eq.a == 0)
    {
        printf("O valor de a deve ser diferente de zero.\n");
        printf("Digite outro valor para a: ");
        scanf("%f", &eq.a);
    }

    printf("Digite o valor de b: ");
    scanf("%f", &eq.b);

    printf("Digite o valor de c: ");
    scanf("%f", &eq.c);

    delta = eq.b * eq.b - 4 * eq.a * eq.c;

    bhaskara(eq.a, eq.b, eq.c, &eq.x1, &eq.x2);

    if (delta >= 0)
    {
        printf("x1 = %.2f\n", eq.x1);
        printf("x2 = %.2f\n", eq.x2);
    }

    return 0;
}