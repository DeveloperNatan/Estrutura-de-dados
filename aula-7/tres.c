/*
3. Implemente apenas a função int somaDigitos(int x) que retorna a soma 
dos dígitos de x de forma recursiva. (Exemplo: 538 → 5 + 3 + 8 = 16). 
*/

#include <stdio.h>
#include <stdlib.h>

int somaDigitos(int x);


int main(void){
    int n, res;

    printf("digite um numero: \n");
    scanf("%i", &n);

    res = somaDigitos(n);
    printf("%i\n", res);
    return 0;
}


int somaDigitos(int x){
      if (x == 0) {
        return 0;
    }
    return (x %10) + somaDigitos(x/10);

}