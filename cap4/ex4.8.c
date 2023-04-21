// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[5];
    int p[5];
    int im[5];
    int qP = 0, qI = 0;

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf(" %d", & n[i]);

        if (n[i] % 2 == 0) {
            for (int j = qP; j < 5; j++) {
                p[j] = n[i];
                break;
            }
            qP++;
        } else {
            for (int j = qI; j < 5; j++)
            {
                im[j] = n[i];
                break;
            }
            qI++;
        }
    }

    printf("Numeros pares:");
    if (qP != 0) {
        for (int i = 0; i < qP; i++) {
            printf(" %d", p[i]);
        }
        printf(".\n");
    } else {
        printf(" nao ha.\n");
    }

    printf("Numeros impares:");
    if (qI != 0) {
        for (int i = 0; i < qI; i++) {
            printf(" %d", im[i]);
        }
        printf(".");
    } else {
        printf(" nao ha.");
    }
    
    return 0;
}