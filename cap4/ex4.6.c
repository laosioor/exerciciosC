// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[5];
    int p[5];
    int b, q = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf(" %d", &n[i]);
    }


    printf("Buscar por: ");
    scanf(" %d", &b);

    for (int i = 0; i < 5; i++) {
        if (n[i] == b) {
            for (int j = q; j < 5; j++) {
                p[j] = i;
                q++;
                break;
            }
        }
    }

    if (q == 0) {
        printf("O array nao contem o valor %d.", b);
    } 
    else {
        printf("O valor %d foi encontrado ", b);

        if (q == 1) {
            printf("no indice ");
        } else {
            printf("nos indices ");
        }

        for (int i = 0; i < q; i++) {
            printf("%d", p[i]);

            if (i + 1 == q) {
                break;
            } else if (i+1 == q-1) {
                printf(" e ");
            } else {
                printf(", ");
            }
        }

        printf(" do array.");
    }

    return 0;
}