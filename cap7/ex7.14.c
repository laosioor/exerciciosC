// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void imprimeDuplaClassificada(int, int, bool);

int main() {    
    int n1[5];
    int n2[5];

    for (int i = 0; i < 5; i++) {
        printf("n1[%d]: ", i);
        scanf(" %d", &n1[i]);

        printf("n2[%d]: ", i);
        scanf(" %d", &n2[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            imprimeDuplaClassificada(n1[i], n2[i], 1);
        } else {
            imprimeDuplaClassificada(n1[i], n2[i], 0);
        }
    }
    return 0;
}

void imprimeDuplaClassificada(int n1, int n2, bool emOrdemCrescente) {
    char simb = '<';

    printf("\n%d e %d: ", n1, n2);
    
    if (n1 > n2) {
        int t = n1;
        n1 = n2;
        n2 = t;
    }

    if (!emOrdemCrescente) {
        int t = n2;
        n2 = n1;
        n1 = t;
        simb = '>';
    }

    printf("%d %c= %d", n1, simb, n2);
}