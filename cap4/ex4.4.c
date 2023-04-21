// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[5];
    int b;
    int t = (int) (sizeof(n) / sizeof(n[0]));

    for (int i = 0; i < t; i++)
    {
        printf("array[%d]: ", i);
        scanf(" %d", &n[i]);
    }

    printf("Buscar por: ");
    scanf(" %d", &b);
    
    for (int i = 0; i < t; i++) {
        printf("Indice %d: ", i);

        if (n[i] == b) {
            printf("ACHEI\n");
        } else {
            printf("NAO ACHEI\n");
        }
    }
    
    return 0;
}