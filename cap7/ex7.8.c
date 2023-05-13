// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int lePositivo();

int somaDivisores(int n);

int saoAmigos(int n1, int n2);

int main() {
    int n1[5];
    int n2[5];

    for (int i = 0; i < 5; i++) {
        printf("n1[%d]: ", i);

        n1[i] = lePositivo();

        printf("n2[%d]: ", i);

        n2[i] = lePositivo();
    }

    for (int i = 0; i < 5; i++) {
        printf("%d e %d ",n1[i], n2[i]);

        if (saoAmigos(n1[i], n2[i])) {
            printf("sao amigos\n");
        } else {
            printf("nao sao amigos\n");
        }
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

int saoAmigos(int n1, int n2) {
    if (somaDivisores(n1) == n2 && somaDivisores(n2) == n1) {
        return 1;
    } else {
        return 0;
    }
}