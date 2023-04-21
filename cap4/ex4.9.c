// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[5];
    int in[5];

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf(" %d", &n[i]);
        in[4-i] = n[i];
    }

    for (int i = 0; i < 5; i++) {
        printf("arrayInv[%d] = %d\n", i, in[i]);
    }
    
    return 0;
}