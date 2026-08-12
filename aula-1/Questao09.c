#include <stdio.h>
#include <stdlib.h>

void cabecalho()
{
    printf("\n--- Relatorio físico ---\n");
}

float Calculo(float peso, float altura)
{
    return peso / (altura * altura);
}

int main()
{

    float peso[6];
    float altura[6];
    float imc[6];
    float total = 0;
    float media;

    for (int i = 1; i <= 21; i++)
    {
        printf("Digite o peso do aluno %i: \n", i);
        scanf("%f", &peso[i]);
        printf("Digite a altura do aluno %i em metros: \n", i);
        scanf("%f", &altura[i]);
        imc[i] = Calculo(peso[i], altura[i]);
        total += imc[i];
        printf("o Valor do imc é %.2f \n", imc[i]);
    }
    cabecalho();
    for (int i = 1; i <= 6; i++)
    {
        printf("Aluno %i possui imc %.2f \n", i, imc[i]);
    }

    media = total / 6;
    printf("Media geral é %.2f", media);
    return 0;
}