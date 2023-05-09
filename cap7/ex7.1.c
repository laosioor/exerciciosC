// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int absoluto(int n) {
    if (n < 0) {
        n = -n;
    }

    return n;
}

int main() {
    int numeros[5];

    for (int i = 0; i < 5; i++) {
        printf("n%d: ", i);
        scanf(" %d", &numeros[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("absoluto(%d) = %d\n", numeros[i], absoluto(numeros[i]));
    }


    return 0;
}