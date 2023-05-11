// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int lePositivo() {
    int n;

    do {
        scanf(" %d", &n);

        if (n <= 0) {
            printf("Entre com um valor positivo: ");
        }
    } while (n <= 0);

    return n;
}

int somatorio(int n) {
    int s = 0;
    for (int i = 0; i <= n; i++) {
        s += i;
    }

    return s;
}

int main() {
    int n[5];

    for (int i = 0; i < 5; i++) {
        printf("n[%d]: ", i);
        n[i] = lePositivo();
    }

    for (int i = 0; i < 5; i++) {
        printf("Somatorio de 1 a %d: %d\n", n[i], somatorio(n[i]));
    }

    return 0;
}