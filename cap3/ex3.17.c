// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int a = 0, b = 1, c = 0, t = 1;

    printf("Termo desejado: ");
    scanf(" %d", &n);

    for (int i = 0; i < n; i++) {
        t = a + b; 
        a = b;
        b = t;
    }

    printf("Fibonacci de %d e %d", n, t);
    return 0;
}