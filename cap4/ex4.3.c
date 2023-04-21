// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n[5];
    float s = 0, p = 1;

    int t = (int) (sizeof(n) / sizeof(n[0]));

    for (int i = 0; i < t; i++) {
        printf("array[%d]: ", i);
        scanf(" %f", &n[i]);
    }

    for (int i = 0; i < t; i++) {
        s += n[i];
        p *= n[i];
    }

    printf("Somatorio: %.2f\n", s);
    printf("Produtorio: %.2f", p);

    return 0;
}