// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;

    printf("Altura: ");
    scanf(" %d", &a);

    if (a > 0) {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a - (1 * (i + 1)); j++) {
                printf(" ");
            }

            for (int k = 0; k < i + ((i - 1) + 2); k++) {
                printf("*");
            }

            printf("\n");
        }

    } else {
        a = a*-1;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < i; j++) {
                printf(" ");
            }

            for (int k = 0; k < ((a - i) * 2) - 1; k++) {
                printf("*");
            }

            printf("\n");
        }
    }
    
    return 0;
}