// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int lePositivo();

int somaDivisores(int n);

int main() {
    int n[5];

    for (int i = 0; i < 5; i++) {
        printf("n[%d]: ", i);
        n[i] = lePositivo();
    }

    for (int i = 0; i < 5; i++) {
        printf("Soma dos divisores de %d: %d\n", n[i], somaDivisores(n[i]));
    }
    
    return 0;
}

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

int somaDivisores(int n) {
    int s = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            s += i;
        }
    }

    return s; 
}