// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[5];
    int c[5];

    int t = (int) ( sizeof( n ) / sizeof( n[0] ) );

    for (int i = 0; i < t; i++) {
        printf("array[%d]: ", i);
        scanf(" %d", &n[i]);

        c[i] = n[i] * n[i] * n[i];
    }

    for (int i = 0; i < t; i++) {
        printf("arrayCubo[%d] = %d\n", i, c[i]);
    }
    return 0;
}