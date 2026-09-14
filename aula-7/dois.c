#include <stdio.h>

int contagemDePar(int v[], int n) {
    if (n == 0) {
        return 0;
    }

    int paresResto = contagemDePar(v, n - 1);

    if (v[n - 1] % 2 == 0) {
        return paresResto + 1;
    } else {
        return paresResto;
    }
}

int main(void) {
    int v[] = {1, 2, 3, 4, 6, 7};
    int n = sizeof(v) / sizeof(v[0]);

    printf("Pares: %i\n", contagemDePar(v, n));  

    return 0;
}   