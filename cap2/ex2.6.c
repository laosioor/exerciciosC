// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n;

    printf("Numero: ");
    scanf("%f", &n);

    if (n > 20) {
        printf("Metade de %.2f: %.2f", n, n/2);
    } else {
        printf("Triplo de %.2f: %.2f", n, n*3);
    }
    return 0;
}