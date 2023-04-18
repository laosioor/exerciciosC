// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[5];
    int p[5];
    int b;
    
    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf(" %d", &n[i]);
    }


    printf("Buscar por: ");
    scanf(" %d", &b);

    for (int i = 0; i < 5; i++) {
        if (n[i] == b) {
            for (int j = 0; j < 5; j++) {
                if (p[j] != 0) {
                    continue;
                }

                p[j] = i;
            }
        }
    }    

    int t = (int) (sizeof(p[]) / sizeof(p[0]));

    for (int i = 0; i < t; i++) {
        printf("foi encontrado no indice: %d", p[i]);
    }
    return 0;
}