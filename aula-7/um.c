#include <stdio.h>
#include <stdlib.h>


int pit(int n) {
    if (n == 1) {
        return 1;
    }
    return pit(n - 1) + n;
}

int main(void) {
    int n;

   printf("digite n: ");
   scanf("%i", &n);

    printf("Termo %i da serie de Pitagoras: %i\n", n, pit(n));

    return 0;
}