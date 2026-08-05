#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Quantidade;
    float media, A, B, C;

    printf("Quantos pontos serão monitorados?\n ");
    scanf("%i", &Quantidade);

    for (int i = 1; i <= Quantidade; i++)
    {
        printf("Digite a primiera medição do ponto %i: \n", i);
        scanf("%i", &A);
        printf("Digite a primiera medição do ponto %i: \n", i);
        scanf("%i", &B);
        printf("Digite a primiera medição do ponto %i \n", i);
        scanf("%i", &C);

        media = (A + B + C) / 3;
        if (media < 40)
        {
            printf("O solo é seco e a media é  %i: \n", media);
        }
        else
        {
            printf("O solo é umido é a media é %i: \n", media);
        }
    }
}