// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

float maiorNumero(float n1, float n2);

int main() {
    float n1[5];
    float n2[5];

    for (int i = 0; i < 5; i++) {
        do {
            printf("n1[%d]: ", i);
            scanf(" %f", &n1[i]);

            if (n1[i] <= 0) {
                printf("Entre com um valor positivo!\n");
            }
        } while (n1[i] <= 0);
        
        do {
            printf("n2[%d]: ", i);
            scanf(" %f", &n2[i]);

            if (n2[i] <= 0) {
                printf("Entre com um valor positivo!\n");
            }

        } while (n2[i] <= 0);
    }

    for (int i = 0; i < 5; i++) {
        printf("%.2f, %.2f: ", n1[i], n2[i]);
        if (maiorNumero(n1[i], n2[i]) == 0) {
            printf("Eles sao iguais\n");
        } else {
            printf("O maior valor e %.2f\n", maiorNumero(n1[i],n2[i]));
        }
    }

    return 0;
}

float maiorNumero(float n1, float n2) {
    float maior;
    if (n1 == n2) {
        maior = 0;
    } else {
        maior = n1 > n2 ? n1 : n2;
    }

    return maior;
}