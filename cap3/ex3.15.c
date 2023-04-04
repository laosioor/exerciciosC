// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int f = 1;

    printf("N: ");
    scanf(" %d", &n);
    

    if (n > 0) {
        for (int i = n; i >= 1; i--) {
            f *= i;
        } 

        printf("%d! = %d", n, f);
    }

    else {
        printf("Nao ha fatorial de numero negativo.");
    }
    return 0;
}