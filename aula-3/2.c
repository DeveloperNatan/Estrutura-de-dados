#include <stdio.h>
#include <stdlib.h>

struct Animal
{
    char raca[50];
    char cor[50];
    float peso;
    char sexo[50];
};

void lerAnimal(struct Animal *a)
{
    printf("Qual a raça do animal? \n");
    scanf("%50s", a->raca);

    printf("Qual a cor do animal? \n");
    scanf("%50s", a->cor);

    printf("Qual o sexo do animal? \n");
    scanf("%50s", a->sexo);

    printf("Qual o peso do animal? \n");
    scanf("%f", &a->peso);
}

void imprimirAnimal(struct Animal *a)
{
    printf("Ficha do animal\n"
           " Raça: %s | Cor: %s | Peso: %.2f | Sexo: %s\n",
           a->raca, a->cor, a->peso, a->sexo);
}

int main(void)
{
    struct Animal animais[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\n--- Cadastro do animal %d ---\n", i + 1);
        lerAnimal(&animais[i]);
    }

    printf("\n=== Todos os animais cadastrados ===\n");
    for (int i = 0; i < 10; i++)
    {
        imprimirAnimal(&animais[i]);
    }

    return 0;
}