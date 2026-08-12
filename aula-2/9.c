#include <stdio.h>
#include <windows.h>

//nao consigar rodar pois uso linux, utilizei ajuda de AI para fazer o codigo

void imprimirNaPosicao(int linha, int coluna, char *msg)
{
    HANDLE console;
    COORD posicao;

    console = GetStdHandle(STD_OUTPUT_HANDLE);

    posicao.X = (SHORT)coluna;
    posicao.Y = (SHORT)linha;

    SetConsoleCursorPosition(console, posicao);
    printf("%s", msg);
}

int main(void)
{
    int linha, coluna;
    char msg[100];

    printf("Digite a linha: ");
    scanf("%d", &linha);

    printf("Digite a coluna: ");
    scanf("%d", &coluna);

    printf("Digite a mensagem: ");
    scanf(" %99[^\n]", msg);

    imprimirNaPosicao(linha, coluna, msg);

    return 0;
}