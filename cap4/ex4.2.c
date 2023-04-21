// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[5];
    int m[5];
    int nm;

    int t = (int) (sizeof(n) / sizeof(n[0]));

    for (int i = 0; i < t; i++) {
        printf("array[%d]: ", i);
        scanf(" %d", &n[i]);
    }

    printf("Multiplicar por: ");
    scanf(" %d", &nm);

    for (int i = 0; i < t; i++) {
        m[i] = n[i] * nm;
        printf("arrayMult[%d] = %d\n", i, m[i]);
    }
    
    return 0;
}